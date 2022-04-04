#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll n)
{
  if(n == 1) return false;
  for(int i = 2 ; i * i <= n ; i++)
  {
    if(n%i == 0) return false;
  }
  return true;
}

void solve()
{
  ll n;
  cin >> n;
  bool ok = isPrime(n);
  if(ok)
  {
    cout << "Prime" << endl;
  }
  else cout << "Composite" << endl;
  
  
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ou.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}
