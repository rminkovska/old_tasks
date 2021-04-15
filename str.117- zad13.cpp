#include <iostream>
using namespace std;
int main ()
{
    int n, br=0, chislo;
    cin>>n;
    int arr[n];
    int x;
    cin>>x;
    for(int i=1; i<n+1; i++)
    {
        cin>>arr[i];
        if(arr[i]==x)
        {
            br++;
            if(br==1)
            {
                chislo=i;
            }
        }
    }
    if(br>=1)
    {
            cout<<chislo;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}