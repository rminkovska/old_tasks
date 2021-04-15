#include <iostream>
using namespace std;
int main ()
{
    long long a, b, c, d;
    cout<<"Всички четирицифрени числа, които имат поне 2 равни цифри са:";
    for(int i=1000; i<10000; i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        d=(i/100)/10;
        if(a==b or a==c or a==d or b==c or b==d or c==d)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
