#include <iostream>
#include <string>
#include <vector>
#include <cmath>
class Solution {

    public:
    void solve() {
      int n;
      std::cin >> n;

      int width_guess = std::floor(std::sqrt(n));
      while(n % width_guess != 0) width_guess--;
      int length = n / width_guess;

      std::cout << 2 * (width_guess + length) << std::endl;
    };
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}
