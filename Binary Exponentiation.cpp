#include <bits/stdc++.h>
using namespace std;
using ll = long long;


long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
 double myPow(double x, int n) {
        long long nn = n;
        if(nn < 0)
        {
            nn = -1*nn;
        }
        double ans = 1.0;
        while(nn != 0)
        {
            if(nn%2 != 0)
            {
                ans = ans * x;
                nn = nn - 1;
            }
            else
            {
                x = x*x;
                nn /= 2;
            }
        }
        if(n < 0)
        {
            return 1/ans;
        }
        else return ans;
    }

int main() 
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ou.txt" , "w" , stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll a,b,m;
    cin >> a >> b >> m;
    cout << binpow(a,b,m) << endl;
    
    return 0;
}
