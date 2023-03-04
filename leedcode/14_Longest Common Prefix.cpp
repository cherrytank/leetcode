#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution{
    public:
        string longestCommonPrefix(vector<string> strs){
            string comp = strs[0];
            for(int i =1;i<strs.size();i++){
                for(int j=0;j<comp.size();j++){  
                    if(comp[j] != strs[i][j]){
                        for (int x = j--; x <comp.size() ; x++){
                            comp.pop_back();
                        }             
                    }
                }
            }
            if(comp.empty())
                return "";
            else
                return comp;
        }
};

int main(){
    vector<string> st = {"abab","aba","a"};
    Solution so;
    cout<<so.longestCommonPrefix(st)<<endl;
}