
#include "10-Regular-Expression-Match.h"

void my_Regular_main() {
	Solution s;
	string s1, s2;
	while (cin >> s1 >> s2) {
		cout << s.isMatch(s1, s2) << endl;
	}
}
bool Solution::isMatch(string s, string p) {
	/**回溯法**/
	//从后往前进行匹配
	/*int s_ptr = s.size() - 1;
	int p_ptr = p.size() - 1;
	
	return myMatch(s_ptr, s, p_ptr, p);*/
	/**动态规划法**/		
	int s_i = 1;
	int p_j = 1;
	//二位数组dp[][]存储s[0~i]与p[0~j]是否匹配
	//dp[0][0]=1，是两个空字符串匹配
	int** dp = new int*[s.size()+1];
	for (int i = 0; i < s.size()+1; i++) {
		dp[i] = new int[p.size()+1];
		//初始化二维数组的第一列
		if (i == 0) {
			dp[i][0] = 1;
		}
		else {
			dp[i][0] = 0;
		}
	}

	//初始化二维数组第一行
	for (int i = 1; i <= p.size(); i++) {
		if (p[i - 1] == '*' && dp[0][i-2] == 1) {
			dp[0][i] = 1;
		}
		else {
			dp[0][i] = 0;
		}
	}

	for (int i = 1; i <= s.size(); i++) {
		for (int j = 1; j <= p.size(); j++) {
			if (s[i-1] == p[j-1] || p[j-1] == '.') {
				dp[i][j] = dp[i - 1][j - 1];
			}else if (p[j - 1] == '*') {
				if ((dp[i - 1][j] && (s[i-1] == p[j-2] || p[j-2] == '.')) || dp[i][j-2]) {
					dp[i][j] = 1;
				}
				else {
					dp[i][j] = 0;
				}
			}
			else {
				dp[i][j] = 0;
			}
		}
	}

	printArrays(s, p, dp);

	int flag = dp[s.size()][p.size()];

	for (int i = 0; i <= s.size(); i++) {
		delete[] dp[i];
	}
	delete[] dp;
	return flag == 0 ? 0 : 1;
}

void Solution::printArrays(string s, string p,int** dp){
	for (int i = 0; i <= s.size(); i++) {
		for (int j = 0; j <= p.size(); j++) {
			cout << "(" << i << "," << j << ") " << dp[i][j] << " ";
		}
		cout << endl;
	}
}
bool Solution::myMatch(int s_ptr, string s, int p_ptr, string p) {
	//cout << "ptr:" << p_ptr << " sptr:" << s_ptr << endl;
	if (p_ptr == -1 ) {
		if (s_ptr ==  -1)
			return true;
		else
			return false;
	}

	if (p[p_ptr] == '*') {
		if (s_ptr > -1 && (p[p_ptr-1] == '.' || p[p_ptr-1] == s[s_ptr])) {
			if (myMatch(s_ptr - 1, s, p_ptr, p)) {
				return true;
			}
		}
		//'*'将p[p_ptr]这个字符变为0个字符
		return myMatch(s_ptr, s, p_ptr - 2, p);
	}

	//注意这一部分要放在前一个if后面，否则s_ptr=-1时，使用s[s_ptr]数组会越界
	if (p[p_ptr] == '.' || p[p_ptr] == s[s_ptr]) {
		return(myMatch(s_ptr - 1, s, p_ptr - 1, p));
	}
		return false;
} 


