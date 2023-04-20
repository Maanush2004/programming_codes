/** Write a function power(X,N) that will allow a floating-point number to be raised to an integer power. Y=X^N
  * In other words, evaluate the formula where y and x are floting-point variables and n is an integer variable.
  * Write a C program that will read in numerical values for x and n, evaluate the formula using power(X,N), and
  * then display the calculated result. Test the program using the following data :
  *    x    n    x    n
  *    2    3   1.5   3
  *    2   12   1.5  10
  *    2   -5   1.5  -5
  *   -3    3   0.2   3
  *   -3    7   0.2   5
  *   -3   -5   0.2  -5 **/

// Function to raise a float pointing number to an integer power
float power(float x, int n) {
    // If the power n is negative then it means that 1/x is raised to positive n
    if (n < 0) {
        x = 1/x;
        n = abs(n);
    }
    // Base condition : Until the power n > 0
    if (n > 0) {
        return x*power(x,n-1);
    } else {
        return 1;
    }
}
