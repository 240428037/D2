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
//////////////����˼·
//////////////��numbers������������Ǹ��������Ǹ���һ��Ϊmidnum
//////////////����numbers,��countͳ��midnum���ֵĴ���
//////////////���count>numbers.size()/2,return midnum;else return 0;
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
////////////����˼·
////////////��numbers������������Ǹ��������Ǹ���һ��Ϊmidnum
////////////����numbers,��countͳ��midnum���ֵĴ���
////////////���count>numbers.size()/2,return midnum;else return 0;
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
//////////���������ִ����������鳤��һ�������������������������
//////////�������������ȣ�����ȥ����������
//////////�����£�ÿ����ȥһ�������ͷ����������ʣ�µ��Ǹ��϶�������
////////class Solution {
////////public:
////////	int MoreThanHalfNum_Solution(vector<int> numbers) {
////////		if (numbers.empty())
////////			return 0;
////////		int result = numbers[0];
////////		int times = 1;
////////		for (int i = 1; i < numbers.size(); i++)//i��1��ʼ������ӵڶ�λ��ʼ����������Ϊ��һλ�Ѿ���ֵ����result
////////		{
////////			if (times != 0)
////////			{
////////				if (result == numbers[i])
////////					times++;
////////				else
////////					times--;
////////			}
////////			//times==0->������������ȥ�ˣ������ڵ�iλ��result��ֵ��times��Ϊ1��
////////			else
////////			{
////////				result = numbers[i];
////////				times = 1;
////////			}
////////		}
////////		//����forѭ���󣬵õ�һ��result,��Ҫ�ж�һ��result�ǲ�������
////////		//��ʱ��times��Ϊ����������Ҫ��Ϊ0��
////////		times = 0;
////////		//����numbers,��timesͳ��result���ֵĴ���
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
////////�����ַ�������cur��¼���������ִ���
////////Ȼ��cur.length()��ret.length()�Ƚ�
////////���cur.length()>ret.length(),������ô�ʱ��cur����ret
////////���cur.length()<ret.length(),��clear����ʱcur����������ִ���������������Ѱ�����������ִ�
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
//	a.resize(n + 1);//��ֹa[i+1]����Խ��
//	a[n] = 0;//��ֹa[i+1]����Խ��
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	//����
//	int i = 0;
//	int count = 0;
//	while (i < n)
//	{
//		//�ǵݼ�����
//		if (a[i] < a[i + 1])
//		{
//			while (a[i] <= a[i + 1])
//				i++;
//			count++;
//			i++;
//		}
//		else if (a[i] == a[i + 1])
//			i++;
//		//�ǵ�������
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
	while (cin >> n)//cin>>n����whileѭ������Ϊ�˷�ֹ��������ѭ������
	{
		long long sum = 0;//sum���Ͷ���Ϊlong long��Ϊ�˷�ֹ������������
		vector<int>a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++)//forѭ����������i<n���n����������ʽ�Ƶ�����
		{
			sum += a[a.size() - 2 * (1 + i)];
		}
		cout << sum << endl;
	}
	return 0;
}