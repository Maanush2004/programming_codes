/** VIT VPROPEL Problem of the Day 17-03-23
 * Sides of a Rectangle
 * Given four points P1, P2, P3 and P4 check whether they can be corners of a 
 * rectangle with sides A, B, C and D respectively.
 * 
 * For example, if P1 is (2,12), P2 is (14,12), P3 is (14,22), P4 is (2,22) then they
 * can be corners A, B, C and D of a rectangle. Whereas the points P1 is (5,12), P2
 * is (14,12), P3 is (14,22), P4 is (2,22) cannot be corners of a rectangle. Distance
 * between any two points P1(x1,y1) and P2(x2,y2) shall be calculated using the formula :
 * 
 * Length = sqrt((x2-x1)^2+(y2-y1)^2)
 * 
 * Print Yes if the points P1, P2, P3 and P4 can be corners A, B, C and D of a
 * rectangle respectively and No otherwise
 * 
 * Input Format
 * First line contains the coordinates of point P1 seperated by a space
 * Next line contains the coordinates of point P2 seperated by a space
 * Next line contains the coordinates of point P3 seperated by a space
 * Next line contains the coordinates of point P4 seperated by a space
 * 
 * Output Format
 * Print Yes or No **/

//Possibility of rectangle from given points
#include <stdio.h>
#include <math.h>

int main() {
    int x_points[4], y_points[4], sides[4], diagonals[2];
    // Reading and storing the x and y co-ordinates in x_points and y_points respectively
    for (int i=0; i < 4; i++) {
        scanf("%d %d", &x_points[i], &y_points[i]);
    }
    /** Calculating length of sides using formula
        AB = sqrt((x2-x1)^2+(y2-y1)^2)
        and similarly for other sides **/
    sides[0] = sqrt(pow(x_points[1]-x_points[0],2)+pow(y_points[1]-y_points[0],2));
    sides[1] = sqrt(pow(x_points[2]-x_points[1],2)+pow(y_points[2]-y_points[1],2));
    sides[2] = sqrt(pow(x_points[3]-x_points[2],2)+pow(y_points[3]-y_points[2],2));
    sides[3] = sqrt(pow(x_points[3]-x_points[0],2)+pow(y_points[3]-y_points[0],2));
    /** Calculating length of diagonals by using the same forumla of sides,
        but by taking alternate points **/
    diagonals[0] = sqrt(pow(x_points[2]-x_points[0],2)+pow(y_points[2]-y_points[0],2));
    diagonals[1] = sqrt(pow(x_points[3]-x_points[1],2)+pow(y_points[3]-y_points[1],2));
    // If alternate sides and both the diagonals are equal then it forms a rectangle
    if (sides[0]==sides[2] && sides[1]==sides[3] && diagonals[0]==diagonals[1]) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
