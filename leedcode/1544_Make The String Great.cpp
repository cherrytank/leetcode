#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string makeGood(string s) {
        int index=0;
        while (s[index+1] != '\0'){
            if(abs((int)s[index]-(int)s[index+1])==32){
                s.erase(index,2);
                index=0;
                continue;
            }
            index++;
        }
        return s;
    }
};

int main()
{
    Solution so;
    cout<<so.makeGood("abBAcCe")<<endl;
    system("pause");
}


