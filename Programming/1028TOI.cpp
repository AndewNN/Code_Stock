#include<bits/stdc++.h>
using namespace std;
int a[30], n;
void find(char opr, char r, char l) {
    if (opr == '+')     a[r - 'A'] += a[l - 'A'];
    if (opr == '-')     a[r - 'A'] -= a[l - 'A'];
    if (opr == '*')     a[r - 'A'] *= a[l - 'A'];
    if (opr == '/')     a[r - 'A'] /= a[l - 'A'];
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    char o, c, d;
    cin >> o;
    while (o != '!') {
        cin >> c;
        if (o == '=') {
            cin >> n;
            a[c - 'A'] = n;
        }
        else if (o == '#')
            cout << a[c - 'A'] << "\n";
        else {
            cin >> d;
            find(o, c, d);
        }
        cin >> o;
    }
    cout << '!';
}