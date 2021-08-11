class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashtable;
        for (int i = 0; i < nums.size(); ++i) {
            auto it = hashtable.find(target - nums[i]);
            if (it != hashtable.end()) {
                return {it->second, i};
            }
            hashtable[nums[i]] = i;
        }
        return {};
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        unordered_map<int,int>hash;//存储numbers[i]和对应下标
        //进行标记
        for(int i=0;i<numbers.size();i++){
            hash[numbers[i]]=i;
        }
        //每遍历一个numbers[i]就去对应hash找有没有对应target-numbers[i]
        //有就return
        //没有就继续遍历
        for(int i=0;i<numbers.size();i++){
            if(hash.find(target-numbers[i])!=hash.end()&&i!=hash[target-numbers[i]]){
                v.push_back(i+1);
                v.push_back(hash[target-numbers[i]]+1);
                return v;
            }
        }
        return v;
    }
};


//[3,2,4],6
//返回这两个数字的下标（index1,index2）需要满足index1小于index2
//下标从1开始
//唯一解
//[2,3]
class Solution {
public:
    //解题思路
    //哈希
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            auto it=hash.find(target-nums[i]);
            if(it!=hash.end()){
                return {it->second+1,i+1};
            }
            hash[nums[i]]=i;
        }
        return {};
    }
};



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //1.合并后排序
        // for(int i=0;i<n;i++){
        //     nums1[m+i]=nums2[i];
        // }
        // sort(nums1.begin(),nums1.end());
        
        //2.双指针遍历
        // int i1=0,i2=0,i3=0;
        // vector<int>nums3(m+n);
        // while(i1<m||i2<n){
            if(i1==m){
                nums3[i3++]=nums2[i2++];
            }
            else if(i2==n){
                nums3[i3++]=nums1[i1++];
            }
            else if(nums1[i1]<nums2[i2]){
                nums3[i3++]=nums1[i1++];
            }
            else{
                nums3[i3++]=nums2[i2++];
            }
        // }
        // for(int i=0;i<m+n;i++){
        //     nums1[i]=nums3[i];
        // }


                while(i1<m&&i2<n){
            if(A[i1]<B[i2]){
                v[i++]=A[i1++];
            }else{
                v[i++]=B[i2++];
            }
        }
        while(i1<m){
            v[i++]=A[i1++];
        }
        while(i2<n){
            v[i++]=B[i2++];
        }



        

class Solution {
public:
    stack<int>st1;//数据栈
    stack<int>st2;//辅助栈
    void push(int value) {
        st1.push(value);
        if(st2.empty()||value<=st2.top()){
            st2.push(value);
        }
    }
    void pop() {
        if(st2.top()==st1.top()){
            st2.pop();
        }
        st1.pop();
    }
    int top() {
        return st1.top();
    }
    int min() {
        return st2.top();
    }
};

//递归解法
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        int leftdepth=maxDepth(root->left);
        int rightdepth=maxDepth(root->right);
        return leftdepth>rightdepth?leftdepth+1:rightdepth+1;
    }
};

