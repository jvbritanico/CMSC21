// Includes the standard input and output library that contains input-output functions.
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

struct Line {
    struct Point point1;
    struct Point point2;
    float *midpoint;
    float slope;
    float distance;
};

// Function to calculate the slope of a line
float solveSlope(struct Line line) {
    float slope = (line.point1.y - line.point2.y) / (line.point1.x - line.point2.x);
    return slope;
}

// Function to calculate the midpoint of a line
float *solveMidpoint(struct Line line) {
    static float midpoint[2];
    midpoint[0] = (line.point1.x + line.point2.x) / 2;
    midpoint[1] = (line.point1.y + line.point2.y) / 2;
    return midpoint;
}

// Function to calculate the distance between two points
float solveDistance(struct Line line) {
    float distance = sqrt(pow(line.point1.x - line.point2.x, 2) + pow(line.point1.y - line.point2.y, 2));
    return distance;
}

// Function to print the slope-intercept form of a line
void getSlopeInterceptForm(struct Line line) {
    float slope = solveSlope(line);
    float yIntercept = line.point1.y - slope * line.point1.x;
    printf("y = %.6fx + (%.6f)\n", slope, yIntercept);
}

int main() {
    struct Line line;
    
    // Read input for point1
    printf("Enter x and y for point1: ");
    scanf("%f %f", &line.point1.x, &line.point1.y);
    
    // Read input for point2
    printf("Enter x and y for point2: ");
    scanf("%f %f", &line.point2.x, &line.point2.y);
    
    // Calculate and print the slope
    line.slope = solveSlope(line);
    printf("Slope: %.6f\n", line.slope);
    
    // Calculate and print the midpoint
    line.midpoint = solveMidpoint(line);
    printf("Midpoint: %.6f %.6f\n", line.midpoint[0], line.midpoint[1]);
    
    // Calculate and print the distance
    line.distance = solveDistance(line);
    printf("Distance between 2 points: %.6f\n", line.distance);
    
    // Print the slope-intercept form
    getSlopeInterceptForm(line);
    
    return 0;
}