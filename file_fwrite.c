#include <stdio.h>

main(){
       FILE *fpt;
       char text[80];
       sprintf(text, "Fortytwo 42 bytes of data on the wall...");
       fpt = fopen("data2.txt", "w");
       fwrite(text, 1, strlen(text), fpt);
       fclose(fpt);
}
