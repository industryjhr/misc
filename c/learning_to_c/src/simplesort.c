#include <stdio.h>

#define MAX 10 // pre-processor directive.. global var?

int main(void)
{
    int data[MAX];
    int i,j,tmp;
    FILE *fp;

    /* read in data */
    fp = fopen("src/sort_input.txt","r");
    if (fp == NULL) {
        printf("Could not open file.\n");
        return(0);
    }

    for (i=0; i<MAX; i++) {
        fscanf(fp,"%d",&data[i]);
    }
    fclose(fp);

    printf("Following items entered:\n");
    for (i=0; i<MAX; i++) {
        printf("Item #%d: %d\n",i,data[i]);
    }

    /* simple sort */
    for (i=0; i<MAX; i++) {
        for (j=i; j<MAX; j++) {
            if (data[i] > data[j]) {
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    printf("\nSorted values:\n");
    for (i=0; i<MAX; i++) {
        printf("Item #%d: %d\n",i,data[i]);
    }

    return(0);
}
