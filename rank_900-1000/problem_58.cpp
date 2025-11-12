#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

class Solution {

    public:
    void solve() {
        std::string word;
        std::cin >> word;
        std::vector<char> hello = {'h', 'e', 'l', 'l', 'o'};
        std::stack<char> hello_stack;

        int idx = 0;
        for(int i = 0; idx < hello.size() && i < word.size(); i++) {
            if(word[i] == hello[idx]) {
                hello_stack.push(word[i]);
                idx++;
            }
        }
        if(hello_stack.size() == hello.size()) {
            std::cout << "YES";
            return;
        }
        std::cout << "NO";
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Solution obj;
    obj.solve();
}