/** Sorting list of numbers using arrays **/

// Function to sort elements in a given array
void sort(int *array, int arraySize) {
    int temp;
    // Using Bubble sort to arrange each element ascendingly
    for (int i=0; i < arraySize; i++) {
        for (int j=i+1; j < arraySize; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
