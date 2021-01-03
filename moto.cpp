#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n,c;
  cin >> n >> c;
  int pre=0;
  int d;
  int sum=0;
  int max=0;
    for (size_t i = 0; i < n ; i++) {
      cin >> d >> c;
      sum=sum- (d-pre) +c;
      pre=d;

      if (max < sum)
      {
        max=sum;
      }

    }
  cout << max;

  return 0;
}
