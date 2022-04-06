#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll is_prime[1000001];

void seive()
{
  ll max = 1e6;
  

  for(int i = 0  ; i < max ; i++) is_prime[i] = 1;

    is_prime[0] = is_prime[1] = 0;

  for(int i  =2 ; i*i <= max ; i++)
  {
    if(is_prime[i])
    {
      for(int j = i*i ; j <= max ; j += i)
      {
        is_prime[j] = 0;
      }
    }
  }
  for(int i =  0 ; i <= 100 ; i++)
  {
    cout << i << " " << is_prime[i] << endl;
  }
  
}

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ou.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    seive();
    
    return 0;
}
