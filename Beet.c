#include <stdio.h>
#include <math.h>
int main()
{
    double average, i1, i2, i3, i4, i5, i6, x;
    int total;

    // Input the Currents

    printf("Enter i1 i2 i3 i4 i5 i6:");
    scanf("%lf %lf %lf %lf %lf %lf", &i1, &i2, &i3, &i4, &i5, &i6);

    total = i1 + i2 + i3 + i4 + i5 + i6;
    printf("\n\tTotal= %d", total);

    // To find average

    average = (total) / 6;
    printf("\n\tAverage= %lf", average);
    double Irms;

    // To find Irms

    Irms = (90 * 21.11111111111111) / 6;
    printf("\n\tIrms= %lf", Irms);

    double root, irms;
    double squareRoot;

    // computing the square root

    squareRoot = sqrt(Irms);

    printf("\n\tirms= %lf", squareRoot);

    // To find Power Factor

    double PowerFactor, PeakFactor;

    PowerFactor = squareRoot / average;
    printf("\n\tPower Factor= %lf", PowerFactor);

    //To give Im

    int Im;
    printf("\n\tChoice highest current in all values:");
    scanf("%d", &Im);

    // To find Power Factor

    PeakFactor = Im / squareRoot;
    printf("\nPeak Factor= %lf", PeakFactor);

    return 0;
}


// OUTPUT

/*Enter i1 i2 i3 i4 i5 i6:0 10 20 30 10 20

        Total= 90
        Average= 15.000000
        Irms= 316.666667
        irms= 17.795130
        Power Factor= 1.186342
        Choice highest current in all values:30

        Peak Factor= 1.685854 */
