#include <iostream>
using namespace std;
bool isPrime (int p)
{
    if (p==1)
    {
        return false;
    }
    for (int i=2; i<=p/2; i++)
    {
        if(p%i==0)
        {
            return false;
        }
    } 
    return true;
}
int main ()
{
    int a, b, c, sum=0;
    cout<<"Всички трицифрени числа, сумата от цифрите на които е просто число, са:";
    for(int k=100; k<1000; k++)
    {
        a=k%10;
        b=(k/10)%10;
        c=k/100;
        sum=a+b+c;
        if(isPrime(sum)== true)
        {
            cout<<k<<" ";
        }
    }
return 0;

}
