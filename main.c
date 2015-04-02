#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int countingSortUnique(int v[], int n, int orderedV[]);

#define N 5
#define MIN_VALUE -5
#define MAX_VALUE 40


int main(int argc, char** argv) {
    int v[N], orderedV[N];
    int i;
    
    srand((unsigned)time(NULL));

    printf("Unordered values\n");
    for (i = 0; i < N; i++) {
        int newValue;
        // Before adding the new value, its unicity
        // must be verified
        int unique = 0;
        while(!unique) {
            newValue = MIN_VALUE + (rand() % MAX_VALUE) +1;
            int j;
            unique = 1;
            for(j=0; j<=i && unique; j++) {
                if(v[j] == newValue) {
                    unique = 0;
                }
            }
        }
        v[i] = newValue;
        printf("%d: %d\n", i, v[i]);
    }
    
    countingSortUnique(v, N, orderedV);
    
    printf("\n\nOrdered values\n");
    for (i = 0; i < N; i++) {
        printf("%d: %d\n", i, orderedV[i]);
    }
    
    return (EXIT_SUCCESS);
}

int countingSortUnique(int v[], int n, int orderedV[]) {
    int r = 0;
    if(n > 0) {
        // To be implemented
    }
    else
        r = -1;
    return r;
}