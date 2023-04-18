/** VIT VPROPEL Problem of the Day 01-03-23
 * 
 * Find Abundant Mineral
 * Many minerals such as olivine, quartz, feldspar, mica, pyroxene and amphibole
 * are found in rocks. It has been observed that in Madhya Pradesh, only one of the mineral
 * occurs abundantly. Here the mineral that occurs in maximum number of rocks
 * is said to be abundant. Given the details of minerals found in 'n' rocks write a C program
 * to find out the mineral that has occured maximum number of times. Print only the representation
 * of the mineral that has occured maximum number of times. Each mineral is represented
 * by one letter that is for example, olivine will be represented as o, quartz as q and so on.
 * The minerals found in each rock is given as a string.
 * 
 * For example, given the details of minerals in four rocks as oqm, qfo, mpa and qpf
 * the representation of the mineral that has occured abundantly is o.
 * 
 * Boundary Conditions
 * 0 < number of minerals < 20
 * 
 * Input Format
 * First line contains the number of rocks, n
 * Next 'n' lines contain the details of minerals in each rock
 * 
 * Output Format
 * Print the representation of mineral that occur abundantly **/

// Program to find abundant mineral
#include <stdio.h>
#include <string.h>

int main() {
    // Initialising and declaring an array of minerals
    char min[6]={'o','q','f','m','p','a'},temp[10];
    int min_count[6] = {},n,max=0,index=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%s",temp);
        // Splitting the given rock string into each individual mineral
        for (int j = 0;j < strlen(temp); j++) {
            // Matching the mineral with the mineral in the array and increasing the count of that respective element in min_count array.
            for (int k=0;k<6;k++) {
                if (temp[j]==min[k]) {
                    min_count[k]++;
                }
            }
        }
    }
    // Finding the mineral with maximum occurences.
    for (int x = 0; x < 6; x++) {
        if (min_count[x] > max) {
            max = min_count[x];
            index=x;
        }
    }
    // Printing the mineral that occured abundantly
    printf("%c",min[index]);
    return 0;
}
