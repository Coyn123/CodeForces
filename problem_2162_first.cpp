#include <iostream>
#include <string>
#include <vector>

class Solution {
	public:
		void solve() {
			int k = 0;
			int n = 0;
			int t = 0;
			std::string s;
			std::string ret_string;
			std::vector<int> check_idx;
			int ret_idx_amount = 0;

			std::cin >> t;
			while(k < t) {
				std::cin >> n >> s;
				ret_string = "";
				ret_idx_amount = 0;
				check_idx.clear();

				//NON DECREASING
				if(n == 1) {
					//Should be palindrome
					ret_idx_amount = 1;
					ret_string = s[0];
					std::cout << ret_idx_amount << std::endl;
					std::cout << ret_string << std::endl;
				} else {
					for(int i = 0; (i + 1) < s.size(); ++i ) {
						char j = s[i];
						char next = s[i + 1];
						if(j <= next) {
							check_idx.push_back(i);
							check_idx.push_back(i + 1);
							ret_string += std::to_string(i + 1) + " ";
							ret_idx_amount += 1;
						};


					}
					if(check_idx.size() > 1 && isPalindrome(check_idx.back(), s)) { 
						std::cout << ret_idx_amount << std::endl;
						std::cout << ret_string << std::endl;
					} else {
						std::cout << "0" << std::endl;
						std::cout << "-1" << std::endl;
					}
				};
				k++;
			};
		};
 
		bool isPalindrome(int end_range, std::string s) {
			std::string toCheck = s.substr(end_range - 1);
			for(size_t b = 0; b < toCheck.size() / 2; ++b) {
				size_t j = toCheck.size() - b - 1;
				if(toCheck[b] != toCheck[j]) {
						return false;
				}
			}
			return true;
		};
};


int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	Solution obj;
	obj.solve();
}
