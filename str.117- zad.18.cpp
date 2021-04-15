#include <iostream>
using namespace std;
int main ()
{
    int n;
    double maximum, minimum;
    cout<<"Въведете n (2<=n<=15):"<<endl;
    cin>>n;
    double arr[n];
    cout<<"Въведете n на брой числа:"<<endl;
    for(int i=1; i<n+1; i++)
    {
        cin>>arr[i];
        if(i==1)
        {
            maximum=arr[1];
            minimum=arr[1];
        }
         if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
         if(arr[i]<minimum)
         {
             minimum=arr[i];
         }
    }
    cout<<"Максимален елемент: "<<maximum<<endl;
    cout<<"Минимален елемент: "<<minimum<<endl;
    cout<<"Произведението им: "<<maximum*minimum<<endl;
    cout<<"Разликата им: "<<maximum-minimum<<endl;
    return 0;
}

