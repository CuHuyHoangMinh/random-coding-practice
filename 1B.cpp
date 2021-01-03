#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<ctime>
#include<algorithm>
#include<iterator>
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
#include<stack>
#include<functional>
#include<utility>
#include<numeric>
#include<bitset>
#include<iterator>
#include <regex>
#define INF (int)1e9
#define MOD 1000000007
using namespace std;

string tostr(int n) {stringstream rr;rr<<n;return rr.str();}
int main(int argc, char const *argv[]) {
  // freopen("input.txt","r",stdin);

  int n;
  cin >>n;
  smatch sm1;
  smatch sm2;
  regex re1("([A-Z]+)([[:digit:]]+)([A-Z]+)([[:digit:]]+)");
  regex re2("([A-Z]+)(([[:digit:]]+))");
  for (int i = 0; i < n; i++) {
    string st;
    cin >>st;
    if (regex_match(st,sm1,re1))
    {
      string end=sm1[2];
      int beg=stoi( sm1[4]);
      string ans="";
      while (beg!=0)
      {
          int value=0;
          if (beg%26==0)
          {
            value=26-1+(int)'A';
            beg=beg-26;
          }
          else
            value=beg%26-1+(int)'A';
          // cout << value<<" "<< beg%26<<endl;
          char val= char(value);
          ans=val +ans;
          beg=beg/26;
      }
      ans=ans+end;
      cout <<ans<<endl;
    }
    if (regex_match(st,sm2,re2))
    {
      string end=sm2[1];
      string mid=sm2[2];
      long long val=0;
      long long temp=1;
      reverse(end.begin(),end.end());
      for (int i = 0; i < end.length(); i++) {
        int t=(int) end[i] -(int)'A'+1;
        val=val+temp*t;
        // cout << val <<endl;
        temp=temp*26;
      }
      string out= "R"+mid+"C"+tostr(val);
      cout <<out<<endl;
    }



  }

  return 0;
}
