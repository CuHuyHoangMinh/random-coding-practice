#include "iostream"
#include <bits/stdc++.h>
#include <stdlib.h>     /* abs */
using namespace std;



int main()
{
  // ifstream cin("input.txt");
  // ofstream cout("output.txt");
  int n;
  cin >> n;
  for (size_t i = 0; i < n ; i++) {
    int num=0;
    cin >> num;
    int dir=1;
    long long cur=0;
    long long timeleft=0;
    long long time[num+1];
    long long des[num+1];
    int count=0;
    for (int j = 0; j < num; j++) {
      cin >> time[j];
      cin >> des[j];
    }
    time[num]=LLONG_MAX-1;
    // cout<<num<<endl;
    for (size_t j = 0; j < num; j++) {
        if (timeleft==0) {
          timeleft=abs(cur-des[j]);
          if (des[j]>=cur) dir=1; else dir=-1;
        }
        if (timeleft>=time[j+1]-time[j])
        {
          long long tmp=cur+dir*(time[j+1]-time[j]);
          if ((min(cur,tmp)<=des[j]) && (des[j]<=max(cur,tmp)))
          {
            count++;
          }
          cur=tmp;
          timeleft=timeleft-(time[j+1]-time[j]);
        }
        else
        {
          long long tmp=cur+dir*timeleft;
          if ((min(cur,tmp)<=des[j]) && (des[j]<=max(cur,tmp)))
          {
            count++;
          }
          cur=tmp;
          timeleft=0;

        }
        // cout << time[j] <<" "<< des[j]<< " "<< cur<< " "<< dir<< " " << timeleft<<endl ;

    }


    cout << count << endl;
    // cout <<"*******************************"<<endl;

    }
}
