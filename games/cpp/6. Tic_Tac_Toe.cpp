#include <stdio.h>
#include <stdlib.h>

int main()
{
    char enter;
    char a,b,c,d,e,f,g,h,i;
    a=' ';
    b=' ';
    c=' ';
    d=' ';
    e=' ';
    f=' ';
    g=' ';
    h=' ';
    i=' ';
    printf("\t\t\t\t\t\t\t\t  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t  %c II %c  II  %c  \n",a,b,c);
    printf("Welcome to my game TIC TAC TOE\n");
    printf("Player 1 has 'o' and player 2 has 'x'\n");
    printf("You have to enter index number like 11,23,31 etc. \n");
    printf("Index is column vs row\n");
    printf("Press enter to start the game\n");
    scanf("%c",&enter);
    game();
}
game(){
system("cls");
int choice;
char a,b,c,d,e,f,g,h,i;
    a=' ';
    b=' ';
    c=' ';
    d=' ';
    e=' ';
    f=' ';
    g=' ';
    h=' ';
    i=' ';
    ag:
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
    printf("Enter your choice p1\n");
     again:
    scanf("%d",&choice );
    if( choice != 11 && choice != 12 && choice != 13 && choice != 21 && choice != 22 & choice != 23 && choice != 31 && choice != 32 && choice != 33){
        printf("\nYour choice is INVALID Enter again\n");
        goto again;
    }
    else if(choice == 11){if(a==' '){
        a11(&a);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 12){if(b==' '){
        a11(&b);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 13){
        if(c==' '){
        a11(&c);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 21){
        if(d==' '){
        a11(&d);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 22){
        if(e==' '){
        a11(&e);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 23){
        if(f==' '){
        a11(&f);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 31){
        if(g==' '){
        a11(&g);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 32){
        if(h==' '){
        a11(&h);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 33){
        if(i==' '){
        a11(&i);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    if(a=='o' && b=='o' && c=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(g=='o' && h=='o' && i=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(d=='o' && e=='o' && f=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='o' && e=='o' && i=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='o' && e=='o' && g=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='o' && d=='o' && g=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(b=='o' && h=='o' && e=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='o' && f=='o' && i=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='x' && b=='x' && c=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(g=='x' && h=='x' && i=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(d=='x' && e=='x' && f=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='x' && e=='x' && i=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='x' && e=='x' && g=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='x' && d=='x' && g=='x' ){
        printf("Player 2 wins\n");
       printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(b=='x' && h=='x' && e=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='x' && f=='x' && i=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
    printf("Enter your choice p2\n");
     again2:
    scanf("%d",&choice );
    if( choice != 11 && choice != 12 && choice != 13 && choice != 21 && choice != 22 & choice != 23 && choice != 31 && choice != 32 && choice != 33){
        printf("\nYour choice is INVALID Enter again\n");
        goto again2;
    }
    else if(choice == 11){
        if(a==' '){
        a12(&a);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 12){
        if(b==' '){
        a12(&b);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 13){
        if(c==' '){
        a12(&c);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice ==21){
        if(d==' '){
        a12(&d);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 22){
        if(e==' '){
        a12(&e);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 23){
        if(f==' '){
        a12(&f);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 31){
        if(g==' '){
        a12(&g);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 32){
        if(h==' '){
        a12(&h);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    else if(choice == 33){
        if(i==' '){
        a12(&i);}
        else {printf("Invalid try another one");
        goto again;
        }
    }
    if(a=='o' && b=='o' && c=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(g=='o' && h=='o' && i=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(d=='o' && e=='o' && f=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='o' && e=='o' && i=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='o' && e=='o' && g=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='o' && d=='o' && g=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(b=='o' && h=='o' && e=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='o' && f=='o' && i=='o' ){
        printf("Player 1 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='x' && b=='x' && c=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(g=='x' && h=='x' && i=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(d=='x' && e=='x' && f=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='x' && e=='x' && i=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='x' && e=='x' && g=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(a=='x' && d=='x' && g=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(b=='x' && h=='x' && e=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }
    else if(c=='x' && f=='x' && i=='x' ){
        printf("Player 2 wins\n");
        printf("\t\t\t\t\t\t\t\t   1     2     3 \n");
    printf("\t\t\t\t\t\t\t\t1  %c II %c  II  %c  \n",a,b,c);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t2  %c II %c  II  %c  \n",d,e,f);
    printf("\t\t\t\t\t\t\t\t----------------\n");
    printf("\t\t\t\t\t\t\t\t3  %c II %c  II  %c  \n",g,h,i);
        goto endg;
    }

    delay(1);
    goto ag;
    endg:
        char exita;
        printf("Press any key to exit");
        scanf("%c",&exita);
}
a11(char *o){
  *o='o';
}
a12(char *a){
*a='x';
}
