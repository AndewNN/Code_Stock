#include<bits/stdc++.h>
using namespace std;
string a[15], x;
int ret(int i, int j) {
    /*for (int ii = i;ii < i + 3;ii++) {
        cout << "->";
        for (int jj = j;jj < j + 3;jj++)
            cout << a[ii][jj];
        cout << "<-\n";
    }*/
    if (a[i + 1][j] == ' ' && a[i + 2][j] == '|') return 2;
    if (a[i + 1][j + 1] == ' ') return a[i][j + 1] == ' ' ? 1 : a[i + 2][j + 1] == ' ' ? 7 : 0;
    if (a[i + 2][j] == '|') return a[i + 1][j + 2] == ' ' ? 6 : 8;
    return a[i][j + 1] == ' ' ? 4 : a[i + 1][j] == ' ' ? 3 : a[i + 1][j + 2] == ' ' ? 5 : 9;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, i, j;
    long long aa = 0, bb = 0;
    cin >> n >> m;
    getline(cin, x);
    for (i = 0;i < 6;i++)
        getline(cin, a[i]);
    for (i = 0;i < n;i++)
        aa *= 10, aa += ret(0, i * 4);
    for (i = 0;i < m;i++)
        bb *= 10, bb += ret(3, i * 4);
    cout << aa + bb;
}
/*

4 2

  | |_|   | |_|
  |   |   |   |

|_|   |
  |   |

*/

/*

4 2

  | |_|   | |_|
  |   |   |   |

|_|   |
  |   |

*/