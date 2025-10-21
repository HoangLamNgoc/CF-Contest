#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; 

    while(t--) {
        int a, b; cin >> a >> b; 

        if((a ^ b) <= a) {
            cout << 1 << '\n' << (a ^ b) << '\n';
            continue; 
        }

        int x = a - 1;
        vector<int> ans; 
        ans.push_back(x);
        ans.push_back(a ^ x ^ b);

        if(ans[1] > a) cout << -1 << '\n'; 
        else { 
            cout << ans.size() << '\n';
            for(int i : ans) cout << i << ' '; 
            cout << '\n';
        }
    }
}
