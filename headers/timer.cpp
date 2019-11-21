int timer(time_t start){
	static int tleft = 80;
	int tcnt, t;
	static int oldtleft = 0;
	if (tleft>=0){
		tcnt = clock();
		t = (tcnt-start)/CLOCKS_PER_SEC;
		tleft = 80 - t;
		if (tleft != oldtleft){
			ClearTimer();
			gotoxy(195,4);
			printf("%d seconds left!", tleft);
		}
		oldtleft = tleft;
	}
	else{
		return 1;
	}
}

