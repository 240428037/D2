class Solution {
public:
	//�ڿӷ�
	int partsort(vector<int>&arr, int left, int right){
		int key = arr[right];//�ұ���key,��һ����
		while (left < right){
			//����Ҵ�����
			while (left < right&&arr[left] <= key){
				left++;
			}
			//�ҵ��ˣ����ұߵĿ�
			arr[right] = arr[left];
			//�ұ���С����
			while (left < right&&arr[right] >= key){
				right--;
			}
			//�ҵ��ˣ�����ߵĿ�
			arr[left] = arr[right];
		}
		//�����һ����
		arr[left] = key;
		return left;
	}
	void quicksort(vector<int>&arr, int left, int right){
		//�ݹ���ֹ����
		if (left > right){
			return;
		}
		int pos = partsort(arr, left, right);
		//[left,pos-1],pos,[pos+1,right]
		//�ݹ�
		quicksort(arr, left, pos - 1);
		quicksort(arr, pos + 1, right);
	}
	vector<int> MySort(vector<int>& arr) {
		int left = 0;
		int right = arr.size() - 1;
		quicksort(arr, left, right);
		return arr;
	}
};


class Solution {
public:
	int partsort(vector<int>&arr, int left, int right){
		int key = arr[right];
		while (left < right){
			while (left < right&&arr[left] <= key){
				left++;
			}
			arr[right] = arr[left];
			while (left < right&&arr[right] >= key){
				right--;
			}
			arr[left] = arr[right];
		}
		arr[left] = key;
		return left;
	}
	void quicksort(vector<int>&arr, int left, int right){
		stack<int>st;
		st.push(left);
		st.push(right);
		while (!st.empty()){
			int right = st.top();
			st.pop();
			int left = st.top();
			st.pop();
			int pos = partsort(arr, left, right);
			if (left < pos - 1){
				st.push(left);
				st.push(pos - 1);
			}
			if (pos + 1 < right){
				st.push(pos + 1);
				st.push(right);
			}
		}
	}
	vector<int> MySort(vector<int>& arr) {
		int left = 0;
		int right = arr.size() - 1;
		quicksort(arr, left, right);
		return arr;
	}
};


