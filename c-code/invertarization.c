#include <stdio.h>
#include <string.h>
typedef enum { false, true } bool;
struct Common_info {
    int cabinet_number;
    char  fname[20],lname[20];
    int id_computer;
    int additional_monitor;
    bool mouse;
    bool keyboard;
};
void stdout_info(struct Common_info info){
    printf( "Cabinet_number : %d\n", info.cabinet_number);
    printf( "First name : %s, Second name : %s\n", info.fname, info.lname);
    printf( "ID computer : %d\n", info.id_computer);
    printf( "Additional monitor : %d\n", info.additional_monitor);
    printf( "Mouse : %d\n", info.mouse);
    printf( "Keyboard : %d\n", info.keyboard);
}
int main(){
    struct Common_info info;
    info.cabinet_number = 8;
    strcpy (info.fname,"Ivan");
    strcpy (info.lname,"Hahanov");
    info.id_computer = 43256789;
    info.additional_monitor = 2;
    info.mouse = true;
    info.keyboard = true;
    stdout_info(info);
return 0; 
}
