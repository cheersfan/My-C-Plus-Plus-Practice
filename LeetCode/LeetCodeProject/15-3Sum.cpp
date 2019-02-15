//
// Created by root on 2/14/19.
//

#include <algorithm>
#include <set>
#include "15-3Sum.h"
void my_3sum_main(){
    Solution s;
    vector<int> vec;
    int x;
    while (cin >> x){
        if(x == -100){
            s.printvecs(s.threeSum2(vec));
            vec.clear();
        }else{
            vec.push_back(x);
        }
    }
}

void Solution::printvecs(vector<vector<int>> vecs){
    cout << "answer:";
    for(vector<int> v : vecs){
        for(int x : v){
            cout << x << ",";
        }
        cout << endl;
    }
}


//
vector<vector<int>> Solution::threeSum(vector<int> &nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
//    for(int x : nums){
//        cout << x << ",";
//    }
//    cout << endl;

    //input number < 3, return NULL
    if(nums.size() < 3){
        return vector<vector<int>> ();
    }

    for(int i = 0; i < nums.size() - 2; i ++){
        for(int j = i + 1; j < nums.size() - 1; j ++){
            vector<int> temp = {nums[i], nums[j]};
            int twosum = nums[i] + nums[j];
            int k = j + 1;
            //cout << "twosum,:" << twosum << endl;

            while (k < nums.size()){

                if(nums[k] > -twosum){
                    break;
                }

                if(nums[k] == -twosum) {
                    temp.push_back(nums[k]);
                    //get nums[i].nums[j],nums[k]
                    ans.push_back(temp);

                    //nums[i] == nums[j]
                    if(nums[i] == nums[j]){
                        break;
                    }

                    temp.pop_back();

                }

                k++;
                while (k < nums.size() && (nums[k-1] == nums[k])){
                    k++;
                }
            }
            while (j < nums.size()-1 && nums[j] == nums[j+1]){
                j++;
            }
            //cout << nums[i] << "," << nums[j] << "," << nums[k] << endl;
        }
        while (i < nums.size() - 2 && nums[i] == nums[i+1]){
            i ++;
        }
    }
    return ans ;

}

vector<vector<int>> Solution::threeSum2(vector<int> &nums) {
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    for(int x : nums){
        cout << x << ",";
    }
    cout << endl;
    for(int i = 0; i < nums.size() - 2;){
        for(int j = i + 1, k = nums.size() - 1; j < k ;){
            int twosum = nums[j] + nums[k];
            cout << "twosum:" << twosum << endl;
            cout << nums[i] << "," << nums[j] << "," << nums[k] << endl;
            if(twosum < -nums[i]){
                j++;
            }else if(twosum > -nums[i]){
                k--;
            }else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);

                do{
                    j++;
                }while (j < k && nums[j-1] == nums[j]);

                do{
                    k--;
                }while (j < k && nums[k+1] == nums[k]);
            }
        }
        do{
            i++;
        }while (i < nums.size()-2 && nums[i-1] == nums[i]);
    }
    return ans;
}