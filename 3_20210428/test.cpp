class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int flag = 1;
		if (str[0] == '-')
		{
			flag = -1;
			str[0] = '0';//ASCIIÂëÖµ£º'-'-45£¬'0'-48,'9'-57;
		}
		if (str[0] == '+')
		{
			flag = 1;
			str[0] = '0';//ASCIIÂëÖµ£º'+'-43,'0'-48,'9'-57;
		}
		int sum = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i]<'0' || str[i]>'9')
			{
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';//ASCIIÂëÖµ£º'0'-48,'1'-49,'2'-50
		}
		return flag*sum;
	}
};