#include <iostream>
using namespace std;
int main ()
{
  int n, br=0;
  cout<<"Vyvedete broi simvoli:"<<endl;
  cin>>n;
  char arr[n];
  cout<<"Vyvedete duma:"<<endl;
  for (char i=0; i<n; i++)
  {
      cin>>arr[i];
      if(arr[i]=='a')
      {
          br++;
      }
  }
  cout<<"Vyv vashata duma ima "<<br<<" bukvi 'a'.";
  return 0;
}
