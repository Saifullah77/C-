#include <iostream>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout);
     #endif
  
  int n, i, m=0, flag=0;

  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"No"<<endl;
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "Yes"<<endl;
  return 0;
}

