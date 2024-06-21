#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int a,b,c,d;
    char enter;
    char exita;
    printf("In This game you have to be aware of the mine\n");
    printf("learn the map shown to you below after you enter\n");
    printf("Mine is shown by the symbol '0'\n");
    printf("use 'r' for right, 'l' for left and 'u' for up\n \n");
    scanf("%c", &enter);
    float t;
    float timeout;
    float out;
    double total_time;
    clock_t start,end;
    start=clock();
    printf("\t\t\t\t*0  *\n");
    printf("\t\t\t\t* 0 *\n");
    printf("\t\t\t\t* 0 *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t* 00*\n");
    printf("\t\t\t\t*  0*\n");
    printf("\t\t\t\t*0  *\n");
    printf("\t\t\t\t* 0 *\n");
    printf("\t\t\t\t* 0 *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t  ^  \n");
    gap:
    timeout=clock();
        out=((double)(timeout-start))/CLOCKS_PER_SEC;
        if(out>1.5 && out<1.6){
            en();
            }
            else if(out>2){
                goto exit;
            }
            goto gap;
            exit:
                printf("press any key to exit");
                scanf("%c",&exita);
            }

en(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t* I *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        endg();
    }
    else if(choice =='l'){
        a();
    }
    else if(choice == 'r'){
        d();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }
}
a(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        b();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        en();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    b(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        c();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    c(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        endg();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
d(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        e();
    }
    else if(choice =='l'){
        en();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    e(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        f();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
f(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        g();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    g(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        endg();
    }
    else if(choice =='l'){
        h();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    h(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t* I *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        i();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        g();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    i(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t* I *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        endg();
    }
    else if(choice =='l'){
        j();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    j(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        k();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        i();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    k(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        l();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    l(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        m();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        o();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    m(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        n();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    n(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*I  *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        endg();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    o(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t* I *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        endg();
    }
    else if(choice =='l'){
        l();
    }
    else if(choice == 'r'){
        p();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    p(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        q();
    }
    else if(choice =='l'){
        o();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    q(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        r();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    r(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        s();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    s(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t*  I*\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        wing();
    }
    else if(choice =='l'){
        t();
    }
    else if(choice == 'r'){
        endg();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    t(){
    char choice;
    system("cls");
    printf("I guess you remember the map\n");
    printf("\t\t\t\t     \n");
    printf("\t\t\t\t* I *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    printf("\t\t\t\t*   *\n");
    up:
    printf("Enter your choice r,l,u\n");
    fflush(stdin);
    scanf("%c",&choice);
    if(choice== 'u'){
        wing();
    }
    else if(choice =='l'){
        endg();
    }
    else if(choice == 'r'){
        s();
    }
    else {
        printf("INVALID OPTION\n");
        goto up;
    }}
    endg(){
        char ab;
    printf("YOU LOST\n");
    printf("YOU STRUK BY A MINE\n");
    scanf("%c",&ab);
    }
    wing(){
        char ab;
    printf("CONGRATULATIONS YOU WIN\n");
    scanf("%c",&ab);
    }
