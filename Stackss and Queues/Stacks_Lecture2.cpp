// Valid Parenthesis


#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "()[(){}]";
    stack<char>st;
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                cout<<"False";
                return 0;
            }
            char ch = st.top();
            st.pop();
            if((s[i] == ')' && ch == '('  ) || (s[i] == ']' && ch == '[') || s[i] == '}' && ch == '{'){
                continue;
            }   
            else{
                cout<<"False";
                return 0;
            }
        }
    }
    if(st.empty()){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}