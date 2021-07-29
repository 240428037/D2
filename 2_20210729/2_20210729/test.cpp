class Solution {
public:
	//挖坑法
	int partsort(vector<int>&arr, int left, int right){
		int key = arr[right];//右边作key,挖一个坑
		while (left < right){
			//左边找大先走
			while (left < right&&arr[left] <= key){
				left++;
			}
			//找到了，填右边的坑
			arr[right] = arr[left];
			//右边找小后走
			while (left < right&&arr[right] >= key){
				right--;
			}
			//找到了，填左边的坑
			arr[left] = arr[right];
		}
		//填最后一个坑
		arr[left] = key;
		return left;
	}
	void quicksort(vector<int>&arr, int left, int right){
		//递归终止条件
		if (left > right){
			return;
		}
		int pos = partsort(arr, left, right);
		//[left,pos-1],pos,[pos+1,right]
		//递归
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


