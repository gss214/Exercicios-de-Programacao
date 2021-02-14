#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

int main()
{
    int n, k, ans = 0;
    vi vet;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        vet.pb(aux);
    }
    for (int i = 0; i < vet.size(); i++)
    {
        if (vet[i] >= vet[k - 1] && vet[i] > 0)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}