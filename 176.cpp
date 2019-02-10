#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int N = 101;
    int n;
    int a[N][N] {0};
    int c[N];

    cin >> n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> a[i][j];

    for(int i=0; i<n; ++i)
            cin >> c[i];

    int count {0};
    for(int i=0; i<n; ++i)
        for(int j=0; j<i; ++j) {
            if (a[i][j] == 1 && (c[i] != c[j]))
                count += a[i][j];
        }

    cout << count << endl;
}