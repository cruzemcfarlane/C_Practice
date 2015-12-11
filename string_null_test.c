#include <stdio.h>
#include <string.h>

main(){
       char love[] = "your";
       int *pt = love[5];
       if(pt==34)
                  printf("Yes\n");
       else
                  printf("No\n%d %d %d\n", sizeof(love), strlen(love), love[5]);
       system("pause");
}
