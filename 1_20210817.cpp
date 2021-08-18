//解题思路
//动态规划
//子串-必须连续
class Solution {
public:
    string LCS(string str1, string str2) {
        int len1=str1.size();
        int len2=str2.size();
        int dp[len1+1][len2+1];
        int maxlen=0;
        int end=0;
        for(int i=0;i<=len1;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=len2;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=len1;i++){
            for(int j=1;j<=len2;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }else{
                    dp[i][j]=0;
                }
                if(dp[i][j]>maxlen){
                    maxlen=dp[i][j];
                    end=j-1;
                }
            }
        }
        string str;
        if(maxlen==0){
            return "-1";
        }else{
            str=str2.substr(end-maxlen+1,maxlen);
        }
        return str;
    }
};


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].length();++i){
            for(int j=1;j<strs.size();++j){
                if(i>=strs[j].length() || strs[j][i] != strs[j-1][i]){
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        return ans;
    }
};

