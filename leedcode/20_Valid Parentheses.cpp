#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution{
    public:
    bool isValid(string s) {
        stack<char>st;
        for(auto c:s){
            switch(c){
                case '(': 
                case '{': 
                case '[': 
                    st.push(c); 
                    break;
                case ')':
                    if(st.empty() || st.top()!='(')
                        return false; 
                    else
                        st.pop();
                    break;
                case '}':
                    if(st.empty() || st.top()!='{')
                        return false; 
                    else
                        st.pop(); 
                    break;
                case ']': 
                    if(st.empty() || st.top()!='[')
                        return false; 
                    else
                        st.pop();
                    break;
            }
        }
        return st.empty();
    }
};


int main(){
    string s = "()[]{}";
    Solution so;
    cout<<so.isValid(s)<<endl;
}