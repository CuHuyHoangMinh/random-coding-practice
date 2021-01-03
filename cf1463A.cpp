#include "iostream"
#include "stdlib.h"

using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  int n;
  cin >>n ;
  for (int i = 0; i < n; i++) {
    int a,b,c;
    cin >> a >>b>>c;
    // cout <<b;
    if ((a+b+c) % 9 ==0)
    {
      double temp=(a+b+c)/9;
      if (a>=temp && b>=temp && c>=temp )
      {
        cout << "YES"<<endl;
      }
      else
      {
        cout <<"NO"<<endl;
      }
    }
    else
    {
      cout <<"NO"<<endl;
    }
  }
  return 0;
}
