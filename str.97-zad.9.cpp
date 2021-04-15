#include <iostream>
using namespace std;
int main ()

{

    int a, b, c, br;
    cout<<"Въведете естествено число k"<<endl;
    int k;
    cin>>k;
    for(int i=100; i<1000; i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        br=a+b+c;
        if(br==k)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
