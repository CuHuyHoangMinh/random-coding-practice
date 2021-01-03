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


struct Pair {
  int A;
  int B;

  bool operator==(const Pair& rhs ) const
  {
    return (A==rhs.A&&B==rhs.B);
  }

  bool operator<( const Pair& rhs ) const
  {
    if (B==rhs.B) return A<rhs.A;
    else
      return B < rhs.B;
    }
    bool operator>( const Pair& rhs ) const
    {
      if (B==rhs.B) return A>rhs.A;
      else
        return B > rhs.B;
      }




  };

  int main(int argc, char const *argv[]) {

    // freopen("input.txt","r",stdin);
    int t;
    cin >>t;

    for (int i = 1; i <= t; i++) {
      int n,l;
      cin >> n;
      cin >>l;
      int a[l];
      int b[l];
      // cout << n <<endl;


      int c[l+1]={0};
      int sum=0;
      int sump=0;
      int add=(1*100000)/n-(100/n)*1000;
      int need=0;
      if (add!=0)
      need=ceil(500/add);
      // c[n]=need;
      // cout <<add<< " " <<need <<endl;

      vector<Pair> v;
      Pair p;

      for (int j = 0; j < l; j++) {
        cin >>a[i];
        sum+=a[i];
        b[i]=round((double)a[i]*100/n);
        sump+=b[i];
        // cout << j <<endl;
        if (need==0) c[i]=0;
        else c[i]=(a[i] % need);
        // Pair p;
        p.A=a[i];
        p.B=c[i];
        v.push_back(p);
        // cout <<c[i]<< " ";
      }
      if (100%n==0)         cout <<"Case #"<<i<<": " <<100<<endl;
      else
      {

        int left=n-sum;
        // cout << left<<endl;
        for (int j = 0; j < left; j++) {
          // cout << j <<endl;
          Pair p1;
          p1.A=0;
          p1.B=need;
          v.push_back(p1);
        }
        sort(v.begin(),v.end());
        int test=left;
        // for (int j = 0; j < l+test; j++) {
        //   cout << v[j].A<<" "<< v[j].B <<endl;
        // }
        int count=-1;
        while (left>0)
        {
          if (count>(l+left)) count=-1;
          count++;
          if(v[count].B==0)
          {
            left--;
            v[count].A++;
          }
          else
          {
            left=left-v[count].B;
            v[count].A++;
          }
        }

        //
        // for (int j = 0; j < l+test; j++) {
        //   cout << v[j].A<<" "<< v[j].B <<endl;
        // }
        sump=0;
        for (int j = 0; j < v.size(); j++) {
          sump=sump+round((double)v[j].A*100/n);
          // cout << sump <<endl;
        }
        cout <<"Case #"<<i<<": " <<sump<<endl;
        // cout << "****8" <<endl;
        // cout <<"******************"<<endl;

      }
    }
    return 0;
  }
