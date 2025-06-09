//4) Write a program to copy the contents of one file to another.
#include <stdio.h>
int main() {
    FILE *ogfile, *cfile;
    char ch;
    ogfile = fopen("hello.txt", "r");
    
    cfile = fopen("copy.txt", "w");
    
    while ((ch = fgetc(ogfile)) != EOF) {
         fputc(ch, cfile); 
     }
        
    fclose(ogfile);
    fclose(cfile);

    return 0;
}
