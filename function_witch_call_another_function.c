#include<stdio.h>
#include<string.h>


void find(int(*match)(char*)){
    int man_count = 5;
    char *man[] = {
    "Leonid: like sport, TV, dining",
    "Rustem: like art, movies, theater",
    "Vlad: like books, theater, art",
    "Shama: like trucks, sport and watch geyporno",
    "Ivan: like chess, working out and art"
    };
    int i;
    puts("Search result");
    puts("-------------------------------");
    for (i = 0; i < man_count; i++){
    if (match(man[i])){
            printf("%s\n", man[i]);
        }
    }
    puts("-------------------------------");
}


int first_function(char *s){
    return strstr(s,"sports") && !strstr(s,"geyporno");
}

int second_function(char *s){
    return strstr(s,"sport") || strstr(s,"working out");
}

int fird_function(char *s){
    return strstr(s, "art") && !strstr(s,"chess") && !strstr(s,"books");
}


int main(){
    find(first_function);
    find(second_function);
    find(fird_function);
    return 0;
}
