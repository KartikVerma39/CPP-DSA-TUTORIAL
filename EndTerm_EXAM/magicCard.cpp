
// Q4. The Magic Card Game:


// You are playing a single-player math card game. You have a deck of cards that contains Number Cards (0-9) and Action Cards (mathematical symbols +, -, *, /, ^).

// You draw cards one by one and place them face-up on a single pile on the table.

// --If you draw a Number Card: You simply place it on top of the pile.

// --If you draw an Action Card: You must pick up the top two cards from the pile, perform the math operation on them, write the result on a blank card, and
// place that new card back on top of the pile.

// --Given the sequence of cards you draw, calculate the value of the single card remaining on the table at the end of the game.


// Input Format :

// --First line contains T(number of games played).
// --The next T lines each contain the sequence of cards drawn in postfix expression.


// Output Format :

// --Print the value of the final card on the pile for each game.


// Sample Input :
// 2 // Testcases
// 8425+-*
// 546+*493/+*

// Sample Output :
// -24
// 350

// Explanation :

// Testcase 1 will be evaluated as:

// 8 * (4 - (2 + 5)) = -24

// Testcase 2 will be evaluated as:

// (5 * (4 + 6)) * (4 + (9 / 3)) = 350



/* int pop(), void push(int j) already defined in stack */

// int evalPostfix(CQStack *stack, string exp) {
//   // Write your code here
//     CQStack st(exp.size());
//     for(auto it:exp){
//         if(isdigit(it)){
//             st.push(it-'0');
//         }
//         else{
//             int b = st.pop();
//             int a = st.pop();
//             if(it == '+'){
//                 st.push(a + b);
//             }
//             else if(it == '-'){
//                 st.push(a - b);
//             }
//             else if(it == '*'){
//                 st.push(a*b);
//             }
//             else if(it == '/'){
//                 st.push(a/b);
//             }
//             else if(it == '^'){
//                 st.push(pow(a,b));
//             }
//         }
//     }
//     return st.pop();
    
// }