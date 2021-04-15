#include <iostream>
using namespace std;
int main ()
{
    long long m, n, br=0;
    cout<<"Въведете  m"<<endl;
    cin>>m;
    cout<<"Въведете n, така че m<n"<<endl;
    cin>>n;
    if(n<m)
    {
        cout<<"Моля въведете други числа, които да отговарят на условието m<n";
    }
    for(int i=m; i<=n; i++)
        {
            if(i%5==0)
            {
                br++;
                if(br==1)
                {
                     cout<<"Числата, кратни на 5, в този интервал са:"<<endl;
                }
                cout<<i<<" ";
            }
        }
    return 0;
}
