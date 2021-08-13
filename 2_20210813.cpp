class Solution {
public:
    string replaceSpace(string s) {
        if(s.empty()){
            return "";
        }
        //1.用count统计空格个数
        int count=0;
        for(auto ch:s){
            if(ch==' '){
                count++;
            }
        }
        //2.为s重新开空间
        int length=s.size();
        s.resize(length+count*2);
        //3.开始替换
        //i指向源字符串末尾，j指向resize后字符串末尾
        //循环控制条件为i<j.当i==j，说明空格已经全部替换完了，跳出循环
        for(int i=length-1,j=s.size()-1;i<j;i--,j--){
            if(s[i]!=' '){
                s[j]=s[i];
            }else{
                s[j-2]='%';
                s[j-1]='2';
                s[j]='0';
                //循环控制条件本身包含j--,所以只需要j-=2;
                j-=2;
            }
        }
        return s;
    }
};



//解题思路
//在原字符串上修改
//1.统计空格个数count
//2.为字符串resize重新开空间
//3.从后往前替换-双指针控制
//初始条件i指向源字符串末尾-j指向新字符串末尾
//%20
class Solution {
public:
    string replaceSpace(string s) {
        //处理空
        if(s.empty()){
            return "";
        }
        //统计空格个数
        int count=0;
        for(auto ch:s){
            if(ch==' '){
                count++;
            }
        }
        //重新开空间
        int oldlen=s.size();
        s.resize(oldlen+2*count);
        int newlen=s.size();
        //当i==j说明空格全部替换完毕-循环控制条件i<j
        for(int i=oldlen-1,j=newlen-1;i<j;i--,j--){
            if(s[i]!=' '){
                s[j]=s[i];
            }else{
                s[j-2]='%';
                s[j-1]='2';
                s[j]='0';
                j-=2;//循环控制条件已经减1了
            }
        }
        return s;
    }
};



class Solution {
public:
    //先翻转整个字符串
    //再用双指针逐个翻转每个单词
    string ReverseSentence(string str) {
        //先翻转整个字符串
        reverse(str.begin(),str.end());
        //再用双指针逐个翻转每个单词
        //单词之间以空格间隔
        auto left=str.begin();
        while(left!=str.end()){
            auto right=left;
            //迭代器底层是指针，需要解引用
            while(right!=str.end()&&*right!=' '){
                right++;
            }
            reverse(left,right);
            //迭代
            if(right!=str.end()){
                left=right+1;
            }else{
                left=right;
            }
        }
        return str;
    }
};



class Solution {
public:
    int StrToInt(string str) {
        if(str.empty()){
            return 0;
        }
        int flag=1;
        if(str[0]=='-'){
            flag=-1;
            str[0]='0';
        }
        if(str[0]=='+'){
            flag=1;
            str[0]='0';
        }
        int sum=0;
        for(int i=0;i<str.size();i++){
            if(str[i]<'0'||str[i]>'9'){
                sum=0;
                break;
            }
            sum=sum*10+str[i]-'0';
        }
        return flag*sum;
    }
};