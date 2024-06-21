#include <stdio.h>
#include <stdlib.h>
int column(char a);
int row(char a);
int main()
{
    char a=193;
    char b=194;
    system("color 4e");
    printf("WELCOME TO MY GAME\n\n\n");
    printf("\t\t\t\t\tPAWN CHESS\n\n\n");
    printf("\t\t\t\t\t\t -Tushar Gupta\n");
    printf("\n\nWAIT LOADING.....\n");
    delay(5000);
    game();
}
game(){
    int a;
system("cls");
printf("Enter your choice");
printf("\n1. Instructions");
printf("\n2. Start\n");
top:
scanf("%d",&a);
if(a==1){
    goto instruction;
}
else if(a==2){
    start();
}
else {printf("\n\nYour choice is invalid.");
goto top;}
goto down;
instruction:

    printf("\nInstructions goes as follows\n");
    printf("1. This is a two player game\n");
    printf("2. The target is to get any of your pawn to the other side\n");
    printf("3. You can get your pawn either 1 step forward, right or left for player 1 and 1 step down, right or left for player 2\n");
    printf("4. Use the indexes like 'aaba' which means your pawn will move from aa to ba\n");
    printf("\n\n\n WAIT LOADING THE GAME.......");
    delay(25000);
    start();
    down:
        printf("");
}
start(){
    system("cls");
    char a[8][4];
    int z,y,p,q,r,s,b,w;
    char l,m,n,o;
    for(z=2;z<6;z++){
            for(y=0;y<4;y++){
        a[z][y]=' ';
    }}
    for(z=0;z<2;z++){
        for(y=0;y<4;y++){
            a[z][y]=194;
        }
    }
    for(z=6;z<8;z++){
        for(y=0;y<4;y++){
            a[z][y]=193;
        }
    }
    again:
        system("cls");
    printf(" \t\t\t\t\t        player 2\n\n");
    printf(" \t\t\t\t\t   a    b    c    d\n");
    printf(" \t\t\t\t\t  ___________________\n");
    printf(" \t\t\t\t\ta| %c  | %c  | %c  | %c  |\n",a[0][0],a[0][1],a[0][2],a[0][3]);
    printf("  \t\t\t\t\t |____|____|____|____|\n");
    printf("\t\t\t\t\tb| %c  | %c  | %c  | %c  |\n",a[1][0],a[1][1],a[1][2],a[1][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\tc| %c  | %c  | %c  | %c  |\n",a[2][0],a[2][1],a[2][2],a[2][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf("\t\t\t\t\td| %c  | %c  | %c  | %c  |\n",a[3][0],a[3][1],a[3][2],a[3][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf("\t\t\t\t\te| %c  | %c  | %c  | %c  |\n",a[4][0],a[4][1],a[4][2],a[4][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\tf| %c  | %c  | %c  | %c  |\n",a[5][0],a[5][1],a[5][2],a[5][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\tg| %c  | %c  | %c  | %c  |\n",a[6][0],a[6][1],a[6][2],a[6][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\th| %c  | %c  | %c  | %c  |\n",a[7][0],a[7][1],a[7][2],a[7][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf("  \n  \t\t\t\t\t         player 1");
    b=0; w=0;
        for(z=0;z<8;z++){
            for(y=0;y<4;y++){
                if(a[z][y]!=(char)193){b++;}
            }
        }
        for(z=0;z<8;z++){
            for(y=0;y<4;y++){
                if(a[z][y]!=(char)194){w++;}
            }
        }
        if(b==32){printf("\n\nPlayer 2 Wins\n\n"); goto endg;}
        if(w==32){printf("\n\nPlayer 1 Wins\n\n"); goto endg;}
    for(y=0;y<4;y++){
        if(a[0][y]==(char)193){printf("\n\nPlayer 1 wins"); goto endg;}
    }
    for(y=0;y<4;y++){
        if(a[7][y]==(char)194){printf("\n\nPlayer 2 wins"); goto endg;}
    }
    p1:
    printf("\n\n\nPlayer 1 chance\n");
     l=getche();
     m=getche();
     n=getche();
     o=getche();
     p=column(l);
     q=row(m);
     r=column(n);
     s=row(o);
     if(p==9 || q==9 || r==9 || s==9){printf("\nInvalid Choice Try again\n"); goto p1;}
     if(a[p][q]==(char)194 || a[p][q]==' '){printf("\nInvalid Choice Try again\n"); goto p1;}
     if(r!=p && r!=p-1){printf("\nInvalid Choice Try again\n"); goto p1;}
     if(s!=q && s!=q+1 && s!=q-1){printf("\nInvalid Choice Try again\n"); goto p1;}
     if(r==p-1 && s==q+1){printf("\nInvalid Choice Try again\n"); goto p1;}
     if(r==p-1 && s==q-1){printf("\nInvalid Choice Try again\n"); goto p1;}
     if(a[r][s]==(char)193){printf("\nInvalid Choice Try again\n"); goto p1;}
     a[r][s]=193;
     a[p][q]=' ';
     system("cls");
    printf(" \t\t\t\t\t        player 2\n\n");
    printf(" \t\t\t\t\t   a    b    c    d\n");
    printf(" \t\t\t\t\t  ___________________\n");
    printf(" \t\t\t\t\ta| %c  | %c  | %c  | %c  |\n",a[0][0],a[0][1],a[0][2],a[0][3]);
    printf("  \t\t\t\t\t |____|____|____|____|\n");
    printf("\t\t\t\t\tb| %c  | %c  | %c  | %c  |\n",a[1][0],a[1][1],a[1][2],a[1][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\tc| %c  | %c  | %c  | %c  |\n",a[2][0],a[2][1],a[2][2],a[2][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf("\t\t\t\t\td| %c  | %c  | %c  | %c  |\n",a[3][0],a[3][1],a[3][2],a[3][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf("\t\t\t\t\te| %c  | %c  | %c  | %c  |\n",a[4][0],a[4][1],a[4][2],a[4][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\tf| %c  | %c  | %c  | %c  |\n",a[5][0],a[5][1],a[5][2],a[5][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\tg| %c  | %c  | %c  | %c  |\n",a[6][0],a[6][1],a[6][2],a[6][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf(" \t\t\t\t\th| %c  | %c  | %c  | %c  |\n",a[7][0],a[7][1],a[7][2],a[7][3]);
    printf(" \t\t\t\t\t |____|____|____|____|\n");
    printf("   \n  \t\t\t\t\t         player 1");
    b=0; w=0;
        for(z=0;z<8;z++){
            for(y=0;y<4;y++){
                if(a[z][y]!=(char)193){b++;}
            }
        }
        for(z=0;z<8;z++){
            for(y=0;y<4;y++){
                if(a[z][y]!=(char)194){w++;}
            }
        }
        if(b==32){printf("\n\nPlayer 2 Wins\n\n"); goto endg;}
        if(w==32){printf("\n\nPlayer 1 Wins\n\n"); goto endg;}
        for(y=0;y<4;y++){
        if(a[0][y]==(char)193){printf("\n\nPlayer 1 wins"); goto endg;}
    }
    for(y=0;y<4;y++){
        if(a[7][y]==(char)194){printf("\n\nPlayer 2 wins"); goto endg;}
    }
    p2:
    printf("\n\n\nPlayer 2 chance\n");
     l=getche();
     m=getche();
     n=getche();
     o=getche();
     p=column(l);
     q=row(m);
     r=column(n);
     s=row(o);
     if(p==9 || q==9 || r==9 || s==9){printf("\nInvalid Choice Try again\n"); goto p2;}
     if(a[p][q]==(char)193  || a[p][q]==' '){printf("\nInvalid Choice Try again\n"); goto p2;}
     if(r!=p && r!=p+1){printf("\nInvalid Choice Try again\n"); goto p2;}
     if(s!=q && s!=q+1 && s!=q-1){printf("\nInvalid Choice Try again\n"); goto p2;}
     if(r==p+1 && s==q+1){printf("\nInvalid Choice Try again\n"); goto p2;}
     if(r==p+1 && s==q-1){printf("\nInvalid Choice Try again\n"); goto p2;}
     if(a[r][s]==(char)194){printf("\nInvalid Choice Try again\n"); goto p2;}
     a[r][s]=194;
     a[p][q]=' ';
     goto again;
     endg:
         printf("\n\n\nWait Loading...");
         delay(5000);
         game();
}
int column(char a){
if(a=='a'){return 0;}
else if(a=='b'){return 1;}
else if(a=='c'){return 2;}
else if(a=='d'){return 3;}
else if(a=='e'){return 4;}
else if(a=='f'){return 5;}
else if(a=='g'){return 6;}
else if(a=='h'){return 7;}
else {return 9;}
}
int row(char a){
if(a=='a'){return 0;}
else if(a=='b'){return 1;}
else if(a=='c'){return 2;}
else if(a=='d'){return 3;}
else return 9;
}
