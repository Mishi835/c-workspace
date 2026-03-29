#include <stdio.h>
#include <stdlib.h>
int main(){
    int* nums_1=(int*) malloc(sizeof(int)*5);
    int* nums_2=(int*) calloc(5, sizeof(int));
    
    for (int i=0; i<5; i++){
        printf("num_1: %d: %d\n",i++, nums_1[i]);
        printf("nums_2 %d: %d\n", i++, nums_2[i]);

    }
    //realloc
    int staticArray[10];
    printf("size of static array: %d\n", sizeof(staticArray));
    printf("size of nums1: %d", sizeof(nums_1));
    int* larger_sum=realloc(nums_1, sizeof(int)*10);
float b;
float a;
scanf("Enter a: %f", &a);
scanf("Enter b: %f", &b);
float result = a+b;
printf("The result is: %f", result);
    
}
