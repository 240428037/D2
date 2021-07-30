class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		//一上来先考虑特殊情况
		if (k == 0){
			return{};
		}
		//对v进行初始化
		vector<int>v(k, 0);
		priority_queue<int>q;//优先级队列
		//向q中插入input中下标从0到k-1的k个数
		for (int i = 0; i < k; i++){
			q.push(input[i]);
		}
		//i从k开始，逐一与堆顶元素比较，如果比堆顶元素小，则交换
		for (int i = k; i<(int)input.size(); i++){
			if (q.top()>input[i]){
				q.pop();
				q.push(input[i]);
			}
		}
		//把q中元素赋值给v
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
	//动态规划
	int FindGreatestSumOfSubArray(vector<int> array) {
		int sum = array[0];
		int max = array[0];//保存连续子数组最大和
		//i从1开始，因为array[0]赋值给了sum和max
		for (int i = 1; i < array.size(); i++){
			sum = getmax(sum + array[i], array[i]);
			if (sum >= max){
				max = sum;
			}
		}
		return max;
	}
};







