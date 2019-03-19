//
// Created by cheers on 2019-03-19.
//

#include "18-fourSum.h"

void my_foursum_main(){
    vector<int> nums = {0,0,0,0};
    int target = 0;
    Solution s;
    s.printvecs2(s.fourSum(nums,0));

}

vector<vector<int>> Solution::fourSum(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    if(nums.size() < 4){
        return ans;
    }
    for(int a = 0; a < nums.size()-3; a ++){
        if(a != 0 && nums[a-1] == nums[a]){
            continue;
        }
        for(int b = a+1; b < nums.size()-2; b++){
            if( b != a+1 && nums[b-1] == nums[b]){
                continue;
            }
            int c = b+1;
            int d = nums.size()-1;
            while(c < d){
                if(nums[a] + nums[b] + nums[c] + nums[d] == target){
                    vector<int> tmp = {nums[a],nums[b],nums[c],nums[d]};
                    ans.push_back(tmp);
                    c++;
                    while(nums[c-1] == nums[c] && c < d){
                        c++;
                    }
                    continue;
                }else if(nums[a] + nums[b] + nums[c] + nums[d] < target){
                    c++;
                }else {
                    d--;
                }
            }
        }
    }

    return ans;
}

void Solution::printvecs2(vector<vector<int>> vecs){
    cout << "answer:";
    for(vector<int> v : vecs){
        for(int x : v){
            cout << x << ",";
        }
        cout << endl;
    }
}