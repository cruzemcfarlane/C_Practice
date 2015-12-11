#include <stdio.h>

main(){
       int i;
       for(i=0; i<5; i++){
                printf("i=%d ", i);
                sleep(1000);
       }
       printf("\n");
       system("pause");
}
