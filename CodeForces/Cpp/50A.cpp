#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

int main()
{
    int m, n, ans = 0;
    cin >> m >> n;
    if (m % 2 == 0)
        ans = (m / 2) * n;
    else
        ans = (m/2)*n + (n/2);
    cout << ans;
}