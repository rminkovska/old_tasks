#include <iostream>
using namespace std;
int main ()
{
    long long a, b, c;
    cout<<"Трицифрените числа, които нямат в записа си 0, и са кратни на всяка своя цифра са:"<<endl;
    for(int i=100; i<1000; i++)
    {
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        if(a!=0 and b!=0 and c!=0)
        {
            if(i%a==0 and i%b==0 and i%c==0)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
