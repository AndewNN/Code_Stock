#include<bits/stdc++.h>
using namespace std;
string n[5];
struct A{
    int inc[35],pay[35],sum;
    string me;
    bool operator < (const A&o)const{
    if(sum != o.sum)
        return sum > o.sum;
    }
};
A a[5];
void in(int da){
    cout << "\n\tday" << da << "'finace" << "\n";
    for(int i=1;i<=3;i++){
        cout << n[i] << "'s income, payment : ";
        cin >> a[i].inc[da] >> a[i].pay[da];
        a[i].sum += (a[i].inc[da] - a[i].pay[da]);
    }
}
int main(){
    int i,d;
    cout << "Number of days in this month : ";
    cin >> d;
    for(i=1;i<=3;i++){
        cout << "Name of department " << i << " : ";
        cin >> n[i];
        a[i].me = n[i];
    }
    for(i=1;i<=d;i++)
        in(i);
    sort(a+1,a+4);
    cout << "\n\nBest finance of month is department " << a[1].me;
    cout << "\nSecond is department " << a[2].me;
    cout << "\nAnd the last is department " << a[3].me;
    return 0;
}
