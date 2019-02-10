#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int N = 101;
    int n, m, i, j;
    int a[N] {0};

    cin >> n >> m;
    for(int k=0; k<m; ++k) {
        cin >> i >> j;
        ++a[i];
        ++a[j];
    }

    for(int k=1; k<=n; ++k) {
        cout << a[k] << ' ';
    }
    cout << endl;
}
