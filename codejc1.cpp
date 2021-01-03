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
#include <random>
#define INF (int)1e9
#define MOD 1000000007
using namespace std;


int main(int argc, char const *argv[]) {
  // freopen("input.txt","r",stdin);
  int t;
  cin >> t;
  srand (time(NULL));
    for (int i = 0; i < t; i++) {
    int n;
    cin >>n;
    if (n==-1) return 0;
    int a[n]={0};
    for (int j = 0; j < n; j++) {
      int d;
      cin >>d;
      if (d==-1) return 0;
      bool check=false;
      int ans=-1;
      vector <int> temp;
      for (int k = 0; k < d; k++) {
        int tem;
        cin >> tem;
        temp.push_back(tem);
        //if (temp[k]==-1) return 0;
      }
      // cout << temp.size() <<endl;
      for (int k = d*2; k >0; k--) {
        if (temp.size()==0) break;
        int ran=rand()%(temp.size());
        // cout << ran<<" "<<temp[ran] <<endl;
        if (a[temp[ran]]==0)
        {
            check=true;
            a[temp[ran]]=-1;
            ans=temp[ran];
            // for (int v  = 0; v < temp.size(); v++) {
            //   cout<<temp[v]<<" ";
            // }
            // cout<<endl;
            temp.erase(temp.begin()+ran);
            // for (int v  = 0; v < temp.size(); v++) {
            //   cout<<temp[v]<<" ";
            // }
            // cout<<endl;
            break;
        }
      }
      // cout << ans<<" *" <<endl;
      if (check)
      {
        cout << ans <<endl;
      }
      else
      {
        cout << -1 <<endl;
      }
    }

  }

  return 0;
}
