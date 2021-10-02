#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gam;
    printf("Welcome to my game MAZE\n");
    printf("This game is presented by TUSHAR GUPTA\n\n");
    printf("In this game you will enter into a maze and their is only a way to get out of it\n");
    printf("Use r for right, u for up, l for left and d for down to move\n");
    printf("Press any key to enter");
    fflush(stdin);
    scanf("%c",&gam);
    game();
}
game(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t| 0  |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    a();
}
}
f(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t  0                |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        e();
    }
    else{
        g();
    }

}}
ay(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t| 0  |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ao();
    }
    else{
        bi();
    }

}}
bd(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t| 0  |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        at();
    }
    else{
        bn();
    }

}
}
a(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t| 0                |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        k();
    }
    else if(where=='u'){
        game();
    }
    else{
        b();
    }
}
}
b(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|       0          |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        c();
    }
    else{
        a();
    }
}
}
c(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|           0      |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        b();
    }
    else{
        d();
    }
}
}
d(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|               0  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        n();
    }
    else{
        c();
    }
}
}
e(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  | 0 \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    f();
}
}
k(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t| 0  |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        u();
    }
    else{
        a();
    }
}
}
l(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    | 0      |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        v();
    }
    else{
        m();
    }
}
}
m(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |     0  |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    l();
}
}
n(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |  0     \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        x();
    }
    else if(where=='u'){
        d();
    }
    else{
        o();
    }
}
}
o(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |      0 \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        n();
    }
    else if(where=='d'){
        y();
    }
    else{
        p();
    }
}
}
u(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t| 0  |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ae();
    }
    else{
        k();
    }
}
}
v(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    | 0      |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        af();
    }
    else if(where=='u'){
        l();
    }
    else{
        w();
    }
}
}
w(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |     0  |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ag();
    }
    else{
        v();
    }
}
}
x(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        | 0  |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ah();
    }
    else{
        n();
    }
}
}
y(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    | 0 |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ai();
    }
    else{
        o();
    }
}
}
ae(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|  0     |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        u();
    }
    else{
        af();
    }
}
}
af(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|      0 |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        ae();
    }
    else{
        v();
    }
}
}
ag(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        | 0  |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        aq();
    }
    else{
        w();
    }
}
}
ah(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    | 0  |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ar();
    }
    else{
        x();
    }
}
}
ai(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    | 0 \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        y();
    }
    else{
        aj();
    }
}
}
ao(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t| 0      |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ay();
    }
    else{
        ap();
    }
}
}
ap(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|     0  |    |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
        ao();
}
}
aq(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        | 0  |    |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        ba();
    }
    else{
        ag();
    }
}
}
ar(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    | 0  |   |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        bb();
    }
    else{
        ah();
    }
}
}
as(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |_________________\n");
printf("\t\t\t\t\t\t\t|                  |   \n");
printf("\t\t\t\t\t\t\t|     ________     |___\n");
printf("\t\t\t\t\t\t\t|    |        |        \n");
printf("\t\t\t\t\t\t\t|    |    ____|        \n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|    |        |    |   |\n");
printf("\t\t\t\t\t\t\t|        |    |    |   \n");
printf("\t\t\t\t\t\t\t|________|    |    |___\n");
printf("\t\t\t\t\t\t\t|        |    |    | 0 |\n");
printf("\t\t\t\t\t\t\t|    ____|    |    |   |\n");
printf("Where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    bc();
}
}
g(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t       0           |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        f();
    }
    else if(where=='r'){
        h();
    }
    else {
        q();
    }
}}
h(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t            0      |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        g();
    }
    else {
        i();
    }
}}
i(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                0  |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        h();
    }
    else {
        s();
    }
}}
j(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   | 0 |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        endg();
    }
    else {
        t();
    }
}}
p(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t   0 |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    o();
}}
q(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |  0 |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        g();
    }
    else {
        aa();
    }
}}
r(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |  0     |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    s();
}}
s(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |      0 |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        i();
    }
    else {
        r();
    }
}}
t(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        | 0 |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        j();
    }
    else {
        ad();
    }
}}
z(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t| 0       |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    aa();
}}
aa(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|      0  |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        q();
    }
    else if(where=='d'){
        ak();
    }
    else {
        z();
    }
}}
ab(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |  0         |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        ac();
    }
    else {
        al();
    }
}}
ac(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |      0     |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        ad();
    }
    else {
        ab();
    }
}}
ad(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |          0 |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        t();
    }
    else {
        ac();
    }
}}
aj(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t  0       |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='l'){
        ai();
    }
    else {
        ak();
    }
}}
ak(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t       0  |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        aa();
    }
    else if(where=='d'){
        au();
    }
    else {
        aj();
    }
}}
al(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          | O  |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ab();
    }
    else {
        av();
    }
}}
am(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    | 0     |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='d'){
        aw();
    }
    else {
        an();
    }
}}
an(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |     0 |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    am();
}}
at(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t| 0  |    |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
bd();
}}
au(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    | 0  |    |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ap();
    }
    else {
        be();
    }
}}
av(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    | 0  |   |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        al();
    }
    else {
        bf();
    }
}}
aw(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    | 0 |   |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        am();
    }
    else {
        bg();
    }
}}
ax(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t __________________|   |\n");
printf("\t\t\t\t\t\t\t                   |   |\n");
printf("\t\t\t\t\t\t\t ____      ____    |   |\n");
printf("\t\t\t\t\t\t\t     |    |        |   |\n");
printf("\t\t\t\t\t\t\t ____|    |________|   |\n");
printf("\t\t\t\t\t\t\t|         |            |\n");
printf("\t\t\t\t\t\t\t|____     |     _______|\n");
printf("\t\t\t\t\t\t\t          |    |       |\n");
printf("\t\t\t\t\t\t\t ____     |    |    ___|\n");
printf("\t\t\t\t\t\t\t|    |    |    |   | 0 |\n");
printf("\t\t\t\t\t\t\t|    |    |    |   |   |\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    bh();
}}
az(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |  0      |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
ba();
}}
ba(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |      0  |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        aq();
    }
    else{
        az();
    }

}}
bb(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         | 0  |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ar();
    }
    else{
        bl();
    }

}}
bc(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |  0 |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        as();
    }
    else{
        bm();
    }

}}
bi(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t| 0  |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ay();
    }
    else{
        bs();
    }

}}
bj(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |  0           |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        bk();
    }
    else{
        bt();
    }

}}
bk(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |       0      |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        bl();
    }
    else{
        bj();
    }

}}
bl(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |            0 |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bb();
    }
    else{
        bk();
    }
}}
bm(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              | 0  \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bc();
    }
    else{
        bn();
    }
}}
bs(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t| 0  |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bi();
    }
    else{
        cc();
    }
}}
bt(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |  0                \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bj();
    }
    else if(where=='d'){
        cd();
    }
    else{
        bu();
    }
}}
bu(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |       0           \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        bv();
    }
    else{
        bt();
    }
}}
bv(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |            0      \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        bw();
    }
    else{
        bu();
    }
}}
bw(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                 0 \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        bx();
    }
    else{
        bv();
    }
}}
cc(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t| 0  |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bs();
    }
    else{
        cm();
    }
}}
cd(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    | 0  |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    bt();
}}
ce(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |  0           \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cf();
    }
    else{
        co();
    }
}}
cf(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |      0       \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cg();
    }
    else{
        ce();
    }
}}
cg(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |            0 \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                        \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        ch();
    }
    else{
        cf();
    }
}}
cm(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t| 0                      \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cn();
    }
    else{
        cc();
    }
}}
cn(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|      0                 \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        co();
    }
    else{
        cm();
    }
}}
co(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|           0            \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l' && where!='u'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cp();
    }
    else if(where=='l'){
        cn();
    }
    else{
        ce();
    }
}}
cp(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                 0      \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cq();
    }
    else{
        co();
    }
}}
cq(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t      _____               \n");
printf("\t\t\t\t\t\t\t|    |         |    |    |\n");
printf("\t\t\t\t\t\t\t|    |_________|    |    |\n");
printf("\t\t\t\t\t\t\t|    |              |    \n");
printf("\t\t\t\t\t\t\t|    |     _________|____\n");
printf("\t\t\t\t\t\t\t|    |                   \n");
printf("\t\t\t\t\t\t\t|    |     ______________\n");
printf("\t\t\t\t\t\t\t|    |    |              \n");
printf("\t\t\t\t\t\t\t|    |____|    __________\n");
printf("\t\t\t\t\t\t\t|                      0 \n");
printf("\t\t\t\t\t\t\t|________________________\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cr();
    }
    else{
        cp();
    }
}}
be(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    | 0  |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        au();
    }
    else{
        bo();
    }

}
}
bf(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    | 0  |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        av();
    }
    else{
        bp();
    }

}
}
bg(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    | 0  |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        aw();
    }
    else{
        bq();
    }

}
}
bh(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |  0 |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ax();
    }
    else{
        br();
    }

}
}
bn(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t  0       |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bd();
    }
    else if(where=='l'){
        bm();
    }
    else{
        bo();
    }

}
}
bo(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t       0  |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        be();
    }
    else if(where=='d'){
        by();
    }
    else{
        bn();
    }

}
}
bp(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          | 0       |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bf();
    }
    else if(where=='d'){
        bz();
    }
    else{
        bq();
    }

}
}
bq(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |       0 |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bg();
    }
    else{
        bp();
    }

}
}
br(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         | 0  |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bh();
    }
    else{
        cb();
    }

}
}
bx(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t  0  |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    bw();
}
}
by(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     | 0  |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bo();
    }
    else{
        ci();
    }

}
}
bz(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    | 0  |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bp();
    }
    else{
        cj();
    }

}
}
ca(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |  0      |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cb();
    }
    else{
        ck();
    }

}
}
cb(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |      0  |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        br();
    }
    else{
        ca();
    }

}
}
ch(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t  0       |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        ci();
    }
    else{
        cg();
    }

}
}
ci(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t       0  |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        by();
    }
    else{
        ch();
    }

}
}
cj(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          | 0  |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        bz();
    }
    else{
        ct();
    }

}
}
ck(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |  0 |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ca();
    }
    else{
        cu();
    }

}
}
cl(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |  0 |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                         |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='d'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    cv();
}
}
cr(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t  0                      |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        cs();
    }
    else{
        cq();
    }

}
}
cs(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t        0                |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='r' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='r'){
        ct();
    }
    else{
        cr();
    }

}
}
cv(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                      0  |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        cl();
    }
    else{
        cu();
    }

}
}
cu(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t                 0       |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        ck();
    }
    else if(where=='r'){
        cv();
    }
    else{
        ct();
    }

}
}
ct(){
    system("cls");
    char where;
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t|    |    |    |    |    |\n");
printf("\t\t\t\t\t\t\t          |         |    |\n");
printf("\t\t\t\t\t\t\t_____     |     ____|    |\n");
printf("\t\t\t\t\t\t\t     |    |    |         |\n");
printf("\t\t\t\t\t\t\t_____|    |    |     ____|\n");
printf("\t\t\t\t\t\t\t          |    |    |    |\n");
printf("\t\t\t\t\t\t\t__________|    |    |    |\n");
printf("\t\t\t\t\t\t\t             0           |\n");
printf("\t\t\t\t\t\t\t_________________________|\n");
printf("where to go r,l,u,d\n");
option:
fflush(stdin);
scanf("%c",&where);
if(where!='u' && where!='l' && where!='r'){
    printf("INVALID OPTION try again\n");
    goto option;
}
else{
    if(where=='u'){
        cj();
    }
    else if(where=='r'){
        cu();
    }
    else{
        cs();
    }

}
}
endg(){
    char a;
printf("\nCONGRATULATION YOU WIN THIS GAME\n");
printf("press any key to exit\n");
fflush(stdin);
scanf("%c",&a);
}
