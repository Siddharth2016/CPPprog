#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
    int data;
    struct BST *lchild, *rchild;
} node;

// Get new Node

node *get_node()
{
    node *temp;
    temp = (node *) malloc(sizeof(node));
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}
/*
 This function is for creating a binary search tree
 */
void insert(node *root, node *new_node)
{
    if (new_node->data < root->data)
    {
        if (root->lchild == NULL)
            root->lchild = new_node;
        else
            insert(root->lchild, new_node);
    }

    if (new_node->data > root->data)
    {
        if (root->rchild == NULL)
            root->rchild = new_node;
        else
            insert(root->rchild, new_node);
    }
}
// start
node *minimum(node *root)
{
    node *temp;
    temp=root;
    while(temp->lchild!=NULL)
        temp=temp->lchild;
    return temp;
}

node* successor(node* root, node* tofind)
{
	if (!root || !tofind) return;

    node* succ=NULL;
	if (tofind->rchild)
    {
		succ=tofind->rchild;
		while(succ->lchild)
		{
			succ=succ->lchild;
		}
	}
	else
	{
		while (root)
		{
			if (tofind->data < root->data)
			{
				succ=root;
				root=root->lchild;
			}
			else if(tofind->data>root->data)
			{
				root=root->rchild;
			}
			else
			{
				break;
			}
		}
	}
    return succ;
}
int numberofleaf(node *root)
{
    static int count=0;
    if(root->lchild==NULL && root->rchild==NULL)
        count++;
    if(root->lchild!=NULL)
        count=numberofleaf(root->lchild);
    if(root->rchild!=NULL)
        count=numberofleaf(root->rchild);
    else
        return count;
}

node *deleteval(node* root, int key)
{
    if(root==NULL)
        return root;


    if (key<root->data)
        root->lchild=deleteval(root->lchild,key);


    else if(key>root->data)
        root->rchild=deleteval(root->rchild,key);


    else
    {

        if (root->lchild==NULL)
        {
            node *temp=root->rchild;
            free(root);
            return temp;
        }
        else if (root->rchild==NULL)
        {
            node *temp=root->lchild;
            free(root);
            return temp;
        }


        node *temp = minimum(root->rchild);
        root->data=temp->data;
        root->rchild=deleteval(root->rchild,temp->data);
    }
    return root;
}
void inorder(node *root)
{
    if(root)
    {
        inorder(root->lchild);
        printf("%d\n",root->data);
        inorder(root->rchild);
    }
}
//end
void main()
{
int n,i,k,delval;
node *new_node, *root, *tmp, *parent, *min, *succ;
node *get_node();
root = NULL;
//   printf("Enter n\n");
scanf("%d",&n);
   // printf("enter elements\n");
for(i=0;i<n;i++)
{
    new_node = get_node();
       // printf("\nEnter The Element ");
    scanf("%d", &new_node->data);

    if (root == NULL) /* Tree is not Created */
        root = new_node;
    else
        insert(root, new_node);
}

//    printf("enter which minimum value you want\n");
scanf("%d",&k);
min=minimum(root);
if(k==1)
    delval=min->data;
else
{
    succ=min;
    for(i=2;i<=k;i++)
        succ=successor(root,succ);
    delval=succ->data;
}
printf("%d\n",numberofleaf(root));
//print kth minimum
if(k==1)
    printf("%d\n",min->data);
else
    printf("%d\n",succ->data);

//delete the kth minimum value
deleteval(root, delval);
//printf("\nTheInorder display : ");
inorder(root);
}
