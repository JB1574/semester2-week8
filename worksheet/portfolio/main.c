
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    Point p1 = makePoint(1.0,1.0);
    Point p2 = makePoint(4.0, 2.0);
    Point p3 = makePoint(2.0, 5.0);

    // Build the triangle
    Triangle t = makeTriangle(p1, p2, p3);

    // Compute the area
    float area = triangleArea(t);

    // Print the result
    printf("Triangle area = %f\n", area);

    return 0;
}
    // test your code by calling the functions and printing the output 
    
