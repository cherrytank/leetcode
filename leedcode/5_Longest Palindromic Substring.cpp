#include<iostream>

using namespace std;


class Solution{
    public:
    string longestPalindrome(string s) {
        const int n = s.length();
        auto getlen = [&](int l,int r){
            while (l >=0 && r < n && s[l] == s[r]){
                --l;
                ++r;
            }
            return r-l-1;
        };
        int len = 0;
        int start = 0;
        for(int i = 0;i<n;i++){
            int cur = max(getlen(i,i),getlen(i,i+1));
            if(cur > len){
                len = cur;
                start = i- (len-1)/2;
            }
        }
        return s.substr(start,len);
    }
};


int main(){
    Solution so = Solution();
    cout<<so.longestPalindrome("babad")<<endl;
    
}
