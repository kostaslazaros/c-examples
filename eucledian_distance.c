/************************************
* A program for calculating the     *
* euclidian distance between two    *
* points from the start of the axis *
* Konstantinos-Panagiotis Lazaros   *
* DIB- UTH 2018-12-05               *
*************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//This is the distance calculation function
double CalculateDistance(double x1, double y1){
return sqrt (x1  * x1 + y1 * y1);}

//Main function
int main()
{
 //Declaration of variables
 double tablex[10];
 double tabley[10];
 FILE  *fp1;
 FILE  *fp2;
 fp1 = fopen("x_axis.txt","r");
 fp2 = fopen("y_axis.txt", "r");

//Scanning the two files
 for (int i = 0; i < 10; i++){

    fscanf(fp1, "%lf", &tablex[i]);
    }

    for (int j = 0; j < 10; j++){

    fscanf(fp2, "%lf", &tabley[j]);
    }

//Closing the two files
    fclose(fp1);
    fclose(fp2);

    printf("\n\n");
//Declaring variable distance and using the calculation function to compute it and then printing output
    double distance;
    for (int i = 0; i < 10; i++){
	distance = CalculateDistance(tablex[i], tabley[i]);
	printf("The distance of the two points from the start of the axis is: %lf\n\n", distance);}
//End of the line
return 0;
}
