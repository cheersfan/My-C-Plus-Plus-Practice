//
// Created by cheers on 2019-03-20.
//

#include "26-RemoveDuplicates.h"

void my_remove_duplicate_main(){
    vector<int> vec = {0,0,1,1,1,2,2,3,3,4};
    Solution s;
    cout << s.removeDuplicates(vec) << endl;
}

int Solution::removeDuplicates(vector<int> &nums) {
    if(nums.size() == 0){
        return 0;
    }
    int ans = 1;
    int ptr0 = 0;
    int ptr1 = 1;
    while (ptr1 < nums.size()){
        if(nums.at(ptr0) < nums.at(ptr1)){
            ptr0 ++;
            nums.at(ptr0) = nums.at(ptr1);
            ptr1 ++;
            ans ++;
        }else if(nums.at(ptr0) == nums.at(ptr1)){
            ptr1 ++;
        }
    }
    return ans;
}


