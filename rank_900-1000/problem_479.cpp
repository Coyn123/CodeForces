#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {

    public:
    void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;
    
    int v1 = a + b + c;
    int v2 = a * b * c;
    int v3 = a * b + c;
    int v4 = (a + b) * c;
    int v5 = a + b * c;
    int v6 = a * (b + c);

    int res = std::max({v1, v2, v3, v4, v5, v6});
    std::cout << res;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}
