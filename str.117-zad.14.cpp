#include <iostream>
using namespace std;
int main ()
{
    int n, br=0;
    cout<<"Въведете n (2<n<30):"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Въведете n на брой числа:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            br++;
        }
    }
    cout<<br;
    return 0;
}

