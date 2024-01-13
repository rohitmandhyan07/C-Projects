/*Problem: https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
Problem statement
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

"Indexing is start from 1"


Example :
Input: 6

Output: 8

Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6


Sample Output 1:
8


Explanation of sample input 1 :
The number is ‘6’ so we have to find the “6th” Fibonacci number.
So by using the given formula of the Fibonacci series, we get the series:    
[ 1, 1, 2, 3, 5, 8, 13, 21]
So the “6th” element is “8” hence we get the output.


Expected time complexity :
The expected time complexity is O(n).


Constraints:
1 <= 'n' <= 10000     
Where ‘n’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second
*/

//Solution
#include<bits/stdc++.h>
using namespace std;

int Fibonacci(int n){//Let's make a recursive function
   if(n==1 || n==0 ) return 1;
   else{
           return(Fibonacci(n-1)+Fibonacci(n-2));
   }
}
//Testing 
/*
1 1
2 Fib(1)+Fib(0) Fib(0) will call else, so let's go on to for defining the 
result for n==0 also.
now 
2 1+1 but fibonacci  2 should be 1; 
so let's change the function call to Fibonacci(n-1), i.e if user input n=2; the 
function will call Fibonacci(1) and will give output 1.
If Fibonacci(1) is called it will output Fibonacci(0) which is 0
3 will call Fib(2) = Fib(1)+Fib(0) = 1+1 =2
4 will call Fib(3) = Fib(2)+Fib(1) = 2+1 =3
and so on it will give the correct output.
*/
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        cout<<Fibonacci(n-1);
}
/*When you have an assignment operator in a statement, the LHS of the operator must be something the language calls an lvalue. If the LHS of the operator does not evaluate to an lvalue, the value from the RHS cannot be assigned to the LHS.

You cannot use:

10 = 20;
since 10 does not evaluate to an lvalue.

You can use:

int i;
i = 20;
since i does evaluate to an lvalue.

You cannot use:

int i;
i + 1 = 20;
since i + 1 does not evaluate to an lvalue.

In your case, p + 1 does not evaluate to an lavalue. Hence, you cannot use

p + 1 = p;
*/
