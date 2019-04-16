#include <stdio.h>
#include <string.h>
#include "11.h"
int global=1;
void func (int i){
    if (i==0) global=0;
    else if (i==1){
        global +=2;
        global *=2;
    }
    else{
    	global*=3;
    }
}
void func2(char* str){
	char s[20];
	strcpy(s,str);
	global +=10000;
	func(5);
}
void func1(int i){
    
	while(i<5){
		i++;
		global/=2;
	}
}
int main()
{
	
	UINT8 buf[0x200];
	int mark = 20;
    scanf("%s",buf);
    switch(buf[0]){
    case '0':
        func(0);
	aab(8);
        break;
    case '1':
	aa(1);
        func(1);
        break;
    case '2':
        func(2);
        break;
    case '3':
        func2((char*)buf);
    default:
        func1(3);
    }
	return 0;

}


