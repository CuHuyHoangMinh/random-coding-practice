#include <iostream>
#include <string>
using namespace std;

int main()
{
  string st;
  cin >> st;
  int price= 700;
  for (size_t i = 0; i < sizeof(st); i++) {

    if(st[i]=='o')
    {
      price=price+100;
    }
  }
  cout << price;

  return 0;
}
