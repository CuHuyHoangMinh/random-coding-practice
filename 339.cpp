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
#define INF (int)1e9
#define MOD 1000000007
using namespace std;

int main(int argc, char const *argv[]) {
  // freopen("input.txt","r",stdin);
  string st;
  cin >> st;
  int temp=0;
  int a[st.size()/2+10];
  int count=-1;
  // cout << st.find("s2d");
  int pos=-5;
  // cout << (pos!=string ::npos);
  while( ( pos)!=string::npos)
  {
    pos=st.find("+",temp);
    count++;
    string temps=(st.substr(temp,pos-temp));
    a[count]=stoi(temps);
    temp=pos+1;
  }
  count++;
  a[count]=stoi(st.substr(temp,pos-temp));
  sort(a,a+count);
  for (int i = 0; i < count-1; i++) {
    cout << a[i] <<"+";
  }
  cout <<a[count-1];

  return 0;
}
