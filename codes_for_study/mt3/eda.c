#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int size = 1;
    int* integer_array = (int*) malloc(sizeof(int)*size);
    int* tmp = NULL;
    printf("Input: ");
    scanf("%d",&i);
    *(integer_array + size - 1) = i;

    while(i != -1){
        printf("Input: ");
        scanf("%d",&i);
        if(i == -1)
            break;
        tmp = (int*) malloc(sizeof(int)*size);

        for(int j=0;j<size;j++)
            *(tmp+j) = *(integer_array+j);

        free(integer_array);
        size++;
        integer_array = (int*) malloc(sizeof(int)*size);
        for(int j=0;j<size;j++)
            *(integer_array+j) = *(tmp+j);
        *(integer_array+size-1) = i;
        free(tmp);
    }


    for(int j=0;j<size;j++)
        printf("%d ",*(integer_array+j));

    return 0;
}