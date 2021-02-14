#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define ll long long
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

int main()
{
    int n, aux, seconds = 0;
    vi arr;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        arr.pb(aux);
    }

    sort(arr.begin(), arr.end(), less<int>());

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[0] and i == 0)
            seconds++;
        if (i > 0 && arr[i] != arr[i - 1] && arr[i])
            seconds++;
    }

    cout << seconds;

    return 0;
}