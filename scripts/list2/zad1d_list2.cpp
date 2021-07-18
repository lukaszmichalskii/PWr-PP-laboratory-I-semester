#include <stdio.h>

int main()
{
    int howManyNumbers = 20;
    float max,min,zm,artAvg;
    float sum = 0;
    printf("Enter 20 numbers: ");
    scanf("%f",&min);
    sum+=min;
    for (int i=2; i<howManyNumbers+1 ; i++)
    {
        scanf("%f", &zm);
        sum+=zm;
        if (max<zm)
            max=zm;
        if (min>zm)
            min=zm;
    }
    artAvg = sum / howManyNumbers;
    printf("Sum of numbers = %.2f\nArithmetic average of numbers = %.2f\nMax value = %.2f\nMin value = %.2f",sum,artAvg,max,min);
    return 0;
}

