// Write a program to count the frequency of each element in an array
#include <stdio.h>

int main()
{
    int arr[20],n,c=1;
    printf("How many elements do you want to enter: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0]==0){
        for(int i=1;i<n;i++){
            if(arr[i]==0){
                c++;
            }
        }
        printf("Element: 0  Frequency: %d",c);
        c=1;

        for(int i=1;i<n;i++){
            if(arr[i]!=0){
                for(int j=i+1;j<n;j++){
                    if(arr[i]==arr[j]){
                        c++;
                        arr[j] = 0;
                    }
                }
                printf("\nElement: %d  Frequency: %d",arr[i],c);
                c=1;
            }
        }

    }else{
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                for(int j=i+1;j<n;j++){
                    
                    if(arr[i]==arr[j]){
                        c++;
                        arr[j] = 0;
                    }
                }
                printf("\nElement: %d  Frequency: %d",arr[i],c);
                c=1;
            }
        }
    }
}