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
#define tr(c, it) for(typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz size
#define ll long long
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define MEM(a, b) memset(a, (b), sizeof(a))
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define PRE(i, m, n, in) for(int (i)=(m);(i)<(n);i+=in)
#define RFOR(i, n) for(int i=n ; i>=0 ; i--)
#define RPRE(i, j, k, in) for(int i=j ; i>=k ; i-=in)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
using namespace std;
typedef pair<int, int> II;
typedef vector <int> VI;
typedef vector<string> VS;
typedef vector <II> VII;
typedef vector <VI> VVI;
typedef vector <VII> VVII;
typedef map<int,int> MPII;
typedef set<int> SETI;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    int T; cin >> T;
    cout <<T;


    FOR(t, T) {
        /* code */
        int n,m,h,v;
        int a[h][v];
        cin >> n,m,h,v;
        cout << n <<" " << m << " " << h << " " << v;
        FOR(i,n)
        {
          FOR(j,m)
          {
            char temp;
            cin >>temp;
            a[i][j]= (temp=='@') ? 1:0;
          }
        }



        cout << "Case #" << t + 1 << ": " << (n + m) << endl;
    }
    return 0;
  }
