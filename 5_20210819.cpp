class LRUCache {
public:
    LRUCache(int capacity)
    :_size(0),
    _capacity(capacity)
    {}
    
    int get(int key) {
        //找的时候在哈希表中，若存在就更改在list的位置，更改哈希表的迭代器值
        if(um.find(key) != um.end())
        {
            //这里现在list后面插入后再删除，防止迭代器失效
            list<pair<int,int>>::iterator it =  um[key];  
            int value = it->second;
            lt.push_back(make_pair(it->first,it->second));
            lt.erase(it);//erase 可以给一个迭代器的位置iterator erase (iterator position);
            //更新之后对应的key的迭代器就是再最后一个位置
            um[key] =  (--lt.end());
            return value;
        }
        else
        {
            return -1;//找不到
        }
    }
    
    void put(int key, int value) {
        //若改变了list的迭代器位置还要更新哈希表中的迭代器值,若已经存在的会在get的逻辑中处理好，只需要将list的value更新
        int ret = get(key);
        if(ret != -1)
        {
        //表示已经在list中有了，我们要把这个放在list的最后，并且更新list的value就可以了
        um[key]->second = value;
        }
        else
        {
            //表示没有找到   
            //要考虑是否容量是否有满
            if(_size >=_capacity)
            {
                //list中删除最久未使用的，并且在哈希表中删除这个值
                um.erase((lt.front()).first);//删除掉list第一个位置的迭代器
                //再将list位置的第一个位置删除
                lt.pop_front();              
            }
            //list当中放入新的值，并且在哈希表中也放入list的映射
            lt.push_back(make_pair(key,value));
            um[key] = (--lt.end());
            ++_size;
        }
    }
private:
    int _size;//链表当前大小
    int _capacity;//链表最大容量
    list<pair<int,int>> lt;//链表 
    unordered_map<int,list<pair<int,int>>::iterator> um;//哈希表
};



class Solution {
public:
    //输入一个二维数组和k
    //二维数组每一维有2个或者3个数字，第一个数字为opt，第2,3个数字为key,value
    vector<int> LRU(vector<vector<int> >& operators, int k) {
        vector<int>v;
        if(operators.empty()){
            return v;
        }
        for(auto&opt:operators){
            //若opt=1,接下来两个key,value，表示set(key,value)
            if(opt[0]==1){
                set(opt[1],opt[2],k);
            //若opt=2，接下来一个整数key，表示get(key)
            //若key未出现过或者已被移除，则返回-1
            //对于每个pot=2，输出一个答案
            }else if(opt[0]==2){
                get(opt[1],v);
            }
        }
        return v;
    }
private:
    //键值对的查询，首选map，又因为本题中map只是用来查询，不涉及排序，所以采用unordered_map
    //维护最近使用元素，涉及入队和出队的概念，但因为queue只能操作头部和尾部元素，所以不适用
    //而list既满足了队头队头元素的操作，也可以对中间元素进行删除操作，所以选用list
    //list中只需要维护map中的键值key
    unordered_map<int,int>map;
    list<int>list;
    //某个key的set或者get操作一旦发生，认为这个key的记录成了最常使用的，然后都会刷新缓存
    //void set(){}
    //将记录(key,value)插入该结构
    //当缓存的大小超过k时，移除最不常使用的记录
    void set(int key,int value,int k){
        if(list.size()==k){
            int delkey=list.back();
            list.pop_back();
            map.erase(delkey);
        }
        map[key]=value;
        list.push_front(key);
    }
    //int get(){}
    //返回key对应的value值
    //若key未出现过或者已被移除，则返回-1
    //对于每个pot=2，输出一个答案
    void get(int key,vector<int>&v){
        auto it=map.find(key);
        if(it==map.end()){
            v.push_back(-1);
        }else{
            v.push_back(it->second);
            list.remove(it->first);
            list.push_front(it->first);
        }
    }
};