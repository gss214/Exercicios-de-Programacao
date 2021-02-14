#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        if (s.length() < 11)
            cout << s << '\n';
        else{
            string aux;
            aux = s[0] + to_string(s.length()-2) + s[s.length()-1];
            cout << aux << '\n';
        }
    }
}