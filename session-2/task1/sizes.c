
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short testshortInt;
    long testLongInt;
    double testDouble;

    

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Float size is %ld bytes\n",sizeof(testshortInt));
    printf("Float size is %ld bytes\n",sizeof(testLongInt));
    printf("Float size is %ld bytes\n",sizeof(testDouble));

    return 0;
}
