#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[15];
    FILE *fp=fopen("example.txt","w");
    if(fp==NULL){
        exit(1);
    }
    fprintf(fp,"some text");
     fclose(fp);
    fp=fopen("example.txt","r");
    fgets(text, 14, fp);
    fscanf(fp, "%s", text);
    printf("%s", text);

}
// file - potok ot danni, chetene zapisvane 
//text file = binaren
//FILE *fp= fopen("path","r")
                //didektoriq
//FILE *fp=fopen("path", "w")
//FILE *fp=fopen("path", "a")


// wb, rb, ab - binary files
// Zaduljitelna proverka
/*
if(fp==NULL){
printf("");
exit(1);

fclose(fp); !!!}
fprintf(fp, "%", a);
fscanf(fp,"%", &a);
fgets(&, num, fp);
*/
/*
fread, fwrite
(&, type, num, fp)
    sizeof(int)
fp - ukazatel kum faila;

*/