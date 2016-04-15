#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int x;
int y=0;
int pbitzahl;
int zahlpb;


void pbit(int temp[],int lang){
	int anz;
	int i,j,p,f;
	anz=lang+zahlpb;
	int final[anz];
	int ok=1;
	p=0;
	for(i=0;i<lang;i++){
		f=1;
		for(j=0;j<zahlpb;j++){
			if((p+1)==f){
				ok=0;
				final[p]=0;
				p++;
			}
			f=f*2;
		}
		final[p]=temp[i];
		p++;
	}
	i=0;
	j=0;
	while(i<(anz-7)){
		printf("| ");
		j=0;
		while(j<7){
			printf("%i ",final[i]);	
			i++;
			f=1;
			while(f<anz){
				if(i==f){
					j--;
				}
				
				f=f*2;
			}
			j++;
		}
		printf("|\n");	
	}
	

	
}


void buchstaben_in_dual(int dec,int lang,int temp[]){
	int i,rest,zahl,o;
	int laenge = (lang*7);
	o=(7*y);
	o--;

		for(i=0;i<7;i++){
			if(i==0){
				rest=dec%2;
				zahl=dec/2;
			}
			else{
				rest=zahl%2;
				zahl=zahl/2;
				
			}
				temp[o]=rest;
				o--;
		}
		
		
		if(y==(laenge/7)){
			printf("\n");
			i=0;
			pbit(temp,laenge);
			
		}
	}
	


int main()
{
	
	system("color 7");
	char wort[200000];
	int dec,i,lang1;

		system("cls");
		printf("Geben sie ein Buchstebe ein :");
		scanf("%[^\n]s",&wort);
		lang1 = strlen(wort);
		i=1;
		

	zahlpb = 1;
	printf("\n");
	while(i<(lang1*7)){
		i= i*2; 
		zahlpb++;
	}
	
	pbitzahl = i;
	int dual[lang1*10];
	printf("Anzahl der Buchstaben: = %i",lang1);
	printf("\n\n>>\n>>\n>>\n");
	for(i=0;i<lang1;i++){
		y++;
		dec = wort[i];
		buchstaben_in_dual(dec,lang1,dual);
	}
	printf("\n\n>>\n>>\n>>\n\nENDE\n");


return 0;
}
