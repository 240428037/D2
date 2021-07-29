class Solution {
public:
	//���µ����㷨���Ѷѵ�Ϊ���
	void adjustdown(vector<int>&arr, int n, int root){
		int parent = root;
		int child = parent * 2 + 1;
		while (child<n){
			//ѡ�����Һ����нϴ����һ��
			if (child + 1 < n&&arr[child + 1] > arr[child]){
				child++;
			}
			//������ӱȸ��״󣬽������������µ���
			if (arr[child]>arr[parent]){
				swap(arr[child], arr[parent]);
				parent = child;
				child = parent * 2 + 1;
			}
			else{
				//�������С�ڸ��ף����������
				break;
			}
		}
	}
	void heapsort(vector<int>&arr, int n){
		//�������򽨴��
		//����
		//ʹ��adjustdown�ӵ�����һ����Ҷ�ӽڵ��������ʼ������һֱ���������ڵ�������Ϳ��Խ�Ϊ��
		for (int i = ((n - 1) - 1) / 2; i >= 0; i--){
			adjustdown(arr, n, i);
		}
		//����Ȼ���������
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