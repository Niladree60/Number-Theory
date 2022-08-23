#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007 
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll;
const double pi = acos(-1.0);
template <class T> using Ordered_Set = tree<T, null_type, less<T>,
            rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
                     tree_order_statistics_node_update>
            ordered_multiset;




void solve()
{
    ll n;
    cin >> n;
    ll n1 = n;
    ll rev = 0;
    while(n != 0)
    {
        ll rem = n%10;
        rev = (rev*10)+rem;
        n /=10;
    }

    if(n1 == rev)
    {
        cout << "Palindrome" << endl;
    }
    else cout << "Non Palindrome" << endl;
    
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt" , "r" , stdin);
    freopen("ttt.txt" , "w" , stdout);
    #endif
    
    ll tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
