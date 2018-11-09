#include "filesys.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
	format();
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
	
	MyFILE * file;
	file = myfopen("test.txt", "w");

	for(int i = 0; i < 4*BLOCKSIZE; i++){
		myfputc(fileContents[i], file);
	}
	myfclose(file);

	writedisk("virtualdiskC3_C1");
	return 0;
}
