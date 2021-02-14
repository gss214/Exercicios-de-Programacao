#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

int main()
{
    int n,ans=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < 3; j++){
            int aux;
            cin >> aux;
            if (aux == 1)
                count++;
        }
        if (count > 1)
            ans++;
    }
    cout << ans;
}