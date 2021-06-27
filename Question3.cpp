#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define float double
#define pb push_back
#define mb make_back
#define ff first
#define ss second

void removeDuplicates(int arr[], int n)
{

    int i;
    set<int> s;

    for (i = 0; i < n; i++)
    {

        s.insert(arr[i]);
    }

    set<int>::iterator it;

    cout << "\nAfter removing duplicates:\n";
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << '\n';
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

    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nBefore removing duplicates:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    removeDuplicates(arr, n);
}