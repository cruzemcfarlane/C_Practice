#include <stdio.h>

main(){
       FILE *fpt;
       char text[80] = {""};
       fpt = fopen("data.txt", "r");
       fseek(fpt, 0, SEEK_END);
       int len = ftell(fpt);
       fseek(fpt, 0, SEEK_SET);
       fread(text, 1, 15, fpt);
       text[15] = 0;
       printf("%s %d %d\n", text, ftell(fpt), len);
       system("pause");
       fclose(fpt);
}
