void wordsfiling1(char words1[25][6]){
	FILE *wordsfp = fopen("words/testwords.txt", "r");
	if (wordsfp == NULL){
		printf("File Not Opened, Restart Game!");
	}
	int i;
	char ch[6];
	while(fscanf(wordsfp, " %6s", ch)==1){
		strcpy(words1[i], ch);
		i++;
	}
	for (int i=0; i<strlen(words1[i]); i++){
		puts(words1[i]);
	}
	fclose(wordsfp);
	fflush(stdin);
}
