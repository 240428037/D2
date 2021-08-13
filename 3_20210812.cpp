class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1;
        int tail = m + n - 1;
        int cur;
        while (p1 >= 0 || p2 >= 0) {
            if (p1 == -1) {
                cur = nums2[p2--];
            } else if (p2 == -1) {
                cur = nums1[p1--];
            } else if (nums1[p1] > nums2[p2]) {
                cur = nums1[p1--];
            } else {
                cur = nums2[p2--];
            }
            nums1[tail--] = cur;
        }
    }
};

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = nums1.size() - 1;
    m--;
    n--;
    while (n >= 0) {
        while (m >= 0 && nums1[m] > nums2[n]) {
            swap(nums1[i--], nums1[m--]);
        }
        swap(nums1[i--], nums2[n--]);
    }
}
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, index = m + n - 1;
        while(i >= 0 && j >= 0)
        {
            if(nums1[i] > nums2[j]) nums1[index--] = nums1[i--];
            else                    nums1[index--] = nums2[j--];
        }
        while(j >= 0)  nums1[index--] = nums2[j--]; 
        //nums2正确排序到nums1中就算成功，不用在考虑nums1
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int pos = m-- + n-- - 1;
        while (m >= 0 && n >= 0) {
            nums1[pos--] = nums1[m] > nums2[n]? nums1[m--]: nums2[n--];
        }
        while (n >= 0) {
            nums1[pos--] = nums2[n--];
        }
    }
};


//解题思路
//不开辟额外空间逆序双指针
//456,123
//123456
//m-1-p1
//n-1-p2
//m+n-1-p1
//m+n-1-p1>m-1-p1+n-1-p2
//p2>1
//所以肯定不会覆盖
class Solution {
public:
    void merge(int nums1[], int m, int nums2[], int n) {
        int pos=m+n-1;
        m--;
        n--;
        while(m>=0&&n>=0){
            if(nums1[m]>nums2[n]){
                nums1[pos--]=nums1[m--];
            }else{
                nums1[pos--]=nums2[n--];
            }
        }
        while(n>=0){
            nums1[pos--]=nums2[n--];
        }
    }
};



//解题思路
//题目要求相对位置不变
//所以不能拿双指针去做-左右指针
//左右指针-左找偶数右找奇数-找到交换
//相对位置要求不变
//只能使用额外空间-开辟两个数组
class Solution {
public:
    vector<int> reOrderArray(vector<int>& nums) {
        vector<int>odd;//短的是奇数
        vector<int>even;//长的是偶数
        for(auto ch:nums){
            if(ch%2==1){
                odd.push_back(ch);
            }else{
                even.push_back(ch);
            }
        }
        //insert区间插入
//         odd.insert(odd.end(),even.begin(),even.end());
        //for循环插入√
        for(int i=0;i<even.size();i++){
            odd.push_back(even[i]);
        }
        return odd;
        
//         //左右指针
//         int left=0;
//         int right=nums.size()-1;
//         while(left<right){
//             if(left<right&&nums[left]%2==1){
//                 left++;
//             }
//             if(left<right&&nums[right]%2==0){
//                 right--;
//             }
//             swap(nums[left],nums[right]);
//         }
//         return nums;
    }
};