class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1=num1.size()-1,end2=num2.size()-1;
        int next=0;
        string retstr;
        while(end1>=0||end2>=0){
            int val1=0,val2=0;
            if(end1>=0){
                val1=num1[end1]-'0';
            }
            if(end2>=0){
                val2=num2[end2]-'0';
            }
            int ret=val1+val2+next;
            if(ret>9){
                next=1;
                ret-=10;
            }
            else{
                next=0;
            }
            //retstr.insert(retstr.begin(),ret+'0');-头插
            retstr+=(ret+'0');
            end1--;
            end2--;
        }
        if(next==1){
            //retstr.insert(retstr.begin(),'1');-头插
            retstr+='1';
        }
        reverse(retstr.begin(),retstr.end());
        return retstr;
    }
};

class Solution {
public:
    bool isnumberorletter(char ch){
        if((ch>='0'&&ch<='9')||(ch>='a'&&ch<='z')){
            return true;
        }
        else{
            return false;
        }
    }
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        for(auto&ch:s){
            if(ch>='A'&&ch<='Z'){
                ch+=32;
            }
        }
        int begin=0,end=s.size()-1;
        while(begin<end){
            while(begin<end&&!isnumberorletter(s[begin])){
                begin++;
            }
            while(begin<end&&!isnumberorletter(s[end])){
                end--;
            }
            if(s[begin]!=s[end]){
                return false;
            }
            begin++;
            end--;
        }
        return true;
    }
};


class Solution {
public:
    //解题思路
    //
    bool judge(string str) {
        int left=0;
        int right=str.size()-1;
        while(left<right){
            if(str[left]!=str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};