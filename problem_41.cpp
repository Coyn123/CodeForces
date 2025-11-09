#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool translation(const string& s, const string& t) {
            int j = 0;
            int i = t.size() - 1;

            if(s.size() != t.size()) {
                return false;
            }

            while(j < t.size()) {
                if(s[j] == t[i]) {
                ++j;
                --i;
                } else {
                    return false;
                }
            }
            return true;

        }
};

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Solution test;
    string s, t;
    cin >> s >> t;

    bool ret = test.translation(s,t);
    if(ret) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    };
    return 0;
}
