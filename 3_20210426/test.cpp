//////////////////#define _CRT_SECURE_NO_WARNINGS 1
////////////////
////////////////class Solution {
////////////////public:
////////////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
////////////////		if (numbers.empty())
////////////////			return 0;
////////////////		sort(numbers.begin(), numbers.end());
////////////////		int mid = numbers[numbers.size() / 2];
////////////////		int count = 0;
////////////////		for (int i = 0; i<numbers.size(); i++)
////////////////		{
////////////////			if (mid == numbers[i])
////////////////				count++;
////////////////		}
////////////		//if (count>numbers.size() / 2)
////////////		//	return mid;
////////////		//else
////////////		//	return 0;
////////////////	}
////////////////};
////////////////
////////////////
////////////////
////////////////class Solution {
////////////////public:
////////////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
////////////////		if (numbers.empty())
////////////////			return 0;
////////////////		sort(numbers.begin(), numbers.end());
////////////////		int midnum = numbers[numbers.size() / 2];
////////////////		int count = 0;
////////////////		for (int i = 0; i<numbers.size(); i++)
////////////////		{
////////////////			if (midnum == numbers[i])
////////////////				count++;
////////////////		}
////////////////		return(count>numbers.size() / 2) ? midnum : 0;
////////////////	}
////////////////};
//////////////
//////////////解题思路
//////////////对numbers排序，如果存在那个数，则那个数一定为midnum
//////////////遍历numbers,用count统计midnum出现的次数
//////////////如果count>numbers.size()/2,return midnum;else return 0;
////////////class Solution {
////////////public:
////////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
////////////		if (numbers.empty())
////////////			return 0;
////////////		sort(numbers.begin(), numbers.end());
////////////		int midnum = numbers[numbers.size() / 2];
////////////		int count = 0;
////////////		for (int i = 0; i<numbers.size(); i++)
////////////		{
////////////			if (midnum == numbers[i])
////////////				count++;
////////////		}
////////////		if (count>numbers.size() / 2)
////////////			return midnum;
////////////		else
////////////			return 0;
////////////	}
////////////};
//////////
//////////
//////////
//////////
////////////////#define _CRT_SECURE_NO_WARNINGS 1
//////////////
//////////////class Solution {
//////////////public:
//////////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
//////////////		if (numbers.empty())
//////////////			return 0;
//////////////		sort(numbers.begin(), numbers.end());
//////////////		int mid = numbers[numbers.size() / 2];
//////////////		int count = 0;
//////////////		for (int i = 0; i<numbers.size(); i++)
//////////////		{
//////////////			if (mid == numbers[i])
//////////////				count++;
//////////////		}
////////////if (count>numbers.size() / 2)
////////////	return mid;
////////////else
////////////	return 0;
//////////////	}
//////////////};
//////////////
//////////////
//////////////
//////////////class Solution {
//////////////public:
//////////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
//////////////		if (numbers.empty())
//////////////			return 0;
//////////////		sort(numbers.begin(), numbers.end());
//////////////		int midnum = numbers[numbers.size() / 2];
//////////////		int count = 0;
//////////////		for (int i = 0; i<numbers.size(); i++)
//////////////		{
//////////////			if (midnum == numbers[i])
//////////////				count++;
//////////////		}
//////////////		return(count>numbers.size() / 2) ? midnum : 0;
//////////////	}
//////////////};
////////////
////////////解题思路
////////////对numbers排序，如果存在那个数，则那个数一定为midnum
////////////遍历numbers,用count统计midnum出现的次数
////////////如果count>numbers.size()/2,return midnum;else return 0;
//////////class Solution {
//////////public:
//////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
//////////		if (numbers.empty())
//////////			return 0;
//////////		sort(numbers.begin(), numbers.end());
//////////		int midnum = numbers[numbers.size() / 2];
//////////		int count = 0;
//////////		for (int i = 0; i<numbers.size(); i++)
//////////		{
//////////			if (midnum == numbers[i])
//////////				count++;
//////////		}
//////////		if (count>numbers.size() / 2)
//////////			return midnum;
//////////		else
//////////			return 0;
//////////	}
//////////};
////////
////////
////////
////////
////////class Solution {
////////public:
////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
////////		if (numbers.empty())
////////			return 0;
////////		sort(numbers.begin(), numbers.end());
////////		int midnum = numbers[numbers.size() / 2];
////////		int count = 0;
////////		for (int i = 0; i<numbers.size(); i++)
////////		{
////////			if (midnum == numbers[i])
////////				count++;
////////		}
////////		if (count>numbers.size() / 2)
////////			return midnum;
////////		else
////////			return 0;
////////	}
////////};
////////
////////
//////////众数：出现次数超过数组长度一半的数，非众数：其他的数；
//////////如果两个数不相等，就消去这两个数；
//////////最坏情况下，每次消去一个众数和非众数，最后剩下的那个肯定是众数
////////class Solution {
////////public:
////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
////////		if (numbers.empty())
////////			return 0;
////////		int result = numbers[0];
////////		int times = 1;
////////		for (int i = 1; i < numbers.size(); i++)//i从1开始，数组从第二位开始向后遍历，因为第一位已经赋值给了result
////////		{
////////			if (times != 0)
////////			{
////////				if (result == numbers[i])
////////					times++;
////////				else
////////					times--;
////////			}
////////			//times==0->两个数都被消去了，重新在第i位给result赋值，times置为1；
////////			else
////////			{
////////				result = numbers[i];
////////				times = 1;
////////			}
////////		}
////////		//出了for循环后，得到一个result,需要判断一下result是不是众数
////////		//此时，times作为计数器，先要置为0；
////////		times = 0;
////////		//遍历numbers,用times统计result出现的次数
////////		for (int i = 0; i<numbers.size(); i++)
////////		{
////////			if (result == numbers[i])
////////				times++;
////////		}
////////		if (times>numbers.size() / 2)
////////			return result;
////////		else
////////			return 0;
////////	}
////////};
//////
//////
////////遍历字符串，用cur记录连续的数字串，
////////然后cur.length()和ret.length()比较
////////如果cur.length()>ret.length(),则更新用此时的cur更新ret
////////如果cur.length()<ret.length(),则clear掉此时cur里的连续数字串，继续向后遍历，寻找连续的数字串
//////#include<iostream>
//////#include<string>
//////using namespace std;
//////int main()
//////{
//////	string str, cur, ret;
//////	cin >> str;
//////	for (int i = 0; i <= str.length(); i++)
//////	{
//////		if (str[i] >= '0'&&str[i] <= '9')
//////			cur += str[i];
//////		else
//////		{
//////			if (cur.length() > ret.length())
//////				ret = cur;
//////			else
//////				cur.clear();
//////		}
//////	}
//////	cout << ret << endl;
//////	return 0;
//////}
////
////
////
////#include<iostream>
////#include<string>
////#include<algorithm>
////using namespace std;
////int main()
////{
////	string s;
////	getline(cin, s);
////	reverse(s.begin(), s.end());
////	auto start = s.begin();
////	while (start != s.end())
////	{
////		auto end = start;
////		while (end != s.end() && *end != ' ')
////			end++;
////		reverse(start, end);
////		if (end != s.end())
////			start = end + 1;
////		else
////			start = end;
////	}
////	cout << s << endl;
////	return 0;
////}
//
//
//
////#include<iostream>
////#include<string>
////#include<algorithm>
////using namespace std;
////int main()
////{
////	string s;
////	getline(cin, s);
////	reverse(s.begin(), s.end());
////	auto start = s.begin();
////	while (start != s.end())
////	{
////		auto end = start;
////		while (end != s.end() && *end != ' ')
////			end++;
////		reverse(start, end);
////		if (end != s.end())
////			start = end + 1;
////		else
////			start = end;
////	}
////	cout << s << endl;
////	return 0;
////}
//
//
//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>a;
//	a.resize(n + 1);//防止a[i+1]数组越界
//	a[n] = 0;//防止a[i+1]数组越界
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	//遍历
//	int i = 0;
//	int count = 0;
//	while (i < n)
//	{
//		//非递减序列
//		if (a[i] < a[i + 1])
//		{
//			while (a[i] <= a[i + 1])
//				i++;
//			count++;
//			i++;
//		}
//		else if (a[i] == a[i + 1])
//			i++;
//		//非递增序列
//		else
//		{
//			while (a[i] > a[i + 1])
//				i++;
//			count++;
//			i++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n)//cin>>n放在while循环里是为了防止测试用例循环输入
	{
		long long sum = 0;//sum类型定义为long long是为了防止测试用例过大
		vector<int>a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)//for循环控制条件i<n这个n是由上述公式推导出的
		{
			sum += a[a.size() - 2 * (1 + i)];
		}
		cout << sum << endl;
	}
	return 0;
}