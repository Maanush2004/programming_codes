/** Write a recursive function that reads N and printfs from N to 0.
  *  Input	Output
  *   10      9876543210 **/

// Function to print number from n to 0
void descending(int n) {
	// Print n-1 as n is excluded
	printf("%d",n-1);
	// Continue printing until n is 1 where it prints 0.
	if (n > 1 ) {
		descending(n-1);
	}
}
