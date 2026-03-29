#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp=fopen("example.bin", "wb");
    if (fp==NULL){
        exit(1);
    }
    char name[]="Ivan";
    int group=38;
    int len = sizeof(name); // strlen()
    fwrite(&len, sizeof(int), 1, fp);
    char nameFromFile[10];
    
    
    fwrite(name, sizeof(char), 5, fp);
    fwrite(&group, sizeof(int), 1, fp);
    fclose(fp);
    fp=fopen("example.bin", "rb");
    if(fp==NULL){
        exit(1);
    }
    int len_from_file;
    int groupFromFilefr;
    fread(&len_from_file, sizeof(int),1,fp);
    fread(nameFromFile, sizeof(char), len_from_file, fp);
    fread(&groupFromFilefr, sizeof(int), 1, fp);
    fclose(fp);
    printf("Name: %s\n", nameFromFile);
    printf("Group: %d", groupFromFilefr);
    // fread(nameFromFile, );
}