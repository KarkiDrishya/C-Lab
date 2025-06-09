// 3.Create a structure named Book to store book details like title, author, and price. Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information.
#include<stdio.h>
struct book{
    char title[20],author[20];
    int price;
};
int main()
{
    struct book b1[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter the Title of the Book : ");
        scanf("%s",b1[i].title);
        printf("Enter the Author of the Book : ");
        scanf("%s",b1[i].author);
        printf("Enter the price of the Book : ");
        scanf("%d",&b1[i].price);
    }

    printf("The book with the highest price is : \n");

    if(b1[0].price>b1[1].price&&b1[0].price>b1[2].price)
    {
        printf("%s\t%s\t%d",b1[0].title,b1[0].author,b1[0].price);
    }

    if(b1[1].price>b1[0].price&&b1[1].price>b1[2].price)
    {
        printf("%s\t%s\t%d",b1[1].title,b1[1].author,b1[1].price);
    }

    if(b1[2].price>b1[1].price&&b1[2].price>b1[0].price)
    {
        printf("%s\t%s\t%d",b1[2].title,b1[2].author,b1[2].price);
    }

}