#include <stdio.h>
#include <string.h>

void wordsfiling1(char ptr[][8]){
	FILE *wordsfp = fopen("words/level1.txt", "r");
	if (wordsfp == NULL){
		printf("File Not Opened, Restart Game!");
	}
	int i;
	while(fscanf(wordsfp, "%s", ptr[i]) == 1){
	//	printf("%s", ptr[i]);
		i++;
	}
	fclose(wordsfp);
	fflush(stdin);
}
main(){
	char words[25][8];
	wordsfiling1(words);
	for (int i=0; i<25; i++){
		printf("%s\n", words[i]);
	}
}
