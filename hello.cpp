#include <bits/stdc++.h>
using namespace std;

int const N = 1e3 + 10;
int const MOD = 1e9 + 7;

int a[N][N];
bool check[N];
int n;

void Loang (int w) {
    if (check[w] == true) 
        return;

    for (int i = 1; i <= n; i++) {
        if (a[w][i] == 1) 
            Loang (i);
    }
    
    return;
}

int main() {
    freopen ("in", "r", stdin);
    freopen ("out", "w", stdout);

    cin >> n;

    memset (a, 0, sizeof(a));
    memset (check, false, sizeof(check));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (check[i] == false) {
            res++;
            Loang(i);   
        }
    }

    cout << res;

    return 0;
}