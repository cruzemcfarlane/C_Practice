#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
       char string[200];
       char *p = string;
       printf("%s %s\n", string, (p+strlen(string)+1));
       
       strcpy(string, "hello");
       strcpy(p+20, "world");
       strcpy(p+40, "!");
       
       printf("%s %s%s\n", p, p+20, p+40);
       
       system("pause");
}
