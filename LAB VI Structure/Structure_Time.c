// 2.Define a structure named Time with members hours, minutes, and seconds. Write a C program to input two times, add them, and display the result in proper time format.

#include<stdio.h>
struct Time{
    int hours;
    int minutes;
    int seconds;
};
int main(){
    int hr=0,min=0,sec=0;
    struct Time t[2];
    for(int i=0;i<2;i++){
        printf("Enter time %d(hh:mm:ss): ",i+1);
        scanf("%d:%d:%d",&t[i].hours,&t[i].minutes,&t[i].seconds);
    }

    for(int i=0;i<2;i++){
        sec=sec+t[i].seconds;
        if(sec>=60){
            sec=sec-60;
            min+=1;
        }
        min=min+t[i].minutes;
        if (min>=60){
            min=min-60;
            hr+=1;
        }
        hr=hr+t[i].hours;
    }
    printf("%d:%d:%d",hr,min,sec);
    return 0;
}