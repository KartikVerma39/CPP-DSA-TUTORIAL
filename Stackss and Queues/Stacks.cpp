// Postfix Evaluation


// #include<iostream>
// #include<stack>
// #include<bits/stdc++.h>
// using namespace std;
// int PostFixEvaluation(string s){
//     stack<int>st;
//     for(int i = 0 ; i<s.size() ; i++){
//         char ch = s[i];
//         if(isdigit(ch)){
//             st.push(s[i] - '0');
//         }
//         else{
//             int op2 = st.top();
//             st.pop();
//             int op1 = st.top();
//             st.pop();

//             if(s[i] == '+'){
//                 st.push(op1+op2);
//             }
//             else if(s[i] == '-'){
//                 st.push(op1-op2);
                
//             }
//             else if(s[i] == '*'){
//                 st.push(op1*op2);
                
//             }
//             else if(s[i] == '/'){
//                 st.push(op1/op2);
                
//             }
//             else if(s[i] == '^'){
//                 st.push(pow(op1,op2));
//             }
//         }s
//     }
//     return st.top();
// }
// int main(){
//     string s = "8425+-*";
//     cout<<PostFixEvaluation(s);
// }