#include <bits/stdc++.h>
void solve();

using namespace std;

int solve(vector<string>& alias) {
    unordered_map<string, int> counts;
    for (auto count : alias) {counts[count]++;}
    int uniquew = 0;
    for (auto& [name, count] : counts) {
        if (count == 1) {uniquew++;}
    }
    return uniquew;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    vector<string> alias; 
    
    cin >> n;
    while (n--) {
        int x; 
        string name;
        cin >> x; cin.ignore();
        getline(cin, name);
        
        istringstream ss(name);
        string word, ab;
    
        while (ss >> word) {ab += word[0];}
        alias.push_back(ab);
    }
    int uniq = solve(alias);
    cout << uniq;
    
    return 0;
}
