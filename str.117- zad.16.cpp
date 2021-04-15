#include <iostream>
using namespace std;
int main ()
{
    int n;
    int sum=1;
    cout<<"Въведете n (2<n<40):"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Въведете n на брой числа:"<<endl;
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    if(arr[i]%7==0)
        {
            sum=sum*arr[i];
        }
    }
    if(sum>1)
    {
        cout<<sum; 
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

