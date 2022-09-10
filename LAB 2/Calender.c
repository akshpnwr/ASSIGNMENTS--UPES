// #include <stdio.h>
int calender()
{
    int year;

    printf("Enter any year: ");
    scanf("%d", &year);

    year -= 1; // Subtracting days of given year

    int leapYears = year / 4;

    int nonLeapYears = year - leapYears;

    int day = (leapYears * 366 + nonLeapYears * 365) % 7;

    printf("On 1st Jan of %d the day is: ", year);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invlid");
        break;
    }

    return 0;
}
