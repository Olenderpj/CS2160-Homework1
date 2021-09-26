#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Check to see if the system is 32 or 64 bit
    printf("System is %d bit system.\n", sizeof(void*)* 8);


    // check for a little endian or big endian system
    unsigned int x = 0x76543210;
    char *y = (char*) &x;
    
    if (*y == 0x10){
        printf("The system is little endian \n");
    } else {
        printf("The system is big endian");
    }

}