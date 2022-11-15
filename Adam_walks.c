/* C program to count the number of steps taken by Adam*/
/* Bakare Abolaji Hussein */
/* 222468 */
/* CSC235 */

#include <stdio.h>
#include <string.h>

char line[100];
int lenght;
char c[5];

int main () {
    FILE * fpointer = fopen("Adam.txt", "r");
    fgets(c, 5, fpointer);
    printf("Number of test cases: ");
    printf("%s", c);
    printf("\t \n");
    for (int start = 1; start <= 3; start ++){
        fgets(line, 100, fpointer);
        lenght = strlen(line) - 1;
        printf("Test case: ");
        printf("%s", line);
        int counter = 0;
        for(int h = 0; h <= lenght; h++)
        {
            if (line[h] == 'U')
            {
                counter = counter + 1;
            }
            else if (line[h] == 'D')
            {
                break;    
            }
        }
        printf("Number of steps Adam takes: ");
        printf("%i\n", counter);
        printf("\t \n");
        
    } 
    
    

    fclose(fpointer);
    return 0;
}
