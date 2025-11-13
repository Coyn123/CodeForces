#include <iostream>
#include <string>
#include <vector>
#include <queue>

class Solution {

    public:
    void solve() {
      std::string input;
      std::cin >> input;
      std::queue<char> name(std::deque<char> {'h','e','i','d','i'});
      
      int i = 0;
      for(char j : input) {
        if(name.empty()) break;
        if(j == name.front()) name.pop();
      }
      if(!name.empty()) std::cout << "NO" << std::endl; else std::cout << "YES" << std::endl;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}
