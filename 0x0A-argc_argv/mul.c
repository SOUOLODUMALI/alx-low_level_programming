#include <stdio.h>

int calcul(int nombreA,int nombreB){
	int temporaire=0;
	printf("nombreA = %d et nombreB = %d ",nombreA,nombreB);
	temporaire=nombreB;
	nombreB=nombreA;
	nombreA=temporaire;
		printf("nombreA= %d et nombreB= %d",nombreA,nombreB);
	
}

int main (void){
	int nombreA=15;
	int nombreB=20;
	int calcul(int nombreA,int nombreB);
//	printf("nombreA= %d et nombreB=%u",nombreA,nombreB);
	return 0;
}
