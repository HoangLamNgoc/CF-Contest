#include <bits/stdc++.h>

using namespace std; 

int main() { 
    int T; cin >> T; 
    int n, j, ans = 0; 
    

    while(T--) {
        cin >> n;
        ans = 0; 
        int sum = 0;  
        for(int i = 1; i <= n; ++i)  {
            cin >> j;
            ans = max(ans, j); 
        } 
        cout << ans << '\n'; 
    }
    return 0; 
}
