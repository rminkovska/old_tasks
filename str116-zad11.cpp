#include <iostream>
using namespace std;
int main ()
{
  int n;
  int br=0;
  cout<<"Enter a number between 1 and 11:"<<endl;
  cin>>n;
  int arr[n];
  cout<<"Enter x:"<<endl;
  int x;
  cin>>x;
  cout<<"Enter n numbers:"<<endl;
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
      if(arr[i]==x)
      {
          br++;
      }
  }
  if(br>0)
  {
      cout<<"Yes";
  }
  else
  {
       cout<<"No";
  }
  return 0;
}
