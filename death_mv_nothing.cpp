/* Death, the multi verse and nothing */
#include <iostream>
using namespace std;
main()
{
    int A[10],n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0;i<n;i++)
    {
        cout<<(A[i]-1)<<endl;
    }
    return 0;
}
