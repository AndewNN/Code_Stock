#include <bits/stdc++.h>
using namespace std;

// Vector
struct V {
    double x, y, z;  // vector(x, y, z)
    V() : x(0), y(0), z(0) {}
    V(double x, double y, double z) : x(x), y(y), z(z) {}
    V operator+(const V &b) const {
        return V(x + b.x, y + b.y, z + b.z);
    }
    V operator-(const V &b) const {
        return V(x - b.x, y - b.y, z - b.z);
    }
    // cross produce
    V operator/(const V &b) const {
        return V(y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x);
    }
    // dot produce
    double operator*(const V &b) const {
        return x * b.x + y * b.y + z * b.z;
    }
    // scalar produce
    V operator*(const double &b) const {
        return V(x * b, y * b, z * b);
    }
    V operator/(const double &b) const {
        return V(x / b, y / b, z / b);
    }
    double norm2() {
        return x * x + y * y + z * z;
    }
    string to_string() {
        return std::to_string(x) + " " + std::to_string(y) + " " +
               std::to_string(z) + " ";
    }
    bool operator<(const V &b) const {
        if (x != b.x) return x < b.x;
        if (y != b.y) return y < b.y;
        return z < b.z;
    }
    bool operator<=(const V &b) const {
        if (x != b.x) return x <= b.x;
        if (y != b.y) return y <= b.y;
        return z <= b.z;
    }
    bool operator>(const V &b) const {
        if (x != b.x) return x > b.x;
        if (y != b.y) return y > b.y;
        return z > b.z;
    }
    bool operator>=(const V &b) const {
        if (x != b.x) return x >= b.x;
        if (y != b.y) return y >= b.y;
        return z >= b.z;
    }
    bool operator==(const V &b) const {
        return x == b.x && y == b.y && z == b.z;
    }
};

// Line
struct L {
    V A, P0;  // At + P0
    L(V A, V P0) : A(A), P0(P0) {}

    V operator&(const L &O) const {
        double a = A.x, b = P0.x, c = A.y, d = P0.y, e = A.z, f = P0.z;
        double g = O.A.x, h = O.P0.x, i = O.A.y, j = O.P0.y, k = O.A.z, l = O.P0.z;
        double t2 = (-a * d + a * j + b * c - c * h) / (c * g - a * i);
        return V(g * t2 + h, i * t2 + j, k * t2 + l);
    }
    string to_string() {
        return "A: " + A.to_string() + ", P0: " + P0.to_string();
    }
};

// Plane
struct P {
    double a, b, c, d;  // ax + by + cz - d = 0
    P(double a, double b, double c, double d) : a(a), b(b), c(c), d(d) {}
    P(V N, V P0) : a(N.x), b(N.y), c(N.z), d(N * P0) {}

    L operator&(const P &b) const {
        V M1(a, this->b, c), M2(b.a, b.b, b.c);
        V N(M1 / M2);
        V A((M1 / M2) / M1);
        V P0(A * (b.d - ((M1 * M2) * d) / M1.norm2()) / (A * M2) + M1 * d / M1.norm2());
        return L(N, P0);
    }
};

// triangle
double a1[9];
double a2[9];
int c[10];
V ans1[10], ans2[10];

int cou;
struct T {
    V A, B, C;
    L L1, L2, L3;
    P plane;
    T(V A, V B, V C) : A(A), B(B), C(C), L1(A - B, A), L2(B - C, B), L3(C - A, C), plane((B - A) / (C - A), A) {}
    void solve(const L &l, int mode) {
        V P = l & L1;
        V P1(P - A), P2(B - P);
        cou = 0;
        if (P1.x / abs(P1.x) == P2.x / abs(P2.x) && P1.y / abs(P1.y) == P2.y / abs(P2.y) && P1.z / abs(P1.z) == P2.z / abs(P2.z)) {
            if (mode == 1)
                ans1[cou++] = P;
            else
                ans2[cou++] = P;
        }
        P = l & L2;
        P1 = P - B, P2 = C - P;
        if (P1.x / abs(P1.x) == P2.x / abs(P2.x) && P1.y / abs(P1.y) == P2.y / abs(P2.y) && P1.z / abs(P1.z) == P2.z / abs(P2.z)) {
            if (mode == 1)
                ans1[cou++] = P;
            else
                ans2[cou++] = P;
        }
        P = l & L3;
        P1 = P - C, P2 = A - P;
        if (P1.x / abs(P1.x) == P2.x / abs(P2.x) && P1.y / abs(P1.y) == P2.y / abs(P2.y) && P1.z / abs(P1.z) == P2.z / abs(P2.z)) {
            if (mode == 1)
                ans1[cou++] = P;
            else
                ans2[cou++] = P;
        }
    }
};
int main() {
    // L L1(V(1, -1, 3), V(1, 3, 2)), L2(V(2, 3, -1), V(5, 4, 7));
    // L L1(V(1, 0, 0), V(0, 1, 0)), L2(V(1, 1, 0), V(0, 0, 0));
    for (int i = 0; i < 9; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < 9; i++) {
        cin >> a2[i];
    }
    T t1(V(a1[0], a1[1], a1[2]), V(a1[3], a1[4], a1[5]), V(a1[6], a1[7], a1[8]));
    T t2(V(a2[0], a2[1], a2[2]), V(a2[3], a2[4], a2[5]), V(a2[6], a2[7], a2[8]));
    // cout << "plane of a1 & a2\n";
    L l = t1.plane & t2.plane;
    // cout << l.to_string() << "\n";
    // cout << (t1.L1 & l).to_string() << "\n";
    // cout << (t1.L2 & l).to_string() << "\n";
    // cout << (t1.L3 & l).to_string() << "\n";
    // cout << "t1\n";
    // t1.solve(l,1);
    // sort(ans, ans + cou);
    // for (int i = 0; i < cou; i++) {
    //     cout << ans[i].x << " " << ans[i].y << " " << ans[i].z << "\n";
    // }
    // // cout << (t2.L1 & l).to_string() << "\n";
    // // cout << (t2.L2 & l).to_string() << "\n";
    // // cout << (t2.L3 & l).to_string() << "\n";
    // cout << "t2\n";
    // t2.solve(l,2);
    // sort(ans, ans + cou);
    // for (int i = 0; i < cou; i++) {
    //     cout << ans[i].x << " " << ans[i].y << " " << ans[i].z << "\n";
    // }

    t1.solve(l, 1);
    t2.solve(l, 2);

    sort(ans1, ans1 + cou);
    sort(ans2, ans2 + cou);

    if (ans1[1] < ans2[0] || ans1[0] > ans2[1]) {
        cout << "0\n";
    } else {
        V a1 = max(ans1[0], ans2[0]), a2 = min(ans1[1], ans2[1]);
        cout << a1.to_string() << " " << a2.to_string() << "\n";
    }
}
/*

2 triangles:
-1.16837 4.69955 -0.94984 -0.18136 1.3776 9.72471 2.8806 9.28222 8.29439
-4.68282 6.1273 5.29941 8 4 8.81537 5 5 3.37731

answer approx:
0.37 5.54 4.3
0.8 5.21 6.82
*/
