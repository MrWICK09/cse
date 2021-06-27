#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define float double
#define pb push_back
#define mb make_back
#define ff first
#define ss second
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, sum = 0;
    cin >> a;
    int b[1000];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + b[i];
    }
    cout << sum << endl;

    return 0;
}