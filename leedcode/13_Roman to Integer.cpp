#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution{
    public:
        int romanToInt(string s){
            int result = 0;
            int index = 0;
            unordered_map<char,int> map{
                {'I',1},
                {'V',5},
                {'X',10},
                {'L',50},
                {'C',100},
                {'D',500},
                {'M',1000},
            };
            while(s[index] != '\0'){
                if(map[s[index]]<map[s[index+1]])
                    result -= map[s[index]];
                else
                    result +=map[s[index]];
                index++;
            }
            return result;
        }
};

int main(){
    Solution so ;
    cout<< so.romanToInt("MCMXCIV");
}