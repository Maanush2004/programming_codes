/** IPS 10-4-23 Q1
  * Pointers and Strings
  * Write a function in C to print all the Leaders in the array. An element is a leader if it is  greater than all the elements to its right side.
  * Special rule says that the rightmost element in the array is always a leader.
  * For example in the array [16, 17, 4, 3, 5, 2]. Leaders are 17, 5 and 2. **/

// Program to print leaders in given array
#include <stdio.h>

//Function to print leaders
void leaders_arr(int *arr, int n) {
    int leader;
    int leaders[n];
    int leader_index=0;
    // Finding if each element in array is greater than the elements after it and appending it to leaders array
    for (int i=0; i < n-1; i++) {
	leader = 1;
	for (int j=i+1; j < n; j++) {
	    if (*(arr+i) < *(arr+j)) {
		leader=0;
		break;
	    }
	}
	if (leader==1) {
	    leaders[leader_index++] = *(arr+i);
	}
    }
    leaders[leader_index] = *(arr+n-1);
    printf("Leaders are ");
    for (int k=0; k <= leader_index; k++) {
	if (k != 0) {
	    printf(", ");
	}
	printf("%d", leaders[k]);
    }
}

//Function to test the functionality of leaders_arr
int main() {
    int n;
    scanf("%d", &n);
    // Storing given elements of array
    int leaders[n];
    for (int i=0; i<n; i++) {
	scanf("%d", &leaders[i]);
    }
    // Passing the input array to print the leaders in leaders_arr function
    leaders_arr(leaders,n);
    return 0;
}
