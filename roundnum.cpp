#include <bits/stdc++.h>

using namespace std;

vector<int> numbers(int n) {
    vector<int> rnum;
    string nstr = to_string(n);
    int length = nstr.length();

    for (int i = 0; i < length; ++i) {
        int num = nstr[i] - '0';
        if (num != 0) {
            int rounded = num;
            for (int j = 0; j < length - i - 1; ++j) {rounded *= 10;}
            rnum.push_back(rounded);
        }
    }
    return rnum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n; 
        vector<int> roundn = numbers(n);
        cout << roundn.size() << "\n";
        for (int i = 0; i < roundn.size(); ++i) {cout << roundn[i] << " ";}
        cout << endl;  
    }

    return 0;
}
