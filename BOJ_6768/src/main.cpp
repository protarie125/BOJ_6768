#include <iostream>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n;
    cin >> n;

    if (n < 4) {
        cout << 0;
        return 0;
    }

    auto answer = (n - 1) * (n - 2) * (n - 3) / (3 * 2);
    cout << answer;

    return 0;
}