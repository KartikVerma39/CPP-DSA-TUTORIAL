// ^ -- Priority 3
// * / -- Priority 2
// + - -- Priority 1
// Other Priority - 1



// InFix To PostFix


// #include<iostream>
// #include<stack>
// using namespace std;
// int Priority(char op){
//     if(op == '^'){
//         return 3;
//     }
//     else if(op == '*' || op == '/'){
//         return 2;
//     }
//     else if(op == '+' || op == '-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// string PostfixToInfix(string t){
//     string ans = "";
//     stack<char>st;
//     for(int i = 0; i<t.size() ; i++){
//         if((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= '0' && t[i] <= '9') || (t[i] >= 'A' && t[i] <= 'Z')){
//             ans += t[i];
//         }
//         else if(t[i] == '('){
//             st.push(t[i]);
//         }
//         else if(t[i] == ')'){
//             while(st.top() != '(' && !st.empty()) {
//                 ans += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else{
//             while(!st.empty() && Priority(t[i]) < Priority(st.top())){
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(t[i]);
//         }
//     }
//     while(!st.empty()){
//         ans = ans + st.top();
//         st.pop();
//     }
//     return ans;
// }
// int main(){
//     string s = "A^B^C";
//     cout<<PostfixToInfix(s);
// }




// Infix To PostFix


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int Priority(char ch){
//     if(ch == '^'){
//         return 3;
//     }
//     else if(ch == '*' || ch == '/'){
//         return 2;
//     }
//     else if(ch == '+' || ch == '-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }

// string infixToPostfix(string s){
//     reverse(s.begin() , s.end());
//     stack<char>st;
//     string ans = "";
//     for(int i = 0 ; i<s.size() ; i++){
//         if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <='9') || (s[i] >= 'A' && s[i] <= 'Z')){
//             ans+=s[i];
//         }
//         else if(s[i] == ')'){
//             st.push(s[i]);
//         }
//         else if(s[i] == '(' && !st.empty()){
//             while(st.top() != ')' && !st.empty()) {
//                 ans += st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else{
//             while(!st.empty() && (s[i] != '^' && (Priority(s[i]) < Priority(st.top())) || (s[i] == '^' && Priority(s[i]) < Priority(st.top())))){
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         ans = ans + st.top();
//         st.pop();
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }
// int main(){
//     string s = "F+D-C*(B+A)";
//     cout<<infixToPostfix(s);
// }


