#include <stdio.h>
#include <string.h>

int main(){
    char name[]="Ivan";
    printf("Size of %zu\n", sizeof(name));
    printf("Strlen: %zu\n", strlen(name)); 
    float a;
    float b;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    float result=a+b;
    printf("The result is: %.2f\n", result);

    char second_name[10];
    // second_name=name !! ne mojem
    strcpy(second_name, name);
    printf(name);
    printf(second_name);
    printf("The result of strcmp: %s", strcmp(name,second_name));


}


  /*int x = 5;
    int* p_x=&x;
    int nums[10];
    int* p=nums;*/
    //for (int i; i<10; i++){
     //   *(p+i)=i;
    
    //for (int i=0; i<10; i++){
        //printf("%p\n", *(p+i));
    //}
    //printf("%p\n", &nums);
    //printf("%p\n", nums[0]);
    //printf("%p", &x);