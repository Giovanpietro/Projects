#include <stdio.h>

int main(){

    int i, j, n, z;

    for(i=0;i<1;i++){
            printf("*****\n");
        for(j=0;j<5;j++){
            printf("*   *\n");
        }
            printf("*****\n");
    }

    printf("Inserisci altezza: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("*\n");
        for(i=1;i<n;i++){
            printf("**\n");
            for(i=2;i<n;i++){
                printf("***\n");
            }
        }
    }

    return 0;
}
