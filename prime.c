#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int size;
int sizefactor;

int main(int argv, char* argc[]) {
    if (argv == 1) {
        printf("./prime <n> \n");
        printf("for nth prime\n");
        return 1;
    }

    if (atoi(argc[1]) == 1) {
        printf("1st prime is 2\n");
        return 1;

    }

    clock_t start = clock(), elapsed;


    int n = atoi(argc[1]);
    size =(int) ((double)n*log(n))*1.1;
    sizefactor = n;
    int* badarray = (int*) calloc(size,sizeof(int));

    printf("%dth prime is \n", n);

    n-=2;
    int ans = 0;
    int i = 0;
    int off;

    while (n) {
        i = ans;
        off = (ans * 2) + 3;
        if (ans < sizefactor) {
            while ( i < size ) {
                badarray[i] = 1;
                i += off;
            }
            i = ans;
        } else {
            i = ans + 1;
        }
        while (badarray[i]) {
            i++;
        }

        n--;
        ans = i;
    }
    printf("%d\n", (i * 2) + 3);

    elapsed = clock() - start;
    int ms = elapsed * 1000 / CLOCKS_PER_SEC;
    printf("%d ms\n", ms);

    free(badarray);

    return 1;
}
