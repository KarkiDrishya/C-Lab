//6) Define a structure named "Date" with members day, month, and year. Write a C program to input two dates and find the difference in days between them.

#include <stdio.h>

struct Date{
    int year,month,day;
};

int main(){
    struct Date dt[2];
    int f_year, f_month, f_day,result;
    for(int i=0; i<2; i++){
        printf("Enter first date (Y/M/D): ");
        scanf("%d %d %d",&dt[i].year,&dt[i].month,&dt[i].day);
    }

    f_year = (dt[0].year - dt[1].year)*365;
    f_month = (dt[0].month - dt[1].month)*30;
    f_day = dt[0].day - dt[1].day;

    if(f_day<0){
        f_month = f_month + f_day;

        if(f_month<0){
            f_year = f_year + f_month;
            result = f_year;
        }else{
            result = f_year + f_month;
        }
        
        printf("Difference between the dates: %d Days",result);

    }else if(f_month<0){
        f_year = f_year + f_month;

        result = f_year + f_day;
        
        printf("Difference between the dates: %d Days",result);
    }else{
      
        result = f_year + f_month + f_day;

        printf("Difference between the dates: %d",result);
    }

}