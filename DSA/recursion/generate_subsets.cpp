#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    set<vector<int>>subsets;
    void solve(vector<int>&vec, vector<int>&tem, int n, int i) {
        if (i == n) {
            vector<int>tem2=tem;
            sort(tem2.begin(),tem2.end());
            subsets.insert(tem2); return;
        }
        solve(vec, tem, n, i + 1);
        tem.push_back(vec[i]);
        solve(vec, tem, n, i + 1);
        tem.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>tem;
        int n=nums.size();
        solve(nums,tem,n,0);
        vector<vector<int>>ans;
        for(auto &i:subsets){
            ans.push_back(i);
        }
        return ans;
    }
};
int main(){
    vector<int>vec={1,2,2,3,4,5};
    Solution x;
    vector<vector<int>>ans=x.subsetsWithDup(vec);
    for(auto &i:ans){
        for(auto &j:i){
            cout<<j<<" ";
        }
        cout<<endl;
        }
 return 0;  
}