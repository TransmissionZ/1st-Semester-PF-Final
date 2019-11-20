void wordsfiling1(char ptr[][8]){
	FILE *fp = fopen("G:/My Drive/FAST!!/1st Semester/Assignments/Programming Fundamentals/Final Project/Haroon/headers/words/level1.txt", "r");
	if (fp == NULL){
		gotoxy(15,15);
		printf("File Not Opened, Restart Game!");
		return;
	}
	int i = 0;
	while(fscanf(fp, "%s", ptr[i]) == 1){
		i++;
	}
	fclose(fp);
	fflush(stdin);
}
