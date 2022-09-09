#include <stdio.h>
int main()
{

    float height, weight;
    printf("Enter height of the person(in meter): ");
    scanf("%f", &height);

    printf("Enter weight of the person(in kg): ");
    scanf("%f", &weight);

    printf("\n%f\n%f", height, weight);

    float BMI = weight / (height * height);

    printf("\n%f", BMI);

    if (BMI < 15)
        printf("\nStarvation");

    else if (BMI >= 15.1 && BMI <= 17.5)
        printf("\nAnorexic");

    else if (BMI >= 17.6 && BMI <= 18.6)
        printf("\nUnderweight");

    else if (BMI >= 18.6 && BMI <= 24.9)
        printf("\nIdeal");

    else if (BMI >= 25 && BMI <= 25.9)
        printf("\nOverweight");

    else if (BMI >= 30 && BMI <= 39.9)
        printf("\nObese");

    else if (BMI >= 40)
        printf("\nMorbidity Obese");
    else
        printf("\nInvalid input");
    return 0;
}
