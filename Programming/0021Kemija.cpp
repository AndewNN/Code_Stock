#include<bits/stdc++.h>
using namespace std;
string a;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int i;
    getline(cin, a);
    for (i = 0;i < a.size() - 2;i++)
        if ((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') && a[i + 1] == 'p' && a[i + 2] == a[i])
            a.replace(i + 1, 2, "");
    cout << a;


}