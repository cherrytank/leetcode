#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
        bool isPalindrome(int x){
            int y=x;
            string rint;
            if(x<0)
                return false;
            else if(x>=0 && x<10)
                return true;
            while (y>0){
                rint.append(to_string(y%10));
                y /= 10;
            }
            if(to_string(x)==rint)
                return true;
            else
                return false;
        }
};
int main(){
    Solution so;
    cout<<so.isPalindrome(1234567890000)<<endl;
}