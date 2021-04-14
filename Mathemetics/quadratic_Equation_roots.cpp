3. Quadratic Equation Roots 

Given a quadratic equation in the form ax2 + bx + c. Find its roots.

Example 1:

Input:
a = 1
b = -2
c = 1
Output: 1 1

Explanation:
Roots of equation x2-2x+1 are 1 and 1.

Example 2:

Input:
a = 1
b = -7
c = 12
Output: 4 3

Explanation: Roots of equation 
x2 - 7x + 12 are 4 and 3.

Solution:

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int> roots;
        int root1 = 0, root2 = 0;
        // value of b^2-4ac
        int temp = (pow(b, 2) - 4 * a * c);

        // if b^2-4ac is less then zero then roots are imaginary
        if (temp < 0)
            roots.push_back(-1);
        else {
            // calculate root1 and root2 using fomula 
            // floor function returns greatest integer below ( -b + sqrt(temp) )
            // sqrt function returns square root of temp
            root1 = floor((-b + sqrt(temp)) / (2 * a));
            root2 = floor((-b - sqrt(temp)) / (2 * a));
            // store both roots calculated in vector
            // max function returns greater value between root1 and root2
            // min function returns smaller value between root1 and root2
            roots.push_back(max(root1, root2));
            roots.push_back(min(root1, root2));
        }
        return roots;
    }
};