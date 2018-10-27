#include "filesys.h"
#include <stdio.h>

int main(){
	//format();
	//writedisk("virtualdiskD3_D1");
	
	/*
	char *test = "ABC";
	
	int i = 0;
	while(test[i] != '\0'){
		i++;
	}
	printf("The string was %d characters long\n",i);
	MyFILE * file = myfopen("testtext.txt","w");
	printf("Block Number: %d\n",(*file).blockno);
	(*file).blockno++;
	printf("Block Number: %d\n",(*file).blockno);
	*/
	
	char fileContents [4*BLOCKSIZE];
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int findex, aindex = 0;
	
	while(findex < 4*BLOCKSIZE){
		aindex = 0;
		while(alpha[aindex] != '\0' && findex < 4*BLOCKSIZE){
			fileContents[findex] = alpha[aindex];
			aindex++;
			findex++;
		}
	}
	
	
	return 0;
}
