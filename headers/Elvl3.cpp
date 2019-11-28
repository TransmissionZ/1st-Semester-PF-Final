int Elvl3(int *s){
	char words[25][13];
	wordsfiling1(words, (char *)"level3.txt");
	time_t start;
	int j = 0;
	char ch;
	int d, z, l, l2, l3, t, i1, k1, i2, k2;
	int i,k, u = 1, b = 2;
	char typed[10] = ".";
	start = clock();
		l = strlen(words[j]);
		l2 = strlen(words[u]);
		l3 = strlen(words[b]);
		for (i=0, k=0, i1 = 0, k1= 0, i2 =0, k2=0; ((i<50) && (i1<50) && (i2<50));i++,k++,k++,i1++,k1++,k1++, i2++,k2++,k2++){
			if (j >= 25 || u >= 25 || b>= 25)
				break;
			t = timer(start);
			if (t==1)
				break;
			
			gotoxy(11+k, 6+i);
			puts(words[j]);
			gotoxy(50+k1, 6+i1);
			puts(words[u]);
			gotoxy(100+k2, 6+i2);
			puts(words[b]);
			Sleep(200);
			ClearWord(11 + k, 6+i);		
			Clear1Word(50 + k1, 6+i1);
			Clear1Word(100 + k2, 6+i2);
			
 			if (kbhit()){
 				gotoxy(20+z,58);
	     		ch = getche();
	     		if (ch == '`')
	     			return 0;
	     		if (words[j][z] == ch){
					typed[z] = ch;
					z++;
				}
				else if (words[u][z] == ch){
					typed[z] = ch;
					z++;
				}
				else if (words[b][z] == ch){
					typed[z] = ch;
					z++;
				}
				else{
					gotoxy(80,58);
					printf("WRONG LETTER! ENTER WHOLE WORD AGAIN!");
					z=0;
					memset(typed, 0, sizeof(typed));
					ClearWord(20, 58);
				}
			}
			if (z == l || z == l2 || z == l3){
				if ((strcmp(typed,words[j]) == 0)){
					ClearWord(80,58);
					ClearWord(100,58);
					ClearWord(120, 58);
					
					gotoxy(100,58);
					printf("Correct!");
					
					if (j < u && j < b){
						if (u > b)
							j = u + 1;
						else
							j = b + 1;	
					}
					else if ((j < u && j > b) || (j > u && j < b)){
						if (u > b)
							j = u + 1;
						else
							j = b + 1;	
					}
					else if (j > u && j > b){
						j++;
					}

					l = strlen(words[j]);
					(*s)++;
					//typed[0] = '\0';
					memset(typed, 0, sizeof(typed));
					
					z = 0;
					ClearWord(11+k, 6+i);
					ClearWord(20,58);
					i = 0;
					k = 0;
				}
				else if (strcmp(typed,words[u]) == 0){
					ClearWord(80,58);
					ClearWord(100,58);
					ClearWord(120, 58);
				
					gotoxy(100,58);
					printf("Correct!");
					if (u < j && u < b){
						if (j > b)
							u = j + 1;
						else
							u = b + 1;	
					}
					else if ((u < j && u > b) || (u > j && u < b)){
						if (j > b)
							u = j + 1;
						else
							u = b + 1;	
					}
					else if (u > j && u > b){
						u++;
					}
					
					l2 = strlen(words[u]);
					(*s)++;
					//typed[0] = '\0';
					memset(typed, 0, sizeof(typed));
					z = 0;
					Clear1Word(50+k1, 6+i1);
					ClearWord(20,58);
					i1 = 0;
					k1 = 0;
					
				}
				else if (strcmp(typed,words[b]) == 0){
					ClearWord(80,58);
					ClearWord(100,58);
					ClearWord(120, 58);
				
					gotoxy(100,58);
					printf("Correct!");
					if (b < u && b < j){
						if (u > j)
							b = u + 1;
						else
							b = j + 1;	
					}
					else if ((b < u && b > j) || (b > u && b < j)){
						if (u > j)
							b = u + 1;
						else
							b = j + 1;	
					}
					else if (b > u && b > j){
						b++;
					}
					
					l3 = strlen(words[u]);
					(*s)++;
					//typed[0] = '\0';
					memset(typed, 0, sizeof(typed));
					z = 0;
					Clear1Word(100+k2, 6+i2);
					ClearWord(20,58);
					i2 = 0;
					k2 = 0;
					
				}
			}
			else if (i >= 49 || i1 >= 49){
				gotoxy(90,30);
				printf("LEVEL 3 FAILED");
				gotoxy(100,31);
				printf("Retry? (1/0)");
				d = getch();
				d = d-'0';
				ClearGame();
				if (d==1){
					Elvl3(s);
				}
				else{
					mainmenu();
				}
			}
		}
	//	if (t == 1)
	//		break;
	//}
	if (j >= 24){
		gotoxy(100,31);
		printf("Congrats!");
		gotoxy(100,32);
		printf("LEVEL 3 COMPLETED!");
		gotoxy(100,33);
		printf("Moving to hard level 1......");
		Sleep(10000);
		ClearGame();
		return 1;
	}
	else{
		gotoxy(100,30);
		printf("LEVEL 3 FAILED");
		gotoxy(100,31);
		printf("Retry? (1/0)");
		d = getch();
		d = d-'0';
		ClearGame();
		if (d==1){
			Elvl3(s);
		}
		else{
			mainmenu();
		}
	}
	
}
