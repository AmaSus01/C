#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
};

void find_track(char search_for[]) {
	int i = 0;

	// заменим '\n' на '\0'
	while (search_for[i] != '\n')
	{
		// идем по строке пока не дойдем до '\n'
		i++;
	}
	// здесь i равен позиции символа '\n' в строке
	search_for[i] = '\0';

	for (i = 0; i < 5; i++) {
		if (strstr(tracks[i], search_for))
			printf("Track %i: '%s'\n", i, tracks[i]);
	}
}

int main() {
	char search_for[80];
	printf("Search for: ");
	fgets(search_for, 80, stdin);
	/*
	* Здесь, если ты ввел "heart", то в 
	* search_for будет равен "heart\n", т.к. 
	* fgets также записывает и перенос строки
	*/
	find_track(search_for);
	return 0;
}