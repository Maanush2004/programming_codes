/** VIT VPROPEL Problem of the Day 07-03-23 
 * Help to Shift Library
 * In a village, the local library is to be shifted from one place to the other.
 * Books are to be taken from the old location to the new one. There are no vehicles to help the librarian.
 * Two children Ramu and Somu volunteered to help the librarian in the shifting process.
 * Since there are many books, shifting will require many trips. The librarian thinks that
 * the children will become tired over time. So he plans to shift the bigger books first and then the smaller books.
 * To make the shifting process interesting, he asks Ramu to carry 'i' books and Somu to carry '2*i' books in the odd trips and
 * during even trips Ramu has to carry '2*i' books and Somu has to carry 'i' books. Where 'i' is the trip number
 * and the trips are numbered from 1.
 * 
 * Given the total number of books in the library, write a C program to find out the number of trips required to 
 * shift the books, number of books carried by Ramu, number of books carried by Somu and the name of the child
 * that keeps the last book in the new location of the library.
 * 
 * For example, when there are 27 books, it will take totally four trips to complete the shifting. Ramu would carry 16 books,
 * Somu would carry 11 books, and the last book will be placed by Somu. When there are 48 books, it will take totally six trips to shift,
 * Ramu would carry 24 books, Somu would carry 24 books, and the last book will be placed by Ramu.
 * 
 * Input Format
 * First line contains the total number of books in the library, n
 * 
 * Output Format
 * First line should contain the number of trips taken for shifting
 * Next line should contain the number of books carried by Ramu and Somu seperated by a tab.
 * Next line should contain the name of the child who carried the last book **/

#include <stdio.h>
#include <math.h>

int main() {
    int last_i,n,trip,ramu,somu;
    scanf("%d", &n);
    /** For finding the number of trips, mathematical formula for n natural numbers if used.
     * For every trip i, 3*i books are to be carried. So, the total number of books will be
     * 3*(i)*(i+1)/2 where here i is the total number of trips. This forms a quadratic equation
     * and when its positive root is found, we get the total number of trips. The number of trips is ceiled as number of trips can't be decimal **/
    trip = ceil((-1+sqrt(1+4*2*n/3))/2);
    printf("%d\n", trip);
    // Finding the number of books carried in the last trip by subtracting total number of books till last but on trip from total number of books.
    last_i = n-3*((trip-1)*trip/2);
    /** If number of trips is even and  2*i > last_i (Because Ramu has to carry 2*i books in even trips)
      * or number of trips is odd and i > last_i (Because Ramu has to carry i books in even trips),
      * The last person to carry the books would be Ramu.
      * Number of books carried by ramu would be i1+2*i2+i3... which can be written as arithmetic expression.
      * Sum of n natural numbers + remaining books + Sum of even numbers in n natrual numbers. 
      * Number of books carried by Somu would be total number of books - number of books carried by Ramu**/
    if (((trip%2==0)?2:1)*trip > last_i) {
        char last[] = "Ramu";
        ramu = (trip-1)*trip/2+last_i+floor((trip-3)/2+1)*(2+(floor((trip-3)/2+1)-1));
        somu = n - ramu;
        printf("%d\t%d\n%s", ramu, somu,last);
    /** Otherwise, the last person to carry the books would be Somu.
      * Number of books carried by ramu would be i1+2*i2+i3... which can be written as arithmetic expression.
      * Sum of n natural numbers + remaining books + Sum of even numbers in n natrual numbers. 
      * Number of books carried by Somu would be total number of books - number of books carried by Ramu**/
    } else {
        char last[] = "Somu";
        ramu = (trip)*(trip+1)/2+floor((trip-2)/2+1)*(2+(floor((trip-2)/2+1)-1));
        somu = n - ramu;
        printf("%d\t%d\n%s", ramu, somu,last);
    }
   return 0;
}
