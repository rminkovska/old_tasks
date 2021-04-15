#include <iostream>
using namespace std;
bool chislo (int p)
{
    if(p>9 && p<100 && p%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{
    int a, b, c, d, sum=0;
    for (int i=1000; i<10000; i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=(i/100)/10;
        sum=a+b+c+d;
        if(chislo(sum)==true)
        {
            cout<<i<<" ";
        }
    }
}
