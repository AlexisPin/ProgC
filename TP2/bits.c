#include <stdio.h>  


int main(){

    int d = 8;

    int mask1 = 524288;
    int mask2 = 8;

    ((d & mask1) && (d & mask2)) ? printf("1") : printf("0");

    return 0;
}

