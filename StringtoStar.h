void StrToStar(char *ptr,int l, int e, int r){

	int x = e;
	int y = r;
	for (int n; n<= l;n++){

		switch (ptr[n]){
			case 'a':
				for (int j = x+3; j<=x+12; j++){
					gotoxy(j,y);
					j++;
					printf("*");
				}
				gotoxy(x+1,y+1);
				printf("*");
				gotoxy(x+13,y+1);
				printf("*");
				for (int j=y+2; j<=y+9;j++){
					gotoxy(x+0,j);
					printf("*");
				}
				for (int j=x+2; j<=x+12;j++){
					gotoxy(j,y+6);
					j++;
					printf("*");
				}				
					
				for (int j=y+2; j<=y+9;j++){
					gotoxy(x+14,j);
					printf("*");
				}
				x = x + 17;
				break;
			case 't':
				for (int j=x;j<=x+17;j++){
					gotoxy(j,y);
					printf("#");
					j++;
				}
				for (int j = y+1; j<=y+9; j++){
					gotoxy(x+8,j);
					printf("#");
				}
				x = x + 19;
				y=y;
				break;
			case 'y':
				for (int i = x, j = y; j<=y+6; i++,j++){
					gotoxy(i,j);
					printf("#");
				}
				for (int i = x+7,j=y+5; j!=y-1; i++,j--){
					gotoxy(i,j);
					printf("#");
				}
				for (int j = y+6; j<=y+9;j++){
					gotoxy(x+6, j);
					printf("#");
				}
				x = x + 15;
				y = y;
				break;
			case 'p':
				for (int j = y+1; j<=y+9; j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i = x; i<=x+10; i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int j = y+1; j<=y+4;j++){
					gotoxy(x+12, j);
					printf("#");
				}
				for (int i = x+10; i>=x+1; i--){
					gotoxy(i,y+5);
					printf("#");
					i--;
				}
				x = x + 15;
				break;
			case 'e':
				for (int j=y;j<=y+9;j++){
					gotoxy(x,j);
					printf("#");
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y);
					printf("#");
					i++;
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y+5);
					printf("#");
					i++;
				}
				for (int i=x;i<=x+10;i++){
					gotoxy(i,y+9);
					printf("#");
					i++;
				}
				x = x + 15;
				break;
		}
	}
}
