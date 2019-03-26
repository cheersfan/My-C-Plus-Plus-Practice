//
// Created by cheers on 2019-03-26.
//

#include "165-CompareVersion.h"

void my_2version_main(){
    //没考虑多个.的情况，失败
//    string version1,version2;
//    while(cin >> version1 >> version2){
//        int index1 = version1.find('.');
//        int index2 = version2.find('.');
//        cout << "index1:" << index1 << ", index2:" << index2 << endl;
//
//        int v1_a = atoi((version1.substr(0,index1)).c_str());
//        int v1_b = index1 == -1 ? 0 : atoi((version1.substr(index1+1, version1.size()-index1)).c_str());
//        cout << v1_a << "," << v1_b << endl;
//
//        int v2_a = atoi((version2.substr(0,index2)).c_str());
//        int v2_b = index2 == -1 ? 0 : atoi((version2.substr(index2+1, version2.size()-index2)).c_str());
//        cout << v2_a << "," << v2_b << endl;
//
//        if(v1_a < v2_a || (v1_a == v2_a && v1_b < v2_b)){
//            cout << -1 << endl;
//        }else if(v1_a == v2_a && v1_b == v2_b){
//            cout << 0 << endl;
//        }else{
//            cout << 1 << endl;
//        }
//    }
    Solution s;
    string version1,version2;
    while(cin >> version1 >> version2){
        cout << s.compareVersion(version1, version2) << endl;
    }

}

int Solution::compareVersion(string version1, string version2) {
    vector<string> vec1;
    const char* d = ".";
    char* p;
    p = strtok((char*)version1.c_str(),d);
    while (p){
        //printf("%s\n",p);
        vec1.push_back(p);
        p = strtok(nullptr, d);
    }

    vector<string> vec2;
    char* p2;
    p2 = strtok((char*)version2.c_str(), d);
    while(p2){
        vec2.push_back(p2);
        p2 = strtok(nullptr, d);
    }

    int i = 0;
    while (i < vec1.size() && i < vec2.size()){
        if(atoi(vec1.at(i).data()) < atoi(vec2.at(i).data())){
            cout << i << endl;
            return -1;
        }else if(atoi(vec1.at(i).data()) > atoi(vec2.at(i).data())){
            cout << i << endl;
            return 1;
        }else{
            i++;
        }
    }

    if(vec1.size() < vec2.size()){
        while (i < vec2.size()){
            if(atoi(vec2.at(i).data()) != 0){
                return -1;
            }
            i++;
        }
        return 0;
    }else{
        while (i < vec1.size()){
            if(atoi(vec1.at(i).data()) != 0){
                return 1;
            }
            i++;
        }
    }

    return 0;
}