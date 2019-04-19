#include "11.h"
#include <stdio.h>

int ab(int a){
    int b =0;
    if (a==b) printf("in ab");
    return 0;
}
int aa(int a){
    if (a==0) {

	for (;a<1;a++) printf("a==0");
	ab(a);
    }
    else if (a==1) printf("a==1");
    else if (a==2) printf("a==2");
    else if (a==3) printf("a==3");
    else if (a==4) printf("a==4");

    return 5;
}

