#include <stdio.h>
#include <string.h>

int main() {
    printf("Hello World!\n");
    printf("I SAID HELLO WORLD\n");
    printf("!!!!!!!!!!!!!\n");
    printf("How are you??????????\n");
    printf("My commit is first!\n");
    printf("No, MYYYY commit is first!\n");
    
    FILE *fptr = NULL;
    fptr = fopen("input.txt", "r");
    char string[50] = "HELLO";
    fgets(string, sizeof(string), fptr);
    printf("%s\n", string);
    fclose(fptr);

    return 0;
}
