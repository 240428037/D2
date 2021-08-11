class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // 水平翻转
        for (int i = 0; i < n / 2; ++i) {
            for (int j = 0; j < n; ++j) {
                swap(matrix[i][j], matrix[n - i - 1][j]);
            }
        }
        // 主对角线翻转
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        if(matrix.size()==0||matrix[0].size()==0){
            return {};
        }
        vector<int>v;
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0,right=col-1;
        int up=0,down=row-1;
        while(1){
            //从左到右
            for(int i=left;i<=right;i++){
                v.push_back(matrix[up][i]);
            }
            up++;
            if(up>down){
                break;
            }
            //从上到下
            for(int i=up;i<=down;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            if(left>right){
                break;
            }
            //从右到左
            for(int i=right;i>=left;i--){
                v.push_back(matrix[down][i]);
            }
            down--;
            if(up>down){
                break;
            }
            //从下到上
            for(int i=down;i>=up;i--){
                v.push_back(matrix[i][left]);
            }
            left++;
            if(left>right){
                break;
            }
        }
        return v;
    }
};

class Printer {
public:
vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
vector<int> ret;
int x1 = 0, y1 = 0; //左上角坐标
int x2 = n-1, y2 = m-1; //右下角坐标
// 这两个坐标表示了一个矩形(最开始的矩阵)
// 然后按照要求打印最外圈的数据.
// 打印完毕之后, 缩小矩形的大小.
while(x1 <= x2 && y1 <= y2){
for(int j = y1; j <= y2; ++j)
ret.push_back(mat[x1][j]);
for(int i = x1+1; i < x2; ++i)
ret.push_back(mat[i][y2]);
for(int j = y2; x1 < x2 && j >= y1; --j) //x1 < x2：只有在不是单一的横行时才执行这个循环
ret.push_back(mat[x2][j]);
for(int i = x2-1; y1 < y2 && i > x1; --i)//y1 < y2：只有在不是单一的竖列时才执行这个循环
ret.push_back(mat[i][y1]);
x1++; y1++;
x2--; y2--;
}
return ret;
}
};




//螺旋矩阵-顺时针打印矩阵
//顺时针旋转矩阵
class Solution {
public:
    //解题思路
    //左上角坐标(0,0)
    //右下标坐标(row-1,col-1)
    //先顺时针打印这个矩阵边上的元素
    //缩小矩阵
    //再次顺时针打印一直缩小到矩阵为空
    vector<int> spiralOrder(vector<vector<int> > &mat) {
        vector<int>v;
        int row=mat.size();
        int col=mat[0].size();
        int x1=0;
        int y1=0;
        int x2=row-1;
        int y2=col-1;
        //控制条件<=
        while(x1<=x2&&y1<=y2){
            //从左往右
            for(int j=y1;j<=y2;j++){
                v.push_back(mat[x1][j]);
            }
            //从上往下-上面是<=这里就是<-不然会重复打印
            for(int i=x1+1;i<x2;i++){
                v.push_back(mat[i][y2]);
            }
            //从右往左
            for(int j=y2;j>=y1&&x1<x2;j--){
                v.push_back(mat[x2][j]);
            }
            //从下往上-上面是>=这里就是>
            for(int i=x2-1;i>x1&&y1<y2;i--){
                v.push_back(mat[i][y1]);
            }
            x1++;
            x2--;
            y1++;
            y2--;
        }
        return v;
    }
};


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int result=nums[0];
        int times=1;
        for(int i=1;i<nums.size();i++){
            if(times==0){
                result=nums[i];
                times=1;
            }else{
                if(result==nums[i]){
                    times++;
                }else{
                    times--;
                }
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(result==nums[i]){
                count++;
            }
        }
        return count>nums.size()/2?result:0;
    }
};



class Solution {
public:
    //解题思路
    //众数非众数
    int MoreThanHalfNum_Solution(vector<int> nums) {
        if(nums.empty()){
            return 0;
        }
        int result=nums[0];
        int times=1;
        //如果两个不相等就消去这两个数
        //如果存在众数最后剩下的数肯定是众数
        //i从1开始!!!
        for(int i=1;i<nums.size();i++){
            if(times==0){
                result=nums[i];
                times=1;
            }else{
                if(result==nums[i]){
                    times++;
                }else{
                    times--;
                }
            }
        }
        //判断result是不是众数
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(result==nums[i]){
                count++;
            }
        }
        return count>nums.size()/2?result:0;
    }
};