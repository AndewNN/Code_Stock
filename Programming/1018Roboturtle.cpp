#include<bits/stdc++.h>
using namespace std;
int dir, x, y;
string o, dd = "ESWN";
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, s, ch = 1;
    cin >> n;
    while (n--) {
        cin >> o >> s;
        if (o == "LT")  dir = (dir + 3) % 4;
        if (o == "RT")  dir = (dir + 1) % 4;
        if (o == "BW")  dir = (dir + 2) % 4;

        if (dir == 0)    x += s;
        if (dir == 1)    y -= s;
        if (dir == 2)    x -= s;
        if (dir == 3)    y += s;
        if (abs(x) >= 50000 || abs(y) >= 50000)
            ch = 0;
    }
    if (ch)
        cout << x << " " << y << "\n" << dd[dir];
    else
        cout << "DEAD";

}