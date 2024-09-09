//Raven Osborne 
//5367259
//Assignment 1
//COP 3223
//September 7, 2024
//inspiration class code by Professor Juan Parra

#include <stdio.h>
#include <math.h>
#define PI 3.14

void inputcoordinates(double width, double height, double distance, double area, double perimeter, x1, y1, x2, y2){
    double x1, y1, x2, y2;
    printf("What is coordinate x1", x1);
    scanf("&x1", &x1);
    printf("What is coordinate y1", y1);
    scanf("&y1", &y1);
    printf("What is coordinate x2", x2);
    scanf("&x2", &x2);
    printf("What is coordinate y2", y2);
    scanf("&y2", &y2);
}
//width, height, distance, area, perimeter

double calculateRadius(){
    return sqrt(pow(x2 - x1, 2) + pow(y2-y1, 2));
}
double calculateDistance(){
//Distance= (2)(r)
    return 2*calculateRadius();
}
double calculatePerimeter(){
//Perimeter= (2)(PI)(r)
    return 2*PI*calculateRadius();
}
double calculateArea(){
//Area= (3.14)(r)^2  
    return PI*pow(calculateRadius, 2);
}
double calculateWidth(){
//Width= (r, in x direction)
    return calculateRadius;
}
double calculateHeight(){
//Height= (r, in y direction)
    return calculateRadius;
}


//main function
//Im sorry Im very confused on this assignment, I know things arent correct
int main (int argc, char **argv){

    //coordinate x1, y1 (center)
    printf("What is the coordinate for the circle's origin?");
    scanf("%1f %1f", &x1, &y1);
    //coordinate x2, y2 (point along circumference)
    printf("What is a coordinate along the circumference of the circle?");
    scanf("%1f %1f", &x2, &y2);

    //what we want to return
    printf("Width is %.2f \n", calculateRadius);
    printf("Height is %.2f \n", calculateRadius);
    printf("Distance is %.2f \n", calculateDistance);
    printf("Area is %.2f \n", calculateArea);
    printf("Perimeter is %.2f \n", calculatePerimeter);

    return 0;
}
