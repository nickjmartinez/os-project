#include "filesys.h"
#include <stdio.h>

int main(){
	format();
	//writedisk("virtualdiskD3_D1");
	
	char *test = "ABC";
	
	int i = 0;
	while(test[i] != '\0'){
		i++;
	}
	printf("The string was %d characters long\n",i);
	//MyFILE * file = myfopen("testtext.txt","w");
	//printf("Block Number: %d\n",(*file).blockno);
	return 0;
}
