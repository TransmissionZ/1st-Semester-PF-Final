void border(){
	int i,j;
	 
	//Top border line...
	gotoxy(10,5); 
	for(j=0; j<200; j++)
		printf("%c", 223);
	 
	//Bottom border line... 
	gotoxy(10,60);
	for(j=0; j<=200; j++)
		printf("%c", 223);
	 
	//Left and Right border line...
	for(j=0; j<55; j++)
	{
		gotoxy(10,5+j);
		printf("%c",219);
	  
		gotoxy(210,5+j);
		printf("%c",219);
	}
	printf("\n");
}
