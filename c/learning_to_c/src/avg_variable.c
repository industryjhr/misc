#include <stdio.h>

int main(void)
{

    int numberOfNums=0, total=0, valsRead, value;
    float average;

    valsRead = scanf("%d",&value);

    while (valsRead > 0) {
        if (value < 0) {
            valsRead = scanf("%d", &value);
            continue;
        }
        numberOfNums++;
        total += value;
        printf("Read value %d\n",value);
        valsRead = scanf("%d",&value); // always > 0; program must be terminated manually
    }

    average = (float)total / numberOfNums;
    printf("%d values read.  Average: %f.\n", numberOfNums, average);

    return (0);
}
