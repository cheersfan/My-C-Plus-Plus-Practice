#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height);

private:
	string convert(int x, int num, const string* strs);
};

void my_maxwater_main();