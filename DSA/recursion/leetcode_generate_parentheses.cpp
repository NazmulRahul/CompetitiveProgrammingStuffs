#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string>ans;
    void solve(string &s, int o, int c) {
        if (o == 0 and c == 0) {
            ans.push_back(s); return;
        }
        if (o > 0) {
            s.push_back('(');
            solve(s, o - 1, c);
            s.pop_back();
        }
        if (c > 0 and o < c) {
            s.push_back(')');
            solve(s, o, c - 1);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        solve(s, n, n);
        return ans;
    }
};
int main() {
    int n;
    cin >> n;
    Solution x;
    vector<string>vec = x.generateParenthesis(n);
    for (auto &i : vec)
        cout << i <<" ";
    cout<<'\n';
}