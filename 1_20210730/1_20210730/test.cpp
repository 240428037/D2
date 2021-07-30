class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		//һ�����ȿ����������
		if (k == 0){
			return{};
		}
		//��v���г�ʼ��
		vector<int>v(k, 0);
		priority_queue<int>q;//���ȼ�����
		//��q�в���input���±��0��k-1��k����
		for (int i = 0; i < k; i++){
			q.push(input[i]);
		}
		//i��k��ʼ����һ��Ѷ�Ԫ�رȽϣ�����ȶѶ�Ԫ��С���򽻻�
		for (int i = k; i<(int)input.size(); i++){
			if (q.top()>input[i]){
				q.pop();
				q.push(input[i]);
			}
		}
		//��q��Ԫ�ظ�ֵ��v
		for (int i = 0; i < k; i++){
			v[i] = q.top();
			q.pop();
		}
		return v;
	}
};



class Solution {
public:
	int getmax(int a, int b){
		return a > b ? a : b;
	}
	//��̬�滮
	int FindGreatestSumOfSubArray(vector<int> array) {
		int sum = array[0];
		int max = array[0];//������������������
		//i��1��ʼ����Ϊarray[0]��ֵ����sum��max
		for (int i = 1; i < array.size(); i++){
			sum = getmax(sum + array[i], array[i]);
			if (sum >= max){
				max = sum;
			}
		}
		return max;
	}
};







