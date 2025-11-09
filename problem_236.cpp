#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution
{
    public:
    bool test (string user) {
        map<char, int> freq;
        for (char letter : user) {
            freq[letter]++;
        };
        vector<char> ret;
        for(auto [letter, amount] : freq) {
            ret.push_back(letter);
        }
        return ret.size() % 2;
    }
};

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution testing;
    string input;
    cin >> input;

    bool ret = testing.test(input);

    if(ret) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

}