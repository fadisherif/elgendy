#include <stdio.h>
#include <stdlib.h>
struct info{
    char user_name[30];
    char password[20];
};
int main()
{
    char Reg_uname[30];
    char Reg_pas[20];
    char Log_uname[30];
    char Log_pas[20];
    struct info s1;

    //Registration
    printf("Registr\n");
    printf("************\n");
    printf("Enter username : ");
    scanf("%s",Reg_uname);
    strcpy(s1.user_name,Reg_uname);
    printf("\nEnter password : ");
    scanf("%s",Reg_pas);
    strcpy(s1.password,Reg_pas);
    printf("**********************\n\n");

    //login
    printf("login\n");
    printf("*************\n");
    printf("Enter username : ");
    scanf("%s",Log_uname);
    printf("\nEnter password : ");
    scanf("%s",Log_pas);
    /*printf(s1.user_name);
    printf(s1.password);
    printf("----");
    printf(Log_uname);
    printf(Log_pas);*/
    if(Log_uname == s1.user_name && Log_pas == s1.password){
        printf("Done");
    } else {
        printf("incorrect Username or Password");
        }
    return 0;
}
