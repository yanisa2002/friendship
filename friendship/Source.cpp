#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define SIZE 3

struct myfriend {
	char name[15];
	char nickname[10];
	short int age;
}fr[SIZE];

void input(int);
void report(void);
void line(void);
char confirm;
int main() {
	printf("Do you want to add friend  Y/N: ");
	scanf("%c", &confirm);
	if (confirm == 'Y' || confirm == 'y') {
		int i;
		for (i = 0; i < SIZE; i++) input(i);
		printf("--------------------------------");
		//getch();
		//clrscr();
		report();
	}
}

void input(int rec) {
	printf("Name     : "); scanf(" %[^\n]", fr[rec].name);
	printf("Nickname : "); scanf(" %[^\n]", fr[rec].nickname);
	printf("Age      : "); scanf("%u", &fr[rec].age);
	fflush(stdin);
	printf("\n");
}

void report(void) {
	printf("\n\t<< F R I E N D S H I P>>\n");
	line();
	printf("Seq. Name                Nickname   Age\n");
	line();
	for (int x = 0; x < SIZE; x++) printf("%2d. %-20s %-10s %2u\n", x + 1, fr[x].name, fr[x].nickname, fr[x].age);
	line();
	printf("\n");
}

void line(void) {
	for (int i = 1; i <= 62; i++) printf("-");
	printf("\n");
}