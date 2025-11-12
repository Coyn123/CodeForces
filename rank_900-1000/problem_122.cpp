#include <iostream>
#include <string>
#include <vector>

class Solution {

    public:
    void solve() {
     int n = 0;
     std::cin >> n;
     
     bool is_lucky = isLucky(n);

     if(n < 4) {
      std::cout << "NO" << std::endl;
      return;
     }
     if (is_lucky) {
      std::cout << "YES" << std::endl;
      return;
     }
     if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0) {
      std::cout << "YES" << std::endl;
      return;
     }
     std::cout << "NO" << std::endl;
     return;
    }

    bool isLucky(int n) {
      int last_num = 0;
      while (n > 1) {
        last_num = n % 10;
          if(last_num != 4 && last_num != 7) {
            return false;
          }
          n = n / 10;
      }
      return true;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}
