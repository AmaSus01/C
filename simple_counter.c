#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct 
{
    int width;
    int height;
} rectangle;


int compare_totals(const void* total_a, const void* total_b){
    int a = *(int*) total_a;
    int b = *(int*) total_b;
    return a - b;
}

int compare_totals_desc(const void* total_a, const void* total_b){
    int a = *(int*) total_a;
    int b = *(int*) total_b;
    return b - a;
}

int compare_area(const void* a, const void* b){
    rectangle* ra = (rectangle*)a;
    rectangle* rb = (rectangle*)b;
    int area_a = (ra->width * ra->height);
    int area_b = (rb->width * rb->height);
    return area_a - area_b;
}

int compare_area_desc(const void* a, const void* b){
    return compare_area(b,a);
}

int compare_names(const void* a, const void* b){
    char** sa = (char**)a;
    char** sb = (char**)b;
    return strcmp(*sa, *sb);
}

int compare_names_desc(const void* a, const void* b){
    return compare_names(a,b);
}

int main(){
int totals[] = {1324,332433,68687,33890,134,66788,124,456,234};
int i;
qsort(totals, 9, sizeof(int), compare_totals_desc);
puts("This are the totals in the order:");
for (i = 0; i<9;i++){
    printf("Total=%i\n", totals[i]);
}
char *names[] = {"Ivan","Shama", "Ama", "Vladidos", "Leonid"};
qsort(names, 5, sizeof(char*), compare_names);
puts("This are the names in order:");
for (i = 0; i<5;i++){
    printf("%s\n", names[i]);
}
return 0;
}
