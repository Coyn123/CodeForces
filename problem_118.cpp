#include <iostream>
#include <string>
#include <vector>

class Solution {

  public:
  void solve() {
    static const std::string vowels = "aeiouyAEIOUY";
    std::string input_string;
    std::cin >> input_string;
    for(size_t i = 0; i < input_string.size(); ) {
      char letter = input_string[i];
      size_t foundVowel = vowels.find(letter);
      if(foundVowel != std::string::npos) {
        input_string.erase(i, 1);
      } else {
        input_string[i] = std::tolower(letter);
        input_string.insert(i, 1, '.');
        i += 2;
      }
    }
    std::cout << input_string << std::endl;
  };
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}