#include <operations.h>
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
    if (fptr == NULL) {
        printf("Can not find file input.txt");
    }
    char string[50] = "HELLO";
    fgets(string, sizeof(string), fptr);
    printf("%s\n", string);
    printf("2 + 2 = %d\n", my_add(2, 2));
    printf("2 / 2 = %f\n", my_div(2, 2));
    printf("2 ^ 3 = %d\n", my_pow(2, 3));
    fclose(fptr);

    return 0;
}
