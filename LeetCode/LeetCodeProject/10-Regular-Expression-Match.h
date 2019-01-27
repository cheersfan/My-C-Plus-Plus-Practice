#pragma once
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	bool isMatch(string s, string p);
	
private:
	void printArrays(string s, string p, int** dp);
	bool myMatch(int s_ptr, string s, int p_ptr, string p);
};
void my_Regular_main();