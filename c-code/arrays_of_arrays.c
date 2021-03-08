#include <stdio.h>
#include <string.h>
/*char tracks[][80] = {
"I left my heart in Harvard Med School",
"Newark, Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};
*/
int main(){
char s0[] = "dysfunctional";
char s1[] = "fun";
if (strstr(s0,s1)){
    printf("I found the %s, in %s",s1,s0);
}
else{
    printf("Nothing simple at all")
}
return 0;
}
