#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define float double
#define pb push_back
#define mb make_back
#define ff first
#define ss second

void remove1(char *S)
{
    if (S[0] == '\0')
        return;
    if (S[0] == S[1])
    {
        int i = 0;
        while (S[i] != '\0')
        {
            S[i] = S[i + 1];
            i++;
        }
        remove1(S);
    }
    remove1(S + 1);
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char S1[1000];
    cin >> S1;
    remove1(S1);
    cout << S1 << endl;

    return 0;
}
