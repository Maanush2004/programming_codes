/** Leetcode 2079. Watering Plants
  * Difficulty : Medium
  * https://leetcode.com/problems/watering-plants **/

// Function to calculate number of steps required to water plants.
int wateringPlants(int* plants, int plantsSize, int capacity){
    int original_capacity = capacity;
    int steps=0;
    for (int i=0; i < plantsSize; i++) {
        if (plants[i] > capacity) { // if the water in the bucket is not sufficient
            steps += 2*i+1; // 2*i because one needs to go and come again and +1 because water is at -1.
            capacity = original_capacity; // Bucket is completely filled now
        } else {
            steps++;
        }
        capacity -= plants[i]; // Subtract the capacity used to water plant in current iteration.
    }
    return steps;
}
