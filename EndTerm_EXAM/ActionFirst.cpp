

// // Q6. The Action-First Math Processor:


// // You are programming a new type of calculator for a strict professor. This professor believes that you should always state the Action (Operator) before you state the Numbers (Operands).

// // In normal math, we say: 2+3

// // In this professor's "Action-First" notation (Prefix), we say: + 2 3 (which means "Add 2 and 3")

// // The expressions can get complicated. For example, the string * + 1 2 4 means:

// // --First, resolve + 1 2 (which is 3).

// // --Then, use that result with the multiplication: * 3 4.

// // --The final answer is 12.

// // Your task is to write a program that reads these "Action-First" expressions and calculates the single final result.

// // Hint for Students:

// // To solve this easily using a Stack, try reading the expression backwards (from right to left).

// // --If you see a Number, push it into the stack.
// // --If you see an Operator, pop the top two numbers, do the math, and push the result back.

// // Complete the evalPrefix() function and return the final output.


// // Input Format:

// // --The first line of input contains an integer T denoting the number of test cases.
// // --The next T lines contain a "Action-First" expressions(prefix expressions).
// // --An expression form will consist of all digits and following five operators: +, -, *, /, ^

// // Output Format:

// // --Print the final output of prefix expression evaluation in new line for each test case.


// // Sample Input:

// // 1
// // +-*235/^234

// // Sample Output

// // 3



// // Solution approach:


// // --The professor uses Prefix notation (Action-First):

// // Prefix means:

// // --Operator appears before the numbers.

// // --Expression is read from right to left when evaluating.


// // Use a stack and scan from right to left.

// // Rule 1: If you find a number → push into stack
// // Rule 2: If you find an operator →

// // --Pop top 2 numbers

// // --Apply the operation

// // --Push result back

// // --In the end → stack top = final answer




// /*
// int Stack[SIZE], top=-1;
// int isFull();
// int isEmpty();
// int push(int item);
// int pop();
// Above variables are used for Stack, SIZE and top and all are global variables. Also above push and pop functions are provided. */
// int PrefixEvaluator::evalPrefix(char* exp){
// //write your programe here
//     for(int i = strlen(exp) - 1 ; i >= 0 ; i--){
//         if(isdigit(exp[i])){
//             push(exp[i] - '0');
//         }
//         else{
//             int a = pop();
//             int b = pop();
//             if(exp[i] == '+'){
//                 push(a+b);
//             }
//             else if(exp[i] == '-'){
//                 push(a-b);
//             }
//             else if(exp[i] == '*'){
//                 push(a*b);
//             }
//             else if(exp[i] == '/'){
//                 push(a/b);
//             }
//             else if(exp[i] == '^'){
//                 push(pow(a,b));
//             }
//         }
//     }
//     return pop();
// }