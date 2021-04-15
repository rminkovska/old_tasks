#include <iostream>
using namespace std;
int main ()
{
    int n;
    int m, index=0;
    cout<<"Въведете n (2<=n<=100):"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Въведете n на брой числа:"<<endl;
    for(int i=1; i<n+1; i++)
    {
        cin>>arr[i];
        if(i==1)
        {
            m=arr[1];
        }
         if(arr[i]>m)
        {
            index=i;
            m=arr[i];
        }
    }
    cout<<m<<endl;
    cout<<index<<endl;
    return 0;
}

