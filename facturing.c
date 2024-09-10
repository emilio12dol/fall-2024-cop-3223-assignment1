#include<stdio.h> 
#define PI 3.14159 //instructions said to define pi as that
#include<math.h>


//this is the main function
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculate Width();
double calculateHeight(); 

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculate Width();
    calculate Height(); 


    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;

    printf("Enter Point #1 (x1,y1): ");
    scanf("%1f %lf", &x1, &y1);
    printf("Enter Point #2 (x2,y2): ")
    scanf("%1f %1f, &x2, &y2");

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("Distance between points is %.2lf\n", distance);
    
    return distance;
}

dobule calculatePerimeter() {
    double distnace = calculateDistance(); //to not reuse lines of codes (DRY)
    double perimeter = distance * M_PI; 

    printf("The perimeter is %.2lf\n", perimeter); 

    return 4.0; //all of this to me is hard
}

double calculateArea() {
    double distance = calculateDistance(); 
    double radius = distance / 2;
    double area = M_PI * pow(radius, 2); 
    
    printf("Area is %.2lf\n", area);

    return 3.5;
}

double calculateWidth() {
    double x1, y1, x2, y2; 

    printf("Enter Point #1 (x1 y1): "); 
    scanf("%lf %lf", &x1, &y1); 
    printf("Enter Point #2 (x2 y2): "); 
    scanf("%lf %lf", &x2, &y2);

    double width = fabs(x2-x1); 
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("Width is %.2lf\n", width);

    return 5.0;
}

double calculateHeight() {
    double x1, y1, x2, y2; 
    printf("Enter Point #1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter Point #2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    double height = fabs (y2 - y1);
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The height is %.2lf\n", height);
    
    return 4.0; 
}

