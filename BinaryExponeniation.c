#include <iostream>
using namespace std;

typedef long long ll;

ll binpow(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main() {
    ll A, B, M;
    cin >> A >> B >> M;
    cout << binpow(A, B, M) << endl;
    return 0;
}
