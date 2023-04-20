/** Find the product of n floating point numbers. The numbers shold be read from the keyboard.
  * You should not use any looping construct.
  * [Hint: use recursion and decide a suitable sentinel for termination of recursion.] **/

// Function to find the product of N floating numbers
float float_product(int n) {
    /** Only take input and further call the function when n > 0.
      * This is the breaking condition. **/
    if (n > 0) {
    	float num;
    	scanf("%f", &num);
    	return num * float_product(n-1);
    } else {
        return 1; // Returning 1 as multiplication with 1 doesn't change the product.
    }
}
