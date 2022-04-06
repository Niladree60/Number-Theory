#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void printPrimeFactors(int n) {
   while (n%2 == 0){
      cout<<"2\t";
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout<<i<<"\t";
         n = n/i;
      }
   }
   if (n > 2)
   cout<<n<<"\t";
}


int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ou.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    cin >> n ;
    printPrimeFactors(n);
    
    return 0;
}
