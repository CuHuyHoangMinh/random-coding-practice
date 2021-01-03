#include "iostream"
#include "stdlib.h"
#include <bits/stdc++.h>


using namespace std;
  /* code */
  int main(int argc, char const *argv[]) {

  // ifstream cin("input.txt");
  int x;
  cin >>x;
  // cout<<x;

  for (int i = 0; i < x; i++) {

    long long n,so,se;
    cin >>n;
    long long a[n];
    so=0;
    se=0;
    for (size_t j = 0; j < n; j++) {
      cin >>a[j];
      if (j % 2==0)
      {
        se+=a[j]-1;
      }
      else
      {
        so+=a[j]-1;
      }
    }
    string out="";
    if (so>se)
    {
      for (size_t k = 0; k < n ; k++) {
        if (k%2==0)
        {
          out=out+"1 ";
        }
        else
        {
          // int temp;
          // if (a[k]>1) temp=a[k]-1;
          // else temp=1;
          out=out+to_string(a[k])+" ";
        }
      }
      out=out.substr(0, out.size()-1);
      cout <<out<<endl;
    }
    else
    {
      for (size_t k = 0; k < n ; k++) {
        if (k%2==0)
        {
          // int temp;
          // if (a[k]>1) temp=a[k]-1;
          // else temp=1;
          out=out+to_string(a[k])+" ";

        }
        else
        {
          out=out+"1 ";

        }
      }
      out=out.substr(0, out.size()-1);
      cout <<out<<endl;
    }
  }
  return 0;
}
