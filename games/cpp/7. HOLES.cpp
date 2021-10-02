#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    char z;
    system("color a1");
    system("cls");
    printf("Hello and welcome to my game\n");
    printf("\n\n \t\t\t\t\t HOLES.\n\n\n");
    printf("Made by Tushar Gupta\n");
    printf("\n\n WAIT LOADING.....\n");
    delay(4000);
    system("cls");
    printf("Enter your choice\n");
    printf("1.INSTRUCTIONS\n2.START\n");
    again:
    scanf("%d",&a);
    if(a==1){
        goto instruct;
    }
    else if(a==2){
        start();
    }
    else {
        printf("\nINVALID CHOICE ENTER AGAIN\n");
        goto again;
    }
    instruct:
            printf("The instruction goes as follows\n");
            printf("1. you have get out from the maze\n");
            printf("2. Use 'w' key for up, 's' key for down, 'd' key for right, 'a' key for left\n");
            printf("3. After every turn some holes appear if you fall into it you lose\n");
            printf("4. It's your luck if you can win or not\n");
            printf("\n\nGOOD LUCK\n\n");
            printf("Enter any key to play\n");
            z=getche();
            start();
}
int start(){
system("cls");
int a,b,c,d;
char e;
char arr[10][10];
for(a=0;a<10;a++){
        for(b=0;b<10;b++){
    arr[a][b]='o';
}}
printf("\t\t\t\t\t __________________________________________________\n");
printf("\t\t\t\t\t| %c  | %c    %c     %c    %c    %c  | %c    %c    %c    %c  |\n",arr[0][0],arr[0][1],arr[0][2],arr[0][3],arr[0][4],arr[0][5],arr[0][6],arr[0][7],arr[0][8],arr[0][9]);
printf("\t\t\t\t\t|    |     _______________     |     __________    |\n");
printf("\t\t\t\t\t| %c    %c  | %c     %c  | %c    %c  | %c  | %c    %c    %c  |\n",arr[1][0],arr[1][1],arr[1][2],arr[1][3],arr[1][4],arr[1][5],arr[1][6],arr[1][7],arr[1][8],arr[1][9]);
printf("\t\t\t\t\t|_________|          |     ____|    |    __________|\n");
printf("\t\t\t\t\t| %c    %c  | %c   | %c    %c  | %c    %c  | %c    %c    %c  |\n",arr[2][0],arr[2][1],arr[2][2],arr[2][3],arr[2][4],arr[2][5],arr[2][6],arr[2][7],arr[2][8],arr[2][9]);
printf("\t\t\t\t\t|         |     |_________|     ____|_________     |\n");
printf("\t\t\t\t\t| %c  | %c    %c   | %c    %c    %c  | %c    %c    %c  | %c  |\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3],arr[3][4],arr[3][5],arr[3][6],arr[3][7],arr[3][8],arr[3][9]);
printf("\t\t\t\t\t|    |     _____|     _________|     ____     |    |\n");
printf("\t\t\t\t\t| %c  | %c    %c   | %c    %c  | %c    %c  | %c  | %c    %c  |\n",arr[4][0],arr[4][1],arr[4][2],arr[4][3],arr[4][4],arr[4][5],arr[4][6],arr[4][7],arr[4][8],arr[4][9]);
printf("\t\t\t\t\t|    |__________|____     |     ____|    |_________|\n");
printf("\t\t\t\t\t| %c    %c    %c     %c  | %c  | %c    %c    %c    %c    %c  |\n",arr[5][0],arr[5][1],arr[5][2],arr[5][3],arr[5][4],arr[5][5],arr[5][6],arr[5][7],arr[5][8],arr[5][9]);
printf("\t\t\t\t\t|_______________     |    |_________     __________|\n");
printf("\t\t\t\t\t| %c    %c    %c     %c  | %c    %c  | %c    %c    %c    %c  |\n",arr[6][0],arr[6][1],arr[6][2],arr[6][3],arr[6][4],arr[6][5],arr[6][6],arr[6][7],arr[6][8],arr[6][9]);
printf("\t\t\t\t\t|     _______________|_____    |______________     |\n");
printf("\t\t\t\t\t| %c  | %c    %c     %c    %c    %c  | %c    %c  | %c    %c  |\n",arr[7][0],arr[7][1],arr[7][2],arr[7][3],arr[7][4],arr[7][5],arr[7][6],arr[7][7],arr[7][8],arr[7][9]);
printf("\t\t\t\t\t|    |      ________      _____|     ____|     ____|\n");
printf("\t\t\t\t\t| %c  | %c    %c     %c    %c |  %c    %c    %c    %c  | %c  |\n",arr[8][0],arr[8][1],arr[8][2],arr[8][3],arr[8][4],arr[8][5],arr[8][6],arr[8][7],arr[8][8],arr[8][9]);
printf("\t\t\t\t\t|    |_____     _________|     _______________|    |\n");
printf("\t\t\t\t\t| %c    %c    %c  |  %c    %c    %c    %c    %c    %c    %c  |\n",arr[9][0],arr[9][1],arr[9][2],arr[9][3],arr[9][4],arr[9][5],arr[9][6],arr[9][7],arr[9][8],arr[9][9]);
printf("\t\t\t\t\t|______________|______________________________     |\n");
printf("\n\n\nUse w for up,a for left,d for right,s for down\n");
printf("Press enter to start the game\n");
e=getche();
game();
return 0;
}
game(){

int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
char move;
char name[100];
printf("Enter your name\n");
scanf("%s",&name);
n=0;
o=0;
while(name[n]!='\0'){o=o+name[n]; n++;}
o=o%100;
for(p=0;p<o;p++){
    rand();
}
d=0;e=0;
char arr[10][10];
for(a=0;a<10;a++){
        for(b=0;b<10;b++){
    arr[a][b]=' ';
}}
system("cls");
arr[0][0]='I';
l=0;m=0;
ga:
    system("cls");
    i=0;
    for(j=0;j<10;j++){
            tus:
        h=rand();
        g=rand();
        h=h%10;
        g=g%10;
        if(h==0 && g==0){goto tus;}
        arr[h][g]='o';
    }
printf("\t\t\t\t\t __________________________________________________\n");
printf("\t\t\t\t\t| %c  | %c    %c     %c    %c    %c  | %c    %c    %c    %c  |\n",arr[0][0],arr[0][1],arr[0][2],arr[0][3],arr[0][4],arr[0][5],arr[0][6],arr[0][7],arr[0][8],arr[0][9]);
printf("\t\t\t\t\t|    |     _______________     |     __________    |\n");
printf("\t\t\t\t\t| %c    %c  | %c     %c  | %c    %c  | %c  | %c    %c    %c  |\n",arr[1][0],arr[1][1],arr[1][2],arr[1][3],arr[1][4],arr[1][5],arr[1][6],arr[1][7],arr[1][8],arr[1][9]);
printf("\t\t\t\t\t|_________|          |     ____|    |    __________|\n");
printf("\t\t\t\t\t| %c    %c  | %c   | %c    %c  | %c    %c  | %c    %c    %c  |\n",arr[2][0],arr[2][1],arr[2][2],arr[2][3],arr[2][4],arr[2][5],arr[2][6],arr[2][7],arr[2][8],arr[2][9]);
printf("\t\t\t\t\t|         |     |_________|     ____|_________     |\n");
printf("\t\t\t\t\t| %c  | %c    %c   | %c    %c    %c  | %c    %c    %c  | %c  |\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3],arr[3][4],arr[3][5],arr[3][6],arr[3][7],arr[3][8],arr[3][9]);
printf("\t\t\t\t\t|    |     _____|     _________|     ____     |    |\n");
printf("\t\t\t\t\t| %c  | %c    %c   | %c    %c  | %c    %c  | %c  | %c    %c  |\n",arr[4][0],arr[4][1],arr[4][2],arr[4][3],arr[4][4],arr[4][5],arr[4][6],arr[4][7],arr[4][8],arr[4][9]);
printf("\t\t\t\t\t|    |__________|____     |     ____|    |_________|\n");
printf("\t\t\t\t\t| %c    %c    %c     %c  | %c  | %c    %c    %c    %c    %c  |\n",arr[5][0],arr[5][1],arr[5][2],arr[5][3],arr[5][4],arr[5][5],arr[5][6],arr[5][7],arr[5][8],arr[5][9]);
printf("\t\t\t\t\t|_______________     |    |_________     __________|\n");
printf("\t\t\t\t\t| %c    %c    %c     %c  | %c    %c  | %c    %c    %c    %c  |\n",arr[6][0],arr[6][1],arr[6][2],arr[6][3],arr[6][4],arr[6][5],arr[6][6],arr[6][7],arr[6][8],arr[6][9]);
printf("\t\t\t\t\t|     _______________|_____    |______________     |\n");
printf("\t\t\t\t\t| %c  | %c    %c     %c    %c    %c  | %c    %c  | %c    %c  |\n",arr[7][0],arr[7][1],arr[7][2],arr[7][3],arr[7][4],arr[7][5],arr[7][6],arr[7][7],arr[7][8],arr[7][9]);
printf("\t\t\t\t\t|    |      ________      _____|     ____|     ____|\n");
printf("\t\t\t\t\t| %c  | %c    %c     %c    %c |  %c    %c    %c    %c  | %c  |\n",arr[8][0],arr[8][1],arr[8][2],arr[8][3],arr[8][4],arr[8][5],arr[8][6],arr[8][7],arr[8][8],arr[8][9]);
printf("\t\t\t\t\t|    |_____     _________|     _______________|    |\n");
printf("\t\t\t\t\t| %c    %c    %c  |  %c    %c    %c    %c    %c    %c    %c  |\n",arr[9][0],arr[9][1],arr[9][2],arr[9][3],arr[9][4],arr[9][5],arr[9][6],arr[9][7],arr[9][8],arr[9][9]);
printf("\t\t\t\t\t|______________|______________________________     |\n");
for(h=0;h<10;h++){
        for(f=0;f<10;f++){
            if(arr[h][f]!='I'){
                i++;
            }
        }
    }
    if(i==100){
        goto endg;
    }
    for(a=0;a<10;a++){
        for(b=0;b<10;b++){
    arr[a][b]=' ';
}}
arr[l][m]='I';
top:
printf("Enter your move\n");
move=getche();
if(move=='w' || move=='a' || move=='d' || move=='s'){
    if(arr[0][0]=='I'){
        if(move=='w' || move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[0][0]=' '; arr[1][0]='I'; l=1; m=0; goto ga;}
    }
    else if(arr[1][0]=='I'){
        if(move=='s' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[1][0]=' '; arr[0][0]='I'; l=0; m=0; goto ga;}
        else if(move=='d'){arr[1][0]=' '; arr[1][1]='I'; l=1; m=1; goto ga;}
    }
    else if(arr[1][1]=='I'){
        if(move=='s' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[1][1]=' '; arr[1][0]='I'; l=1; m=0; goto ga; }
        else if(move=='w'){arr[1][1]=' '; arr[0][1]='I'; l=0; m=1; goto ga; }
    }
    else if(arr[0][1]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[0][1]=' '; arr[1][1]='I'; l=1; m=1; goto ga; }
        else if(move=='d'){arr[0][1]=' '; arr[0][2]='I'; l=0; m=2; goto ga; }
    }
    else if(arr[0][2]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[0][2]=' '; arr[0][3]='I'; l=0; m=3; goto ga;}
        else if(move=='a'){arr[0][2]=' '; arr[0][1]='I'; l=0; m=1; goto ga; }
    }
    else if(arr[0][3]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[0][3]=' '; arr[0][4]='I'; l=0; m=4; goto ga;}
        else if(move=='a'){arr[0][3]=' '; arr[0][2]='I'; l=0; m=2; goto ga;}
    }
    else if(arr[0][4]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[0][4]=' '; arr[0][5]='I'; l=0; m=5; goto ga;}
        else if(move=='a'){arr[0][4]=' '; arr[0][3]='I'; l=0; m=3; goto ga;}
    }
    else if(arr[0][5]=='I'){
        if(move=='d' || move=='w'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[0][5]=' '; arr[1][5]='I'; l=1; m=5; goto ga;}
        else if(move=='a'){arr[0][5]=' '; arr[0][4]='I'; l=0; m=4; goto ga;}
    }
    else if(arr[1][5]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[1][5]=' '; arr[0][5]='I'; l=0; m=5; goto ga;}
        else if(move=='a'){arr[1][5]=' '; arr[1][4]='I'; l=1; m=4; goto ga;}
    }
    else if(arr[1][4]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[1][4]=' '; arr[2][4]='I'; l=2; m=4; goto ga;}
        else if(move=='d'){arr[1][4]=' '; arr[1][5]='I'; l=1; m=5; goto ga;}
    }
    else if(arr[2][4]=='I'){
        if(move=='s'  || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[2][4]=' '; arr[2][3]='I'; l=2; m=3; goto ga;}
        else if(move=='w'){arr[2][4]=' '; arr[1][4]='I'; l=1; m=4; goto ga;}
    }
    else if(arr[2][3]=='I'){
        if(move=='s' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[2][3]=' '; arr[2][4]='I'; l=2; m=4; goto ga;}
        else if(move=='w'){arr[2][3]=' '; arr[1][3]='I'; l=1; m=3; goto ga;}
    }
    else if(arr[1][3]=='I'){
        if(move=='d' || move=='w'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[1][3]=' '; arr[2][3]='I'; l=2; m=3; goto ga;}
        else if(move=='a'){arr[1][3]=' '; arr[1][2]='I'; l=1; m=2;goto ga;}
    }
    else if(arr[1][2]=='I'){
        if(move=='a' || move=='w'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[1][2]=' '; arr[2][2]='I'; l=2; m=2; goto ga;}
        else if(move=='d'){arr[1][2]=' '; arr[1][3]='I'; l=1; m=3; goto ga;}
    }
    else if(arr[2][2]=='I'){
        if(move=='d' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[2][2]=' '; arr[1][2]='I'; l=1; m=2; goto ga;}
        else if(move=='s'){arr[2][2]=' '; arr[3][2]='I'; l=3; m=2; goto ga;}
    }
    else if(arr[3][2]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[3][2]=' '; arr[2][2]='I'; l=2; m=2; goto ga;}
        else if(move=='a'){arr[3][2]=' '; arr[3][1]='I'; l=3; m=1; goto ga;}
    }
    else if(arr[3][1]=='I'){
        if(move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[3][1]=' '; arr[2][1]='I'; l=2; m=1; goto ga;}
        else if(move=='d'){arr[3][1]=' '; arr[3][2]='I'; l=3; m=2; goto ga;}
        else if(move=='s'){arr[3][1]=' '; arr[4][1]='I'; l=4; m=1; goto ga;}
    }
    else if(arr[4][1]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[4][1]=' '; arr[3][1]='I'; l=3; m=1; goto ga;}
        else if(move=='d'){arr[4][1]=' '; arr[4][2]='I'; l=4; m=2; goto ga;}
    }
    else if(arr[4][2]=='I'){
        if(move=='w' || move=='s' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[4][2]=' '; arr[4][1]='I'; l=4; m=1; goto ga;}
    }
    else if(arr[2][1]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[2][1]=' '; arr[2][0]='I'; l=2; m=0; goto ga;}
        else if(move=='s'){arr[2][1]=' '; arr[3][1]='I'; l=3; m=1; goto ga;}
    }
    else if(arr[2][0]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[2][0]=' '; arr[3][0]='I'; l=3; m=0; goto ga;}
        else if(move=='d'){arr[2][0]=' '; arr[2][1]='I'; l=2; m=1; goto ga;}
    }
    else if(arr[3][0]=='I'){
        if(move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[3][0]=' '; arr[2][0]='I'; l=2; m=0; goto ga;}
        else if(move=='s'){arr[3][0]=' '; arr[4][0]='I'; l=4; m=0; goto ga;}
    }
    else if(arr[4][0]=='I'){
        if(move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[4][0]=' '; arr[3][0]='I'; l=3; m=0; goto ga;}
        else if(move=='s'){arr[4][0]=' '; arr[5][0]='I'; l=5; m=0; goto ga;}
    }
    else if(arr[5][0]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[5][0]=' '; arr[4][0]='I'; l=4; m=0; goto ga;}
        else if(move=='d'){arr[5][0]=' '; arr[5][1]='I'; l=5; m=1; goto ga;}
    }
    else if(arr[5][1]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[5][1]=' '; arr[5][0]='I'; l=5; m=0; goto ga;}
        else if(move=='d'){arr[5][1]=' '; arr[5][2]='I'; l=5; m=2; goto ga;}
    }
    else if(arr[5][2]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[5][2]=' '; arr[5][1]='I'; l=5; m=1; goto ga;}
        else if(move=='d'){arr[5][2]=' '; arr[5][3]='I'; l=5; m=3; goto ga;}
    }
    else if(arr[5][3]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[5][3]=' '; arr[5][2]='I'; l=5; m=2; goto ga;}
        else if(move=='s'){arr[5][3]=' '; arr[6][3]='I'; l=6; m=3; goto ga;}
    }
    else if(arr[6][3]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[6][3]=' '; arr[5][3]='I'; l=5; m=3; goto ga;}
        else if(move=='a'){arr[6][3]=' '; arr[6][2]='I'; l=6; m=2; goto ga;}
    }
    else if(arr[6][2]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[6][2]=' '; arr[6][1]='I'; l=6; m=1; goto ga;}
        else if(move=='d'){arr[6][2]=' '; arr[6][3]='I'; l=6; m=3; goto ga;}
    }
    else if(arr[6][1]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[6][1]=' '; arr[6][0]='I'; l=6; m=0; goto ga;}
        else if(move=='d'){arr[6][1]=' '; arr[6][2]='I'; l=6; m=2; goto ga;}
    }
    else if(arr[6][0]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[6][0]=' '; arr[7][0]='I'; l=7; m=0; goto ga;}
        else if(move=='d'){arr[6][0]=' '; arr[6][1]='I'; l=6; m=1; goto ga;}
    }
    else if(arr[7][0]=='I'){
        if(move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[7][0]=' '; arr[6][0]='I'; l=6; m=0; goto ga;}
        else if(move=='s'){arr[7][0]=' '; arr[8][0]='I'; l=8; m=0; goto ga;}
    }
    else if(arr[8][0]=='I'){
        if(move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[8][0]=' '; arr[7][0]='I'; l=7; m=0; goto ga;}
        else if(move=='s'){arr[8][0]=' '; arr[9][0]='I'; l=9; m=0; goto ga;}
    }
    else if(arr[9][0]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[9][0]=' '; arr[8][0]='I'; l=8; m=0; goto ga;}
        else if(move=='d'){arr[9][0]=' '; arr[9][1]='I'; l=9; m=1; goto ga;}
    }
    else if(arr[9][1]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[9][1]=' '; arr[9][0]='I'; l=9; m=0; goto ga;}
        else if(move=='d'){arr[9][1]=' '; arr[9][2]='I'; l=9; m=2; goto ga;}
    }
    else if(arr[9][2]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[9][2]=' '; arr[9][1]='I'; l=9; m=1; goto ga;}
        else if(move=='w'){arr[9][2]=' '; arr[8][2]='I'; l=8; m=2; goto ga;}
    }
    else if(arr[8][2]=='I'){
        if(move=='w'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[8][2]=' '; arr[8][1]='I'; l=8; m=1; goto ga;}
        else if(move=='d'){arr[8][2]=' '; arr[8][3]='I'; l=8; m=3; goto ga;}
        else if(move=='s'){arr[8][2]=' '; arr[9][2]='I'; l=9; m=2; goto ga;}
    }
    else if(arr[8][1]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[8][1]=' '; arr[8][2]='I'; l=8; m=2; goto ga;}
        else if(move=='w'){arr[8][1]=' '; arr[7][1]='I'; l=7; m=1; goto ga;}
    }
    else if(arr[7][1]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[7][1]=' '; arr[8][1]='I'; l=8; m=1; goto ga;}
        else if(move=='d'){arr[7][1]=' '; arr[7][2]='I'; l=7; m=2; goto ga;}
    }
    else if(arr[7][2]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[7][2]=' '; arr[7][1]='I'; l=7; m=1; goto ga;}
        else if(move=='d'){arr[7][2]=' '; arr[7][3]='I'; l=7; m=3; goto ga;}
    }
    else if(arr[7][3]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[7][3]=' '; arr[7][2]='I'; l=7; m=2; goto ga;}
        else if(move=='d'){arr[7][3]=' '; arr[7][4]='I'; l=7; m=4; goto ga;}
    }
    else if(arr[7][4]=='I'){
        if(move=='w'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[7][4]=' '; arr[7][3]='I'; l=7; m=3; goto ga;}
        else if(move=='d'){arr[7][4]=' '; arr[7][5]='I'; l=7; m=5; goto ga;}
        else if(move=='s'){arr[7][4]=' '; arr[8][4]='I'; l=8; m=4; goto ga;}
    }
    else if(arr[8][4]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[8][4]=' '; arr[8][3]='I'; l=8; m=3; goto ga;}
        else if(move=='w'){arr[8][4]=' '; arr[7][4]='I'; l=7; m=4; goto ga;}
    }
    else if(arr[8][3]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[8][3]=' '; arr[8][2]='I'; l=8; m=2; goto ga;}
        else if(move=='d'){arr[8][3]=' '; arr[8][4]='I'; l=8; m=4; goto ga;}
    }
    else if(arr[7][5]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[7][5]=' '; arr[7][4]='I'; l=7; m=4; goto ga;}
        else if(move=='w'){arr[7][5]=' '; arr[6][5]='I'; l=6; m=5; goto ga;}
    }
    else if(arr[6][5]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[6][5]=' '; arr[6][4]='I'; l=6; m=4; goto ga;}
        else if(move=='s'){arr[6][5]=' '; arr[7][5]='I'; l=7; m=5; goto ga;}
    }
    else if(arr[6][4]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[6][4]=' '; arr[5][4]='I'; l=5; m=4; goto ga;}
        else if(move=='d'){arr[6][4]=' '; arr[6][5]='I'; l=6; m=5; goto ga;}
    }
    else if(arr[5][4]=='I'){
        if(move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[5][4]=' '; arr[4][4]='I'; l=4; m=4; goto ga;}
        else if(move=='s'){arr[5][4]=' '; arr[6][4]='I'; l=6; m=4; goto ga;}
    }
    else if(arr[4][4]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[4][4]=' '; arr[4][3]='I'; l=4; m=3; goto ga;}
        else if(move=='s'){arr[4][4]=' '; arr[5][4]='I'; l=5; m=4; goto ga;}
    }
    else if(arr[4][3]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[4][3]=' '; arr[3][3]='I'; l=3; m=3; goto ga;}
        else if(move=='d'){arr[4][3]=' '; arr[4][4]='I'; l=4; m=4; goto ga;}
    }
    else if(arr[3][3]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[3][3]=' '; arr[4][3]='I'; l=4; m=3; goto ga;}
        else if(move=='d'){arr[3][3]=' '; arr[3][4]='I'; l=3; m=4; goto ga;}
    }
    else if(arr[3][4]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[3][4]=' '; arr[3][3]='I'; l=3; m=3; goto ga;}
        else if(move=='d'){arr[3][4]=' '; arr[3][5]='I'; l=3; m=5; goto ga;}
    }
    else if(arr[3][5]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[3][5]=' '; arr[2][5]='I'; l=2; m=5; goto ga;}
        else if(move=='a'){arr[3][5]=' '; arr[3][4]='I'; l=3; m=4; goto ga;}
    }
    else if(arr[2][5]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[2][5]=' '; arr[3][5]='I'; l=3; m=5; goto ga;}
        else if(move=='d'){arr[2][5]=' '; arr[2][6]='I'; l=2; m=6; goto ga;}
    }
    else if(arr[2][6]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[2][6]=' '; arr[2][5]='I'; l=2; m=5; goto ga;}
        else if(move=='w'){arr[2][6]=' '; arr[1][6]='I'; l=1; m=6; goto ga;}
    }
    else if(arr[1][6]=='I'){
        if(move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[1][6]=' '; arr[0][6]='I'; l=0; m=6; goto ga;}
        else if(move=='s'){arr[1][6]=' '; arr[2][6]='I'; l=2; m=6; goto ga;}
    }
    else if(arr[0][6]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[0][6]=' '; arr[0][7]='I'; l=0; m=7; goto ga;}
        else if(move=='s'){arr[0][6]=' '; arr[1][6]='I'; l=1; m=6; goto ga;}
    }
    else if(arr[0][7]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[0][7]=' '; arr[0][6]='I'; l=0; m=6; goto ga;}
        else if(move=='d'){arr[0][7]=' '; arr[0][8]='I'; l=0; m=8; goto ga;}
    }
    else if(arr[0][8]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[0][8]=' '; arr[0][7]='I'; l=0; m=7; goto ga;}
        else if(move=='d'){arr[0][8]=' '; arr[0][9]='I'; l=0; m=9; goto ga;}
    }
    else if(arr[0][9]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[0][9]=' '; arr[0][8]='I'; l=0; m=8; goto ga;}
        else if(move=='s'){arr[0][9]=' '; arr[1][9]='I'; l=1; m=9; goto ga;}
    }
    else if(arr[1][9]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[1][9]=' '; arr[0][9]='I'; l=0; m=9; goto ga;}
        else if(move=='a'){arr[1][9]=' '; arr[1][8]='I'; l=1; m=8; goto ga;}
    }
    else if(arr[1][8]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[1][8]=' '; arr[1][9]='I'; l=1; m=9; goto ga;}
        else if(move=='a'){arr[1][8]=' '; arr[1][7]='I'; l=1; m=7; goto ga;}
    }
    else if(arr[1][7]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[1][7]=' '; arr[1][8]='I'; l=1; m=8; goto ga;}
        else if(move=='s'){arr[1][7]=' '; arr[2][7]='I'; l=2; m=7; goto ga;}
    }
    else if(arr[2][7]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[2][7]=' '; arr[1][7]='I'; l=1; m=7; goto ga;}
        else if(move=='d'){arr[2][7]=' '; arr[2][8]='I'; l=2; m=8; goto ga;}
    }
    else if(arr[2][8]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[2][8]=' '; arr[2][9]='I'; l=2; m=9; goto ga;}
        else if(move=='a'){arr[2][8]=' '; arr[2][7]='I'; l=2; m=7; goto ga;}
    }
    else if(arr[2][9]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[2][9]=' '; arr[3][9]='I'; l=3; m=9; goto ga;}
        else if(move=='a'){arr[2][9]=' '; arr[2][8]='I'; l=2; m=8; goto ga;}
    }
    else if(arr[3][9]=='I'){
        if(move=='d' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[3][9]=' '; arr[2][9]='I'; l=2; m=9; goto ga;}
        else if(move=='s'){arr[3][9]=' '; arr[4][9]='I'; l=4; m=9; goto ga;}
    }
    else if(arr[4][9]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[4][9]=' '; arr[3][9]='I'; l=3; m=9; goto ga;}
        else if(move=='a'){arr[4][9]=' '; arr[4][8]='I'; l=4; m=8; goto ga;}
    }
    else if(arr[4][8]=='I'){
        if(move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[4][8]=' '; arr[3][8]='I'; l=3; m=8; goto ga;}
        else if(move=='d'){arr[4][8]=' '; arr[4][9]='I'; l=4; m=9; goto ga;}
    }
    else if(arr[3][8]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[3][8]=' '; arr[4][8]='I'; l=4; m=8; goto ga;}
        else if(move=='a'){arr[3][8]=' '; arr[3][7]='I'; l=3; m=7; goto ga;}
    }
    else if(arr[3][7]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[3][7]=' '; arr[3][8]='I'; l=3; m=8; goto ga;}
        else if(move=='a'){arr[3][7]=' '; arr[3][6]='I'; l=3; m=6; goto ga;}
    }
    else if(arr[3][6]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[3][6]=' '; arr[4][6]='I'; l=4; m=6; goto ga;}
        else if(move=='d'){arr[3][6]=' '; arr[3][7]='I'; l=3; m=7; goto ga;}
    }
    else if(arr[4][6]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[4][6]=' '; arr[3][6]='I'; l=3; m=6; goto ga;}
        else if(move=='a'){arr[4][6]=' '; arr[4][5]='I'; l=4; m=5; goto ga;}
    }
    else if(arr[4][5]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[4][5]=' '; arr[5][5]='I'; l=5; m=5; goto ga;}
        else if(move=='d'){arr[4][5]=' '; arr[4][6]='I'; l=4; m=6; goto ga;}
    }
    else if(arr[5][5]=='I'){
        if(move=='s' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[5][5]=' '; arr[4][5]='I'; l=4; m=5; goto ga;}
        else if(move=='d'){arr[5][5]=' '; arr[5][6]='I'; l=5; m=6; goto ga;}
    }
    else if(arr[5][6]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[5][6]=' '; arr[5][7]='I'; l=5; m=7; goto ga;}
        else if(move=='a'){arr[5][6]=' '; arr[5][5]='I'; l=5; m=5; goto ga;}
    }
    else if(arr[5][7]=='I'){
        if(move=='w'){arr[5][7]=' '; arr[4][7]='I'; l=4; m=7; goto ga;}
        else if(move=='a'){arr[5][7]=' '; arr[5][6]='I'; l=5; m=6; goto ga;}
        else if(move=='s'){arr[5][7]=' '; arr[6][7]='I'; l=6; m=7; goto ga;}
        else if(move=='d'){arr[5][7]=' '; arr[5][8]='I'; l=5; m=8; goto ga;}
    }
    else if(arr[4][7]=='I'){
        if(move=='w' || move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[4][7]=' '; arr[5][7]='I'; l=5; m=7; goto ga;}
    }
    else if(arr[5][8]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[5][8]=' '; arr[5][9]='I'; l=5; m=9; goto ga;}
        else if(move=='a'){arr[5][8]=' '; arr[5][7]='I'; l=5; m=7; goto ga;}
    }
    else if(arr[5][9]=='I'){
        if(move=='w' || move=='s' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[5][9]=' '; arr[5][8]='I'; l=5; m=8; goto ga;}
    }
    else if(arr[6][7]=='I'){
        if(move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[6][7]=' '; arr[6][8]='I'; l=6; m=8; goto ga;}
        else if(move=='a'){arr[6][7]=' '; arr[6][6]='I'; l=6; m=6; goto ga;}
        else if(move=='w'){arr[6][7]=' '; arr[5][7]='I'; l=5; m=7; goto ga;}
    }
    else if(arr[6][6]=='I'){
        if(move=='w' || move=='s' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[6][6]=' '; arr[6][7]='I'; l=6; m=7; goto ga;}
    }
    else if(arr[6][8]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[6][8]=' '; arr[6][9]='I'; l=6; m=9; goto ga;}
        else if(move=='a'){arr[6][8]=' '; arr[6][7]='I'; l=6; m=7; goto ga;}
    }
    else if(arr[6][9]=='I'){
        if(move=='w' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[6][9]=' '; arr[7][9]='I'; l=7; m=9; goto ga;}
        else if(move=='a'){arr[6][9]=' '; arr[6][8]='I'; l=6; m=8; goto ga;}
    }
    else if(arr[7][9]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[7][9]=' '; arr[6][9]='I'; l=6; m=9; goto ga;}
        else if(move=='a'){arr[7][9]=' '; arr[7][8]='I'; l=7; m=8; goto ga;}
    }
    else if(arr[7][8]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[7][8]=' '; arr[7][9]='I'; l=7; m=9; goto ga;}
        else if(move=='s'){arr[7][8]=' '; arr[8][8]='I'; l=8; m=8; goto ga;}
    }
    else if(arr[8][8]=='I'){
        if(move=='d' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[8][8]=' '; arr[7][8]='I'; l=7; m=8; goto ga;}
        else if(move=='a'){arr[8][8]=' '; arr[8][7]='I'; l=8; m=7; goto ga;}
    }
    else if(arr[8][7]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[8][7]=' '; arr[8][8]='I'; l=8; m=8; goto ga;}
        else if(move=='a'){arr[8][7]=' '; arr[8][6]='I'; l=8; m=6; goto ga;}
    }
    else if(arr[8][6]=='I'){
        if(move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[8][6]=' '; arr[8][7]='I'; l=8; m=7; goto ga;}
        else if(move=='a'){arr[8][6]=' '; arr[8][5]='I'; l=8; m=5; goto ga;}
        else if(move=='w'){arr[8][6]=' '; arr[7][6]='I'; l=7; m=6; goto ga;}
    }
    else if(arr[7][6]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[7][6]=' '; arr[7][7]='I'; l=7; m=7; goto ga;}
        else if(move=='s'){arr[7][6]=' '; arr[8][6]='I'; l=8; m=6; goto ga;}
    }
    else if(arr[7][7]=='I'){
        if(move=='w' || move=='s' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='a'){arr[7][7]=' '; arr[7][6]='I'; l=7; m=6; goto ga;}
    }
    else if(arr[8][5]=='I'){
        if(move=='w' || move=='a'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[8][5]=' '; arr[8][6]='I'; l=8; m=6; goto ga;}
        else if(move=='s'){arr[8][5]=' '; arr[9][5]='I'; l=9; m=5; goto ga;}
    }
    else if(arr[8][9]=='I'){
        if(move=='w' || move=='a' || move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='s'){arr[8][9]=' '; arr[9][9]='I'; l=9; m=9; goto ga;}
    }
    else if(arr[9][5]=='I'){
        if(move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[9][5]=' '; arr[9][6]='I'; l=9; m=6; goto ga;}
        else if(move=='a'){arr[9][5]=' '; arr[9][4]='I'; l=9; m=4; goto ga;}
        else if(move=='w'){arr[9][5]=' '; arr[8][5]='I'; l=8; m=5; goto ga;}
    }
    else if(arr[9][4]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[9][4]=' '; arr[9][5]='I'; l=9; m=5; goto ga;}
        else if(move=='a'){arr[9][4]=' '; arr[9][3]='I'; l=9; m=3; goto ga;}
    }
    else if(arr[9][3]=='I'){
        if(move=='w' || move=='a' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[9][3]=' '; arr[9][4]='I'; l=9; m=4; goto ga;}
    }
    else if(arr[9][6]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[9][6]=' '; arr[9][7]='I'; l=9; m=7; goto ga;}
        else if(move=='a'){arr[9][6]=' '; arr[9][5]='I'; l=9; m=5; goto ga;}
    }
    else if(arr[9][7]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[9][7]=' '; arr[9][8]='I'; l=9; m=8; goto ga;}
        else if(move=='a'){arr[9][7]=' '; arr[9][6]='I'; l=9; m=6; goto ga;}
    }
    else if(arr[9][8]=='I'){
        if(move=='w' || move=='s'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='d'){arr[9][8]=' '; arr[9][9]='I'; l=9; m=9; goto ga;}
        else if(move=='a'){arr[9][8]=' '; arr[9][7]='I'; l=9; m=7; goto ga;}
    }
    else if(arr[9][9]=='I'){
        if(move=='d'){printf("\nINVALID ENTRY TRY AGAIN\n"); goto top;}
        else if(move=='w'){arr[9][9]=' '; arr[8][9]='I'; l=8; m=9; goto ga;}
        else if(move=='a'){arr[9][9]=' '; arr[9][8]='I'; l=9; m=8; goto ga;}
        else if(move=='s'){arr[9][9]=' '; win();}
    }
}
else{
    printf("\nINVALID ENTRY TRY AGAIN\n");
    goto top;
}
endg:
    printf("YOU LOSE THE GAME TRY AGAIN\n");
    printf("YOU FELL INTO THE HOLE\n");
    printf("\n\n\nWAIT LOADING......\n");
    delay(5000);
    main();
return 0;
}
win(){
    system("cls");
printf("CONGRATULATION YOU ARE A WINNER\n");
printf("\n\n\nWAIT LOADING\n");
delay(3000);
main();
}
