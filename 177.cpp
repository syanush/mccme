#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int N = 101;
    int n;
    int a[N][N] {0};

    cin >> n;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            cin >> a[i][j];

    int mind = 3000;
    int i1, j1, k1;

    for(int i=0; i<n-2; ++i) {
        for(int j=i+1; j<n-1; ++j) {
            for(int k=j+1; k<n; ++k) {
                int d = a[i][j] + a[i][k] + a[j][k];
                if (d < mind) {
                    mind = d;
                    i1 = i;
                    j1 = j;
                    k1 = k;
                }
            }
        }
    }

    cout << i1+1 << ' ' << j1+1 << ' ' << k1+1 << endl;
}
