/* Bakare Abolaji Hussein */
/* 222468 */
/* CSC235 */

#include <stdio.h>
int main () {
    FILE * in_file = fopen("Adam.txt", "w");
    fprintf(in_file, "3\nUUUDU\nDDD\nUU "); 
    fclose(in_file);

}