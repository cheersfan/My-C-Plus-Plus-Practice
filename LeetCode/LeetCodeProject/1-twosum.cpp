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

    vector<int> ans(s.twoSum(nums, target));
    cout << ans[0] << "," << ans[1] << endl;
    //system("pause");
}

//wrong answer! -out of time
vector<int> Solution::twoSum(vector<int> & num, int target){
    vector<int> ans(2);
    int i,j;
    for(i = 0; i < num.size()-1; i ++){
        for(j = i+1; j < num.size(); j ++){
            if(target == num[i] + num[j]){
                ans[0] = num[i];
                ans[1] = num[j];
                return ans;
            }
        }
    }

    return ans;
}

vector<int> Solution::twoSum2(vector<int> &nums, int target) {
    vector<int> ans(2);
    map<int,int> nums_map;



}