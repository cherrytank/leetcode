#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution{
    public:
        int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        vector<int> hash(128,-1);
        for(int i=0,j=-1;i<n;i++){
            if(hash[s[i]]>j){
                j = hash[s[i]];
            }
            hash[s[i]]=i;
            ans = max(ans,i-j);
        }
        return ans;
    }
};


int main(){
    string str = "abacc";
    Solution so;
    cout<<so.lengthOfLongestSubstring(str)<<endl;

}