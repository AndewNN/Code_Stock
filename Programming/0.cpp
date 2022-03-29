#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<int, char > > hp;

int main() {
    hp.push(make_pair(10, 'H'));
    hp.push(make_pair(10, 'A'));
    cout << hp.top().first << " " << hp.top().second;
}
