#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n1;
    char n2;
    char n3;
    char n4;
    int a,b,c,d,i,j,k,l,m,n,o;
    a=0;
    b=0;
    c=0;
    d=0;
    now:
    printf("Welcome to this game \n Press 1 to play \n press 2 for instruction \n \n");
    scanf("%d", &o);
    if (o!=1 && o!=2){
            printf(" \n \n INVALID RESPONSE \n \n");
        goto now;
    }
    if(o==2){
        instruction();
    }
    printf("enter first player alphabet \n");
    scanf(" %c",&n1);
    printf("enter second player alphabet \n");
    scanf(" %c",&n2);
    printf("enter third player alphabet \n");
    scanf(" %c",&n3);
    printf("enter fourth player alphabet \n");
    scanf(" %c",&n4);
    nope:
    printf(" \n \n enter the time limit \n 50 for a small time game \n 100 for a medium time game \n 200 for a large time game \n or enter any time limit above 50 \n");
    scanf("%d", &n);
    if(n<50){
            printf(" \n \n TIME LIMIT SHOULD BE MORE THAN OR EQUAL TO 50 \n \n");
        goto nope;
    }
    here:
    i=game1();
    a=a+i;
    printf("score of p1 %c is \n %d \n", n1, a);
    j=game2();
    b=b+j;
    printf("score of p2 %c is \n %d \n", n2, b);
    k=game3();
    c=c+k;
    printf("score of p3 %c is \n %d \n", n3, c);
    l=game4();
    d=d+l;
    printf("score of p4 %c is \n %d \n", n4, d);
    if(a>n && b>n && c>n && d>n){
        m=a;
        if(b>m){
            m=b;
        }
        if(c>m){
            m=c;
        }
        if(d>m){
            m=d;
        }
        if(m==a){
            printf(" \n \n P1 %c IS THE WINNER \n \n", n1);
            printf(" score of p1 is %d \n", a);
            printf(" score of p2 is %d \n", b);
            printf(" score of p3 is %d \n", c);
            printf(" score of p4 is %d \n", d);
        }
        if(m==b){
            printf(" \n \n P2 %c IS THE WINNER \n \n", n2);
            printf(" score of p1 is %d \n", a);
            printf(" score of p2 is %d \n", b);
            printf(" score of p3 is %d \n", c);
            printf(" score of p4 is %d \n", d);
        }
        if(m==c){
            printf(" \n \n P3 %c IS THE WINNER \n \n",n3);
            printf(" score of p1 is %d \n", a);
            printf(" score of p2 is %d \n", b);
            printf(" score of p3 is %d \n", c);
            printf(" score of p4 is %d \n", d);
        }
        if(m==d){
            printf(" \n \n P4 %c IS THE WINNER \n \n", n4);
            printf(" score of p1 is %d \n", a);
            printf(" score of p2 is %d \n", b);
            printf(" score of p3 is %d \n", c);
            printf(" score of p4 is %d \n", d);
        }

    }
    else{
    goto here;}
}

rannum()
{
    int e,f;
   e = rand();
   f=e%10;
   return f;
}

game1()
{
    int g,h;
    printf(" \n Enter a number p1 \n");
    scanf("%d",&g);
    loop(g);
    h=rannum();
    return h;
}

game2()
{int g,h;
    printf(" \n Enter a number p2 \n");
    scanf("%d",&g);
    loop(g);
    h=rannum();
    return h;
}

game3()
{
    int g,h;
    printf(" \n Enter a number p3 \n");
    scanf("%d",&g);
    loop(g);
    h=rannum();
    return h;
}

game4()
{
    int g,h;
    printf(" \n Enter a number p4 \n");
    scanf("%d",&g);
    loop(g);
    h=rannum();
    return h;
}

loop(int j)
{
    int k;
    for(k=0;k<=j;k++){
        rannum();
    }
}

instruction(){
    printf(" \n INSTRUCTIONS ARE AS FOLLOWS \n \n");
printf("RULE1:- You have to enter the time limit example 50, 100, or any other number more than or equal to 50\n");
printf("RULE2:- game will continue until all the player reaches to the score more than the time limit \n");
printf("RULE3:- their are four players in this game \n");
printf("RULE4:- player have to enter any random number from the keyboard in every chance \n \n ");
}
