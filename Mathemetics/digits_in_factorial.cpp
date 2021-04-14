Digits In Factorial 

Given an integer N. Find the number of digits that appear in its factorial. 
Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
 

Example 1:

Input: N = 5
Output: 3

Explanation: Factorial of 5 is 120.
Number of digits in 120 is 3 (1, 2, and 0)
 

Example 2:

Input: N = 120
Output: 199

Explanation: The number of digits in
120! is 199

Solution:

class Solution{
    public:
    int digitsInFactorial(int n)
    {
        // factorial exists only for n>=0
    if (n < 0)
        return 0;
 
    // base case
    if (n <= 1)
        return 1;
 
    // else iterate through n and calculate the
    // value
    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
 
    return floor(digits) + 1;
}