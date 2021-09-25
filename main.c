#include <stdio.h>

#define NUM_DIGIT 4
unsigned int get_dec(int ascii);
unsigned int hex_plus_unsigned(char *num1, char *num2, int digit_num);

unsigned int hex_plus_unsigned(char *num1, char *num2, int digit_num){
    unsigned int result1 = 0;
    unsigned int result2 = 0;
    int i = 0;

    while (i < digit_num) {
        unsigned int number1 = (unsigned int) *(num1 + i);
        unsigned int number2 = (unsigned int) *(num2 + i);

        unsigned int value1 = get_dec((int) number1);
        unsigned int value2 = get_dec((int) number2);

        if (i == 0){
            value1 = value1 * 4096;
            value2 = value2 * 4096;

        } else if (i == 1){
            value1 = value1 * 256;
            value2 = value2 * 256;

        } else if (i == 2){
            value1 = value1 * 16;
            value2 = value2 * 16;
        }

        result1 = result1 + value1;
        result2 = result2 + value2;
        i++;
    }
    return result1 + result2;

}

// convert an ascii value to it's decimal value
unsigned int get_dec(int asci)
{
    switch(asci){
        case(48):
            return 0;

        case(49):
            return 1;

        case(50):
            return 2;

        case(51):
            return 3;

        case(52):
            return 4;

        case(53):
            return 5;

        case(54):
            return 6;

        case(55):
            return 7;

        case(56):
            return 8;

        case(57):
            return 9;

        case(97):
            return 10;

        case(98):
            return 11;

        case(99):
            return 12;

        case(100):
            return 13;

        case(101):
            return 14;

        case(102):
            return 15;

        case(65):
            return 10;

        case(66):
            return 11;

        case(67):
            return 12;

        case(68):
            return 13;

        case(69):
            return 14;

        case(70):
            return 15;
    }
}

int main() {

    char num1[NUM_DIGIT+1];		// extra 1 byte to hold a char of null
    char num2[NUM_DIGIT+1];

    printf("enter the first hex number (4-digit, unsigned):\n");
    scanf("%s", num1);

    printf("enter the second hex number (4-digit, unsigned):\n");
    scanf("%s", num2);

    printf("unsigned summation result: 0x%x\n", hex_plus_unsigned(num1, num2, NUM_DIGIT));

    return 0;
}
