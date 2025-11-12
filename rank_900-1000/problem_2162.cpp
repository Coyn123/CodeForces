#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
	public:
		void solve() {
			int k = 0;
			int t = 0;

			std::cin >> t;
			while(k < t) {

				int n = 0;
				std::string s;
				std::string indexes;
				std::string index_count;
				std::vector<int> store;
				std::cin >> n >> s;

					for (int left = 0; left < n; left++) {
						bool pallyCheck = isPalindrome(left, s);
						if(pallyCheck) {
							store.push_back(left);
						}
					}

				if(store.empty()) {
					std::cout << "-1" << std::endl;
				} else {
					for(size_t i = 0; i < store.size(); i++) {
						indexes += std::to_string(store[i] + 1);
						if(i != store.size() - 1) {
						indexes += " ";
					}
				}
					index_count = std::to_string(store.size());
					std::cout << index_count << std::endl;
					std::cout << indexes;
				}

				indexes = "";
				index_count = "";
				k++;
				}
			}

		bool isPalindrome(int start, std::string s) {
			int end = s.size() - 1;
			while(start < end) {
				if(s[start] != s[end]) {
					return false;
				}
				start++;
				end--;
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


/* CHAT GPT BIT MASK SOLUTION :

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s) {
    int l = 0, r = s.size() - 1;
    while(l < r) {
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

bool nonDecreasing(const string &p) {
    for(size_t i = 1; i < p.size(); i++)
        if(p[i] < p[i-1]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        bool found = false;

        // Iterate over all subsequences using bitmask
        for(int mask = 0; mask < (1<<n); mask++) {
            string p = "", x = "";
            vector<int> indices;
            for(int i = 0; i < n; i++) {
                if(mask & (1<<i)) {
                    p += s[i];
                    indices.push_back(i+1);
                } else {
                    x += s[i];
                }
            }

            if(nonDecreasing(p) && isPalindrome(x)) {
                cout << indices.size() << "\n";
                for(int j = 0; j < indices.size(); j++) {
                    cout << indices[j] << (j+1 == indices.size() ? "\n" : " ");
                }
                found = true;
                break;
            }
        }

        if(!found) cout << -1 << "\n";
    }
}

*/