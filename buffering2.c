#include <stdio.h>

main(){
       int i;
       for(i=0; i<100; i++){
                printf("i=%d\n", i);
                fflush(stdout);
                sleep(1);
       }
}
