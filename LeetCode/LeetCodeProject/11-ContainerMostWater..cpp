#include "11-Container-Most-Water.h"

void my_maxwater_main() {
	Solution s;
	int x;
	vector<int> height;
	while (cin >> x && x != -1 )
	{
		height.push_back(x);
	}

	cout << "read over " << endl;
	cout << s.maxArea(height) << endl;
}

int Solution::maxArea(vector<int> &height) {
	
	/**暴力法**/
	/*int maxWater = 0;
	for (int i = 0; i < height.size()-1; i++) {
		for (int j = i + 1; j < height.size(); j++) {
			int h = height[i] < height[j] ? height[i] : height[j];
			int v = h * (j - i);
			maxWater = maxWater >= v ? maxWater : v;
		}
	}

	return maxWater;*/

	/**双指针法**/
	//两个指针放在两头，哪边长度低，哪边向里移动
	int maxWater = 0;
	int start_ptr = 0;
	int end_ptr = height.size() - 1;

	while (start_ptr <= end_ptr)
	{
		//找到两个指针中指向最小高度，并将最小高度的指针向内移动
		//cout << end_ptr << "-" << start_ptr << endl;
		int h = height[start_ptr] < height[end_ptr] ? height[start_ptr] : height[end_ptr];
		int v = h * (end_ptr - start_ptr);
		maxWater = maxWater >= v ? maxWater : v;
		//cout << "h:" << h << ",l:" << end_ptr << "-" << start_ptr << endl;
		//cout << "maxwater:" << maxWater << endl;
		//cout << "i:" << height[start_ptr] << ", j:" << height[end_ptr] << endl;
		if (height[start_ptr] <= height[end_ptr]) {
			start_ptr++;
		}
		else {
			end_ptr--;
		}
	}

	return maxWater;
}