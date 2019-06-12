#include <bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define z long long int
#define siz 1000000
#define mod 1000000007
#define db double
#define boost                                                                  
  ios_base::sync_with_stdio(false);                                            
  cin.tie(NULL);                                                               
  cout.tie(NULL);
  int main() 
{
  boost 
  z t = 1;
  // cin >> t;
  while (t--) 
  {
    z n, i;
    cin >> n;
    priority_queue<z> maxh; // taking max heap 
    priority_queue<z, std::vector<z>, greater<z>> minh; // taking min heap 
    for (i = 0; i < n; i++) 
    {
      z x;
      cin >> x;
      if (maxh.size() && x >= maxh.top()) 
        minh.push(x);
      else
        maxh.push(x);


      z s1 = maxh.size();
      z s2 = minh.size();
      if(abs(s1-s2)>1) 
      {
        if(s1>s2) {
          minh.push(maxh.top());
          maxh.pop();

        } else {
          maxh.push(minh.top());
          minh.pop();
        }
      }
      z tot=s1+s2;
      if(tot%2==0) cout<<floor(((db)maxh.top() + (db)minh.top())/(db)2)<<endl;
    else {
     if (s1 > s2)         
                    cout << maxh.top() << endl;
                else
                cout << minh.top() << endl;   
    }
     
    }
  }
  return 0;
}
