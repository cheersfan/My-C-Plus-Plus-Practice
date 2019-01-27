#include "12-IntegerToRoma.h"

void my_integertoroma_main() {
	int x;
	Solution s;
	while (cin >> x)
	{
		cout << s.intToRoman(x) << endl;
	}
}

string Solution::intToRoman(int num){
	string roma = "";
	string strs[13] = { "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
	string num_str = to_string(num);
	cout << num_str << endl;
	return roma;
}

string Solution::