#include<iostream>
#include<string>
using namespace std;

class Solution{
public:
    string removeDuplicates(string s){
        string result;
        int index=0;
        while (index < (int)s.size()){
            if(s[index]==result.back())
                result.pop_back();
            else
                result.push_back(s[index]);
            index++;
        }
        return result;
    }
};

int main(){
    Solution so;
    cout<<so.removeDuplicates("azxxzy")<<endl;
    system("pause");
}


