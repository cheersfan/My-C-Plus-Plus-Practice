//
// Created by root on 1/6/19.
//

#include "4-medianoftwosortedarray.h"
void my_median_main(){
    vector<int> a;
    vector<int> b;
    cout << "input str1: " << endl;
    int tmp;
    while (cin >> tmp){
        a.push_back(tmp);
        if(cin.get() == '\n'){
            break;
        }
    }
    cout << "input str2: " << endl;
    while (cin >> tmp){
        b.push_back(tmp);
        if(cin.get() == '\n'){
            break;
        }
    }

    medianOfTwoSortedArrays_main(a, b);
}

double medianOfTwoSortedArrays_main(vector<int> & nums1, vector<int> & nums2){
    vector<int> new_array;
    int ptr_a = 0;
    int ptr_b = 0;
    while (ptr_a != nums1.size() || ptr_b != nums2.size()){
        if(ptr_a == nums1.size()){
            while (ptr_b != nums2.size()){
                new_array.push_back(nums2[ptr_b]);
                ptr_b++;
            }
            break;
        }

        if(ptr_b == nums2.size()){
            while (ptr_a != nums1.size()){
                new_array.push_back(nums1[ptr_a]);
                ptr_a ++;
            }
            break;
        }

        if(nums1[ptr_a] > nums2[ptr_b]){
            new_array.push_back(nums2[ptr_b++]);
        }else if(nums1[ptr_a] < nums2[ptr_b]){
            new_array.push_back(nums1[ptr_a++]);
        }else {
            new_array.push_back(nums1[ptr_a++]);
            new_array.push_back(nums2[ptr_b++]);
        }
    }

    for(int i = 0; i < new_array.size(); i ++){
        cout << new_array[i] << ",";
    }
    cout << endl;

    bool flag = new_array.size() % 2 == 0 ? true : false;
    int index = new_array.size() / 2;
    double ans = 0;
    if(flag){
        ans = (new_array[index-1]+new_array[index])/2.0;
    }else{
        ans = new_array[index];
    }

    cout << ans << endl;
    return ans;
}