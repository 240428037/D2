class Solution {
public:
	//向下调整算法，把堆调为大堆
	void adjustdown(vector<int>&arr, int n, int root){
		int parent = root;
		int child = parent * 2 + 1;
		while (child<n){
			//选出左右孩子中较大的那一个
			if (child + 1 < n&&arr[child + 1] > arr[child]){
				child++;
			}
			//如果孩子比父亲大，交换，继续向下调整
			if (arr[child]>arr[parent]){
				swap(arr[child], arr[parent]);
				parent = child;
				child = parent * 2 + 1;
			}
			else{
				//如果孩子小于父亲，则调整结束
				break;
			}
		}
	}
	void heapsort(vector<int>&arr, int n){
		//堆排升序建大堆
		//建堆
		//使用adjustdown从倒数第一个非叶子节点的子树开始调整，一直调整到根节点的树，就可以建为堆
		for (int i = ((n - 1) - 1) / 2; i >= 0; i--){
			adjustdown(arr, n, i);
		}
		//交换然后继续调堆
		for (int end = n - 1; end >= 0; end--){
			swap(arr[0], arr[end]);
			adjustdown(arr, end, 0);
		}
	}
	vector<int> MySort(vector<int>& arr) {
		int n = arr.size();
		heapsort(arr, n);
		return arr;
	}
};