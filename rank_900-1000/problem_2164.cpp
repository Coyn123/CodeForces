#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

class Solution {

    public:
    void solve() {
      int n, x, l;
      std::unordered_map<int, int> candidates;
      int prev = INT_MIN;

      std::cin >> n;
      for(int i = 0; i < n; ++i) {
        std::cin >> l;
        for(int o = 0; o < l; o++) {
          std::cin >> x;
          if(x > prev) {
            candidates[i] = x;
            prev = x;
          }
        }
      }
      int chkprv = 0;
      for (auto& item : candidates) {
        if(!chkprv) chkprv = item.second;
        if(chkprv) {
          int modchk = chkprv % item.second;
          if(modchk % 2 == 0) {
            std::cout << chkprv << " " << item.second << std::endl;
            return;
          }
        }
      }
      std::cout << -1 << std::endl;
      return;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}
