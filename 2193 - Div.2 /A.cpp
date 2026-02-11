#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(nullptr); 

    int test; cin >> test;

    int n, w; 
    while (test--) {
        cin >> n >> w; 
        cout << n - (n / w) << '\n'; 
    } 
}   
