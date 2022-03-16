/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void line(char c, int length){
   
   for (int i = 0; i <=length; ++i) {
     printf("%c", c);
   }
    
}

int main()
{
    printf("hello\n");
    line('-',40);
    printf("\nworld\n");
    return 0;
}
