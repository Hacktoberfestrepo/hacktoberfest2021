#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,a;
    here:
    printf("WELCOME TO MY GAME HOW TO GET OUT \nPress 1 to start the game\nPress 2 for instructions\nPress 3 for Exit\n");
    scanf("%d",&b);
    if(b!=1 && b!=2 && b!=3){
            printf("\nINVALID OPTION\n");
        goto here;
    }
    else{
        if(b==1){
                start:
            game();
            printf("\n \nCONGRATULATIONS YOU WIN YOU GOT OUT\n \n");
            fflush(stdin);
            scanf("%d",&a);
            goto end;
        }
        else if(b==2){
            goto instruction;
        }
        else {
            goto end;
        }
    }
    instruction:
        printf("INSRUCTIONS\n(1) Enter first alphabet of your name.\n(2) Enter any of the alphabets displayed on your screen every time.\n(3) Their is only a particular way to get out. ");
        goto start;

    end:
        printf("\nEnter any key to exit");
}
game()
{
    char name;
    char one;
    printf("\n \nEnter 1st alphabet of your name  ");
    fflush(stdin);
    scanf("%c", &name);
    printf("\nHi! %c we are going in\n ", name);
    printf("now you are going to be PUZZLED!!!\nRemember their is only one perfect way\n ");
    loop1();
}
loop1(){
    char a;
printf("Enter any alphabet in every series\n");
again:
printf("p l c t\n");
fflush(stdin);
scanf("%c", &a);
if(a!='p' && a!='l' && a!='c' && a!='t'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='p'){
        loop2();
    }
    else if(a=='l'){
        loop3();
    }
    else if(a=='c'){
        loop4();
    }
    else {
    loop5();
    }
}
}
loop2(){
    char a;
again:
printf("b k u z\n");
fflush(stdin);
scanf("%c", &a);
if(a!='b' && a!='k' && a!='u' && a!='z'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='u'){
        loop6();
    }
    else if(a=='k'){
        loop7();
    }
    else if(a=='b'){
        loop8();
    }
    else {
    loop9();
    }
}
}
loop3(){
    char a;
again:
printf("l p m o\n");
fflush(stdin);
scanf("%c", &a);
if(a!='l' && a!='p' && a!='m' && a!='o'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='l'){
        loop4();
    }
    else if(a=='p'){
        loop5();
    }
    else if(a=='m'){
        loop9();
    }
    else {
    loop7();
    }
}
}
loop4(){
    char a;
again:
printf("t q r s\n");
fflush(stdin);
scanf("%c", &a);
if(a!='t' && a!='q' && a!='r' && a!='s'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='t'){
        loop5();
    }
    else if(a=='q'){
        loop6();
    }
    else if(a=='r'){
        loop7();
    }
    else {
    loop8();
    }
}
}
loop5(){
    char a;
again:
printf("p l q t\n");
fflush(stdin);
scanf("%c", &a);
if(a!='p' && a!='l' && a!='q' && a!='t'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='p'){
        loop6();
    }
    else if(a=='l'){
        loop4();
    }
    else if(a=='q'){
        loop8();
    }
    else {
    loop9();
    }
}
}
loop6(){
    char a;
again:
printf("l s z r\n");
fflush(stdin);
scanf("%c", &a);
if(a!='l' && a!='s' && a!='z' && a!='r'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='l'){
        loop8();
    }
    else if(a=='s'){
        loop9();
    }
    else if(a=='z'){
        loop11();
    }
    else {
    loop12();
    }
}
}
loop7(){
    char a;
again:
printf("v q r n\n");
fflush(stdin);
scanf("%c", &a);
if(a!='v' && a!='q' && a!='r' && a!='n'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='v'){
        loop12();
    }
    else if(a=='q'){
        loop6();
    }
    else if(a=='r'){
        loop14();
    }
    else {
    loop5();
    }
}
}
loop8(){
    char a;
again:
printf("n p z v\n");
fflush(stdin);
scanf("%c", &a);
if(a!='n' && a!='p' && a!='z' && a!='v'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='n'){
        loop6();
    }
    else if(a=='p'){
        loop5();
    }
    else if(a=='z'){
        loop4();
    }
    else {
    loop3();
    }
}
}
loop9(){
    char a;
again:
printf("z r l t\n");
fflush(stdin);
scanf("%c", &a);
if(a!='z' && a!='r' && a!='l' && a!='t'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='z'){
        loop2();
    }
    else if(a=='r'){
        loop8();
    }
    else if(a=='l'){
        loop6();
    }
    else {
    loop12();
    }
}
}
loop10(){
    char a;
again:
printf("l p r s\n");
fflush(stdin);
scanf("%c", &a);
if(a!='l' && a!='p' && a!='r' && a!='s'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='l'){
        loop13();
    }
    else if(a=='p'){
        loop11();
    }
    else if(a=='r'){
        loop6();
    }
    else {
    loop5();
    }
}
}
loop11(){
    char a;
again:
printf("l r z q\n");
fflush(stdin);
scanf("%c", &a);
if(a!='l' && a!='r' && a!='z' && a!='q'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='l'){
        loop4();
    }
    else if(a=='r'){
        loop2();
    }
    else if(a=='z'){
        loop10();
    }
    else {
    loop5();
    }
}
}
loop12(){
    char a;
again:
printf("v m u z\n");
fflush(stdin);
scanf("%c", &a);
if(a!='v' && a!='m' && a!='u' && a!='z'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='v'){
        loop6();
    }
    else if(a=='m'){
        loop7();
    }
    else if(a=='u'){
        loop4();
    }
    else {
    loop3();
    }
}
}
loop13(){
    char a;
again:
printf("c e k p\n");
fflush(stdin);
scanf("%c", &a);
if(a!='c' && a!='e' && a!='k' && a!='p'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='c'){
        loop4();
    }
    else if(a=='e'){
        loop15();
    }
    else if(a=='k'){
        loop5();
    }
    else {
    loop8();
    }
}
}
loop14(){
    char a;
again:
printf("n r t s\n");
fflush(stdin);
scanf("%c", &a);
if(a!='n' && a!='r' && a!='t' && a!='s'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='n'){
        loop6();
    }
    else if(a=='r'){
        loop2();
    }
    else if(a=='t'){
        loop11();
    }
    else {
    loop8();
    }
}
}
loop15(){
    char a;
again:
printf("d p n l\n");
fflush(stdin);
scanf("%c", &a);
if(a!='d' && a!='p' && a!='n' && a!='l'){
    printf("Enter a valid alphabet\n");
    goto again;
}
else{
    if(a=='p'){
        loop9();
    }
    else if(a=='l'){
        loop5();
    }
    else if(a=='n'){
        loop6();
    }
    else {}
}
}
// 1) p2 l3 c4 t5 2)u6 k7 u8 z9 3)l4 p5 m9 o7 4)t5 q6 r7 s8 5)p6 l4 q8 t9 6)l8 s9 z11 r12 7)v12 q6 r14 n5 8)n6 p5 z4 v3 9)z2 r8 l6 t12 10)l13 p11 r6 s5 11)l4 r2 z10 q5 12)v6 m7 u4 z3 13)c4 e15 k5 p8 14)n6 r2 t11 s8 15)dwin p9 n6 l5
