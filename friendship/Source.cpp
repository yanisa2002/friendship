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

int main() {
	int i;
	for (i = 0; i < SIZE; i++) input(i);
	printf("--------------------------------");
	getch();
	report();
}

void input(int rec) {
	printf("Name     :"); gets_s(fr[rec].name);
	printf("Nickname :"); gets_s(fr[rec].nickname);
	printf("Age      :"); scanf_s("%u", &fr[rec].age);
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