#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        if (N <= M - K) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}