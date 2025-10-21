#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> p; 

        for(int i = 0; i < n; i++)
            if(s[i] == '0') p.push_back(i + 1);

        cout << p.size() << "\n";
        for(int idx : p) cout << idx << " ";
        cout << "\n";
    }
}
