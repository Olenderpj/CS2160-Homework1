#include <stdio.h>
#define NUM 0x636261

int main(void) {
    int a = NUM;
    char * pt = (char * ) &a;
    
    printf("a is: %d\n", a);
    printf("String is: %s\n", pt);
    return 0;
    
}