#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

int main()
{
    int n, ans=0;
    cin >> n;
    for(int i = 0; i<n;i++){
        string aux;
        cin >> aux;
        if (aux.compare("--X") == 0 || aux.compare("X--") == 0)
            ans--;
        else
            ans++;
    }
    cout << ans << endl;
}