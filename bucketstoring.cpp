#include <bits/stdc++.h>

using namespace std;

void solve(int& n, int& k, int& l) {
    int beans = n * k, buck = (n * k) / l;
    while (buck * l < n * k) {buck++;}
    cout << buck;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, l;
    cin >> n >> k >> l;
    solve(n, k, l);
    
    return 0;
}
