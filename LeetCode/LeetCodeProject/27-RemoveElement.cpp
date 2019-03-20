//
// Created by cheers on 2019-03-20.
//

#include "27-RemoveElement.h"
void my_remove_element_main(){
    vector<int> vec = {3,3};
    Solution s;
    cout << s.removeElement(vec,3) << endl;
}

int Solution::removeElement(vector<int> &nums, int val) {
    int ans = 0;
    if(nums.size() == 0){
        return ans;
    }
    int ptr0 = 0;
    int ptr1 = nums.size()-1;
    while (ptr0 < nums.size() && ptr1 >= 0){
        if(ptr0 < nums.size() && nums.at(ptr0) != val){
            ptr0 ++;
            ans ++;
            continue;
        }


        if(ptr0 < ptr1 && nums.at(ptr1) == val){
            ptr1 --;
            continue;
        }

        nums.at(ptr0) = nums.at(ptr1);

        ptr0 ++;
        ptr1 --;
    }
    return ans;
}