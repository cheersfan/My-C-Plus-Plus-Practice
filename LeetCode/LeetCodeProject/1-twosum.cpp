//
// Created by root on 12/30/18.
//

#include "1-twosum.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

void my_twosum_main(){
    //输入
	Solution s;
	int n=0,target,i=0;

	cout << "输入数列的长度：";
	cin >> n;
	cout << "\n输入数列：";
	vector<int> nums(n);
	while(n--){
		cin >> nums[i];
		i++;
	}

	cout << "\n输入目标之和：";
	cin >> target;

//    Solution s;
//    vector<int> nums(4);
//    nums[0] = 2;
//    nums[1] = 7;
//    nums[2] = 11;
//    nums[3] = 15;
//
//    int target = 9;

    vector<int> ans(s.twoSum3(nums, target));
    cout << ans[0] << "," << ans[1] << endl;
    //system("pause");
}

vector<int> Solution::twoSum(vector<int> & nums, int target){
    vector<int> ans(2);
    int i,j;
    for(i = 0; i < nums.size()-1; i ++){
        for(j = i+1; j < nums.size(); j ++){
            if(target == nums[i] + nums[j]){
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }

    return ans;
}

vector<int> Solution::twoSum2(vector<int> &nums, int target) {
    vector<int> ans(2);
    //vector<int> ans;
    map<int,int> nums_map;

    //add <num, num_Index> into the hashmap
    for (int i = 0; i < nums.size(); ++i) {
        nums_map[nums[i]] = i;
    }

    //find out if there is the (target - num) in hashmap
    for(int i = 0; i < nums.size(); i ++){
        int temp = target - nums[i];
        if(nums_map.find(temp) != nums_map.end() && nums_map[temp] != i ){
            //ans.push_back(i);
            //ans.push_back(nums_map[temp]);
            ans[0] = i;
            ans[1] = nums_map[temp];
            break;
        }
    }
    return ans;
}

vector<int> Solution::twoSum3(vector<int> &nums, int target) {
    vector<int> ans;
    map<int,int> nums_map;
    for(int i = 0; i < nums.size(); i ++){
        int temp = target - nums[i];
        nums_map[nums[i]] = i;
        if(nums_map.find(temp) != nums_map.end() && nums_map[temp] != i){
            int ans1_index = i > nums_map[temp] ? nums_map[temp] : i;
            int ans2_index = i > nums_map[temp] ? i : nums_map[temp];
            ans.push_back(ans1_index);
            ans.push_back(ans2_index);
            break;
        }
    }
    return ans;
}