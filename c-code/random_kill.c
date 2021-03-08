#include <stdio.h>

int main(){
    char *answer_1 = "Yes";
    char *answer_2 = "No";
    char masked_raider[]="Alive!";
    char *bob = masked_raider;
    printf("Masked raider is %s, Bob is %s\n", masked_raider, bob);
    if (answer_1){ 
        masked_raider[0]='D';
        masked_raider[1]='E';
        masked_raider[2]='A';
        masked_raider[3]='D';
        masked_raider[4]='!';
    }
    printf("Masked raider is %s, Bob is %s\n", masked_raider, bob);
    return 0;
}