#include <iostream>
#include <string>
#include <vector>

class Solution {

    public:
    void solve() {
      int n;
      std::cin >> n;
      signed int xi = 0, yi = 0, zi = 0;
      for(int i = 0; i < n; i++) {
        signed int x, y, z;
        std::cin >> x >> y >> z;
        xi += x;
        yi += y;
        zi += z;
      }
      if(xi == 0 && yi == 0 && zi == 0) {
        std::cout << "YES" << std::endl;
      } else {
        std::cout << "NO" << std::endl;
      };
    };
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}