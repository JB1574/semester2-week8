
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation
    new.x=x;
    new.y=y;
    return new;
}

Line makeLine( Point p1, Point p2 ){
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ){
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l ){
    float dx = l.p[1].x - l.p[0].x; // difference in x between the two points
    float dy = l.p[1].y - l.p[0].y; // difference in y between the two points 
    float length = sqrt((dx*dx) + (dy*dy));
    return length;
}

float triangleArea( Triangle t ){
    float sum_diagonals1 = (t.p[0].x * t.p[1].y) + (t.p[1].x * t.p[2].y) + (t.p[2].x * t.p[0].y);
    float sum_diagonals2 = (t.p[1].x * t.p[0].y) + (t.p[2].x * t.p[1].y) + (t.p[0].x * t.p[2].y);
    float sum_final = sum_diagonals1 - sum_diagonals2;
    float magnitude_sum = sqrt(sum_final * sum_final);
    float area = 0.5 * magnitude_sum;
    return area;
}

bool samePoint( Point p1, Point p2 ){
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float length = sqrt((dx*dx)+ (dy*dy));
    if (length<1.0e-6){
        return true;
    }
    else {
        return false;
    }
}

bool pointInLine( Point p, Line l){
    if (samePoint(p,l.p[0])){
        return true;
    } else if (samePoint(p,l.p[1])) {
        return true;
    } 
    else{
        return false;
    }

} 

bool pointInTriangle( Point p, Triangle t ){
    if (samePoint(p,t.p[0])){
        return true;
    } else if (samePoint(p,t.p[1])) {
        return true;
    } else if (samePoint(p,t.p[2])){
        return true;
    }
    else {
        return false;
    }
}

// complete other functions below

// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
