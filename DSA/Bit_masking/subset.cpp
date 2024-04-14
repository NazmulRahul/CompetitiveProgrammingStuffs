#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define endl '\n'
#define print(b)  for(auto &a:b) cout<<a<<' ';
#define printN(b) for(auto &a:b) cout<<a<<endl;
#define fastio    ios::sync_with_stdio(false);cin.tie(0);
#define mp make_pair

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>ans;
    int n = nums.size();
    int subsets_count = 1 << n;
    for (int i = 0; i < subsets_count; i++) {
        vector<int>tem;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))
                tem.push_back(nums[j]);
        }
        ans.push_back(tem);
    }
    return ans;

}
int main() {
    fastio
    vector<int>nums;
    int x;
    while (scanf("%d", &x) != EOF)
        nums.push_back(x);

    auto ans = subsets(nums);
    for (auto &i : ans) {
        print(i); cout << endl;
    }

    return 0;
}