//解题思路
//1.用nums前k个元素建k个数的大堆-priority_queue默认建大堆
//2.用nums剩下的元素依次和堆顶元素比较
//如果比堆顶元素小则交换-先弹出再压入
//3.将q中的元素放到vector中返回
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int>nums, int k) {
        vector<int>v;
        //防止段错误
        if(k==0){
            return v;
        }
        priority_queue<int>q;
        //用nums前k个元素建k个数的大堆-priority_queue默认建大堆
        for(int i=0;i<k;i++){
            q.push(nums[i]);
        }
        //用nums剩下的元素依次和堆顶元素比较
        //如果比堆顶元素小则交换-先弹出再压入
        for(int i=k;i<nums.size();i++){
            if(nums[i]<q.top()){
                q.pop();
                q.push(nums[i]);
            }
        }
        //将q中的元素放到vector中返回
        for(int i=0;i<k;i++){
            v.push_back(q.top());
            q.pop();
        }
        return v;
    }
};


#include<iostream>
#include<mutex>
using namespace std;
template<class T>
class Singleton{
private:
    volatile static T* data;//静态资源默认初始化为0-会直接放到寄存器中去-加volatile修饰
    static mutex _mutex;//定义个互斥锁-加锁保证线程安全
public:
    T* getInstance(){
        if(data==nullptr){//double check减少锁冲突提高效率
            _mutex.lock();//加锁-可能存在锁冲突-二次检测
            if(data==nullptr){
                data=new T()//使用时再去加载资源
            }
            _mutex.unlock();//解锁
         }
        return data;
    }
}
#include<iostream>
#include<mutex>
using namespace std;
template<class T>
class Singleton{
private:
    volatile static T*data;
    static mutex _mutex;
public:
    T*getInstance{
        if(data==nullptr){
            _mutex.lock();
            if(data==nullptr){
                data=new T();
            }
            _mutex.unlock();
        }
        return data;
    }
}