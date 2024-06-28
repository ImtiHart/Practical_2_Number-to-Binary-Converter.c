#include <stdio.h>
#include <stdlib.h>

//Declare varibles
int decimal, binary, remainder, decimal_place;
int main()
{
    //Ask the user for decimal input
    printf("Choose a number to convert to binary: ");
    scanf("%d", &decimal);
    decimal_place=1;
    //Convert decimal to binary
    while(decimal!=0)
    {
        /*To find the binary number we find the values of the power of two that will form the decimal,
         the values that form the decimal equals 1 while the leftover equals 0*/
        remainder=decimal% 2;
        //Decimal keep reducing till it is zero
        decimal= decimal/2;
        decimal_place*=10;
        binary=binary+(remainder*decimal_place);

    }
    binary/=10;
    //Call the binary conversion
    printf("The binary version of thedecimal is: %d", binary);
}
