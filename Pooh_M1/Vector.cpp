#include <bits/stdc++.h>
using namespace std;
vector<int> v[1010];
int main()
{
    v[3].push_back(5);
    v[3].push_back(8);
    v[3].push_back(13);

    for (auto x : v[3])
    {
        printf("%d\n", x);
    }
}