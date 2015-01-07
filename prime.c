#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argv, char* argc[]) {
    if (argv == 1) {
        printf("./prime <n> \n");
        printf("for nth prime\n");
        return 1;
    }

    clock_t start = clock(), elapsed;

    int n = atoi(argc[1]);

    int* badarray =




    elapsed = clock() - start;
    int ms = elapsed * 1000 / CLOCKS_PER_SEC;
    printf("%d ms", ms/1000, ms%1000);

}
