#include <iostream>
#include <string>
#include <bits/stdc++.h>

class Solution {
    public:
        int solve(int n) {
            int x = 0;
            for(int i = 0; i<n; i++) {
                std::string op;
                std::cin >> op;

                if((op.find('+')) != std::string::npos) {
                    ++x;
                } else {
                    --x;
                }
            }
            return x;
        };
    

};

int main () {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    Solution obj;
    int n;
    int x = 0;
    std::cin >> n;
    x = obj.solve(n);
    std::cout << x;

}