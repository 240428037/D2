
#include<iostream>
#include<vector>
using namespace std;
int Getmax(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int size;
	cin >> size;
	vector<int>nums(size);
	for (int i = 0; i < size; i++)
		cin >> nums[i];
	int sum = nums[0];//临时最大值
	int max = nums[0];//比较之后最大值
	for (int i = 0; i < size; i++)
	{
		sum = Getmax(sum + nums[i], nums[i]);//状态方程
		if (sum >= max)
			max = sum;
	}
	cout << max << endl;
	return 0;
}



#include<iostream>
#include<string>
using namespace std;
bool IsCircle(const string&s)
{
	int begin = 0, end = s.size() - 1;
	while (begin < end)
	{
		if (s[begin] != s[end])
			return false;
		begin++;
		end--;
	}
	return true;
}
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int count = 0;
	for (int i = 0; i <= str1.size(); i++)
	{
		string str = str1;
		str.insert(i, str2);
		if (IsCircle(str))
			count++;
	}
	cout << count << endl;
	return 0;
}