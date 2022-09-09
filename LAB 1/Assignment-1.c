///////////
// Exp 1//
//////////

#include <stdio.h>
int main()
{
    printf("Hello world");

    return 0;
}

///////////
// Exp 2//
//////////

// #include <stdio.h>
// int main()
// {
//     printf("Akash Panwar");
//     printf("\nVill - Julo, P.O. Tilwari Bhauwala Dehradun");
//     printf("\nBCA Graduate");

//     return 0;
// }

///////////
// Exp 3//
//////////

// #include <stdio.h>
// int main()
// {

//     int n1 = 10, n2 = 5;

//     int sum = n1 + n2;
//     printf("The sum is: %d", sum);

//     return 0;
// }

///////////
// Exp 4//
//////////

// #include <stdio.h>
// int main()
// {

//     int n1, n2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &n1, &n2);

//     int sum = n1 + n2;

//     printf("The sum is: %d", &sum);
//     return 0;
// }

///////////
// Exp 5//
//////////

// #include <stdio.h>
// int main()
// {
//     int distanceInKm = 10;

//     int distanceInMeter = 100 * distanceInKm;

//     int distanceInCentimeter = 100000 * distanceInKm;

//     int distanceInFeet = 3281 * distanceInKm;

//     int distanceInInch = 39370 * distanceInKm;

//     printf("\nDistance in Kilometer: %d", distanceInKm);

//     printf("\nDistance in Meter: %d", distanceInMeter);

//     printf("\nDistance in Centimeter: %d", distanceInCentimeter);

//     printf("\nDistance in Feet: %d", distanceInFeet);

//     printf("\nDistance in Inch: %d", distanceInInch);

//     return 0;
// }

///////////
// Exp 6//
//////////

// #include <stdio.h>
// int main()
// {

//     int r, s;

//     printf("Enter radius of circle: ");

//     scanf("%d", &r);

//     float circumference = 2 * 3.14 * r;

//     printf("Circumference: %f", circumference);

//     printf("\nEnter side of square: ");
//     scanf("%d", &s);

//     int perimeter = 4 * s;

//     printf("Perimeter: %f", perimeter);

//     return 0;
// }

///////////
// Exp 7//
//////////

// #include <stdio.h>
// int main()
// {

//     int l = 1189, b = 841;

//     int A[9];

//     int temp;

//     for (int i = 0; i < 9; i++)
//     {
//         A[i] = l * b;

//         printf("\n%d = %d*%d", A[i], l, b);
//         temp = b;
//         b = l / 2;
//         l = temp;
//     }

//     return 0;
// }

///////////
// Exp 8//
//////////

// #include <stdio.h>
// int main()
// {

//     int variable = 10;

//     printf("Variable: %d", &variable);
//     printf("\nAddress of the variable: %d", &variable);

//     return 0;
// }

///////////
// Exp 9//
//////////

// #include <stdio.h>
// int main()
// {

//     char ch;

//     scanf("%c", &ch);

//     int ascii = (int)ch;

//     printf("%d", ascii);

//     return 0;
// }

///////////
// Exp 10//
//////////

// #include <stdio.h>
// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int revNum = 0, temp;
//     while (num != 0)
//     {
//         temp = num % 10;
//         revNum = revNum * 10 + temp;
//         num = num / 10;
//     }

//     printf("Reversed number: %d", revNum);

//     return 0;
// }

///////////
// Exp 11//
//////////

// #include <stdio.h>
// int main()
// {

//     int fiveDigitNum;

//     printf("Enter a five digit number: ", fiveDigitNum);
//     scanf(" %d", &fiveDigitNum);

//     int numOfDigits = 0, temp = fiveDigitNum;

//     while (temp != 0)
//     {
//         temp = temp / 10;
//         numOfDigits++;
//     }

//     if (numOfDigits != 5)
//     {
//         printf("\nPlease enter a five digit number!");
//         return 0;
//     }

//     int sum = 0;
//     while (fiveDigitNum != 0)
//     {
//         sum = sum + fiveDigitNum % 10;
//         fiveDigitNum = fiveDigitNum / 10;
//     }

//     printf("\nSum of the five digits: %d", sum);

//     return 0;
// }

///////////
// Exp 12//
//////////

// #include <stdio.h>
// int main()
// {

//     // Amount given
//     int amount = 464, count = 0, quotient, index = 0;

//     // Notes allowed
//     int notes[7] = {100, 50, 20, 10, 5, 2, 1};

//     printf("Amount: %d", amount);

//     while (amount)
//     {

//         quotient = amount / notes[index];
//         amount = amount % notes[index];

//         count = count + quotient; // Counting notes

//         index++;
//     }

//     printf("\nNumber of notes: %d", count);
//     return 0;
// }
