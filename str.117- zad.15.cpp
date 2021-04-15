#include <iostream>
using namespace std;
int main ()
{
    int n;
    double sum=0, br=0;
    cout<<"Въведете n (2<n<25):"<<endl;
    cin>>n;
    double arr[n];
    cout<<"Въведете n на брой числа:"<<endl;
    {
       for(int i=0; i<n; i++)
       {
           cin>>arr[i];
        if(arr[i]>0)
        {
            sum=sum+arr[i];
            br++;
        }
       }
    }
    cout<<sum/br;
    return 0; 
}


