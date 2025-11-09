#include <iostream>
#include <string>
#include <map>
#include <vector>

class Solution
{
    public:
        int solve(int n) {
            std::vector<std::string> words;
            int problems_to_solve = 0;

            for(int i = 0; i<n; i++) {

                int x;
                int y;
                int z;
                std::cin >> x >> y >> z;
                int confidence = x + y + z;

                if(confidence >= 2) {
                    problems_to_solve++;
                }
            }

            return problems_to_solve;
        }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    Solution obj;
    int n;
    int ret;
    std::cin >> n;
    ret = obj.solve(n);
    std::cout << ret;
    return 0;
}