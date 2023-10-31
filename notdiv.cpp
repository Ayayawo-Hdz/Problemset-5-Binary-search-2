// k + (k - 1) / (n - 1), para hallar el número divisible
#include <bits/stdc++.h>

using namespace std;

void solve(int& n, int& k) {
    int num = k + (k - 1) / (n - 1);
    cout << num << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {int n, k; cin >> n >> k; solve(n, k);}
    
    return 0;
}
