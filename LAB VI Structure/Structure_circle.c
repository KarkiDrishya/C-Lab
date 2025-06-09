// 4.Define a structure named Circle to represent a circle with a radius. Write a C program to calculate the area and perimeter of two circles and display the results.

#include <stdio.h>
# define pi 3.14
struct circle{
    float radius;
};
int main(){
    float area[2], perimeter[2];
    struct circle c[2];
    for(int i=0;i<2;i++){
        printf("Enter radius of circle %d: ",i+1);
        scanf("%f",&c[i].radius);
    }
    for(int i=0;i<2;i++){
        perimeter[i]=2*pi*c[i].radius;
        area[i]=pi*c[i].radius*c[i].radius;
    }
    for(int i=0;i<2;i++){
        printf("Perimeter of circle %d: %.2f\n",i+1,perimeter[i]);
        printf("Area of circle %d: %.2f\n",i+1,area[i]);
    }
}