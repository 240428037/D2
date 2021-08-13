void* my_memcpy(void* dest, void* src, size_t num)

{

        void* ret = dest;

        assert(dest != NULL);

        assert(src != NULL);

        while (num--)

        {

               *(char*)dest = *(char*)src;

               ++(char*)dest;

               ++(char*)src;

        }

        return ret;

}

void*memcpy(void*dest,const void*src,size_t num){
    void*ret=dest;
    assert(dest!=nullptr);
    assert(src!=nullptr);
    while(num--){
        *(char*)dest=*(char*)src;
        dest=(char*)dest+1;
        src=(char*)src+1;
    }
    return ret;
}


void* my_memmove(void* dest, const void* src, size_t num)

{

        void* ret = dest;

        assert(dest != NULL);

        assert(src != NULL);

        if (dest<src)

        {

               //前->后

               while (num--)

               {

                       *(char*)dest = *(char*)src;

                       ++(char*)dest;

                       ++(char*)src;

               }

        }

        else

        {

               //后->前

               while (num--)

               {

                       *((char*)dest + num) = *((char*)src + num);

               }

        }

        return ret;

}

void*memmove(void*dest,const void* src,size_t num){
    void*ret=dest;
    //dest<src
    //从前向后拷贝
    if(dest<src){
        while(num--){
            *(char*)dest=*(char*)src;
            dest=(char*)dest+1;
            src=(char*)src+1;
        }
    //src<dest<src+count
    //src<dest
    //从后向前拷贝
    }else{
        while(num--){
            *((char*)dest+num)=*((char*)src+num);
        }
    }
    return ret;
}


class Singleton{
private:
    //static修饰-资源只有一份
    static int data;
public:
    //向外提供一个统一接口
    int* getInstance(){
        return &data;
    }
}


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
            _mutex.lock();//加锁-可能存在锁冲突
            if(data==nullptr){
                data=new T()//使用时再去加载资源
            }
            _mutex.unlock();//解锁
        }
        return data;
    }
}