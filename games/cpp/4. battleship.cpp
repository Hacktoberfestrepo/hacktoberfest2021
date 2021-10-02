#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int aa=0;
    int ab=0;
    int ac=0;
    int ad=0;
    int ae=0;
    int ba=0;
    int bb=0;
    int bc=0;
    int bd=0;
    int be=0;
    int ca=0;
    int cb=0;
    int cc=0;
    int cd=0;
    int ce=0;
    int da=0;
    int db=0;
    int dc=0;
    int dd=0;
    int de=0;
    int ea=0;
    int eb=0;
    int ec=0;
    int ed=0;
    int ee=0;
    char ex;
    char stat;
    int score;
    int timeout;
    int out;
    printf("Enter the index number example 11,23,55 etc.\n");
    printf("Index is defined as row vs column\n");
    printf("If their is a ship 0 turns to 2 if their is not then it turns to 1\n");
    printf("You have to find six ships\n");
    printf("Press Enter to start");
    scanf("%c",&stat);
    float t;
    double total_time;
    clock_t start,end;
    start=clock();
    print:
    printf("\t \t \t \t \t \t  1 2 3 4 5\n");
    printf("\t \t \t \t \t \t1 %d %d %d %d %d\n",aa,ba,ca,da,ea);
    printf("\t \t \t \t \t \t2 %d %d %d %d %d\n",ab,bb,cb,db,eb);
    printf("\t \t \t \t \t \t3 %d %d %d %d %d\n",ac,bc,cc,dc,ec);
    printf("\t \t \t \t \t \t4 %d %d %d %d %d\n",ad,bd,cd,dd,ed);
    printf("\t \t \t \t \t \t5 %d %d %d %d %d\n\n",ae,be,ce,de,ee);
    int index;
    enterindex:
        timeout=clock();
        out=((double)(timeout-start))/CLOCKS_PER_SEC;
        if(out>15){
            printf(" YOUR TIME IS OVER \n");
            printf(" YOU LOSE ");
            goto end;
        }
        if(ae==2 && bb==2 && ce ==2 && dc==2 && ea==2){
        end=clock();
        total_time=((double)(end- start))/CLOCKS_PER_SEC;
        printf("\n YOUR SCORE IS %f",total_time);
        printf("\nYOU WIN");
        goto end;
    }
    printf("Enter the index\n");
    scanf("%d",&index);
    if(index!=11 && index!=12 && index!=13 && index!=14 && index!=15 && index!=21 && index!=22 && index!=23 && index!=24 && index!=25 && index!=31 && index!=32 && index!=33 && index!=34 && index!=35 && index!=41 && index!=42 && index!=43 && index!=44 && index!=45 && index!=51 && index!=52 && index!=53 && index!=54 && index!=55){
        printf("INVALID OPTION\n");
        goto enterindex;
    }
    else {
        if(index ==11){
            o12(&aa);
            goto print;
        }
                else if(index==12){
            o12(&ab);
            goto print;
        }
                else if(index==13){
            o12(&ac);
            goto print;
        }
                else if(index==14){
            o12(&ad);
            goto print;
        }
                else if(index==15){
            o11(&ae);
            goto print;
        }
                else if(index==21){
            o12(&ba);
            goto print;
        }
                else if(index==22){
            o11(&bb);
            goto print;
        }
                else if(index==23){
            o12(&bc);
            goto print;
        }
                else if(index==24){
            o12(&bd);
            goto print;
        }
                else if(index==25){
            o12(&be);
            goto print;
        }
                else if(index==31){
            o12(&ca);
            goto print;
        }
                else if(index==32){
            o12(&cb);
            goto print;
        }
                else if(index==33){
            o12(&cc);
            goto print;
        }
                else if(index==34){
            o12(&cd);
            goto print;
        }
                else if(index==35){
            o11(&ce);
            goto print;
        }
                else if(index==41){
            o12(&da);
            goto print;
        }
                else if(index==42){
            o12(&db);
            goto print;
        }
                else if(index==43){
            o11(&dc);
            goto print;
        }
                else if(index==44){
            o12(&dd);
            goto print;
        }
                else if(index==45){
            o12(&de);
            goto print;
        }
                else if(index==51){
            o11(&ea);
            goto print;
        }
                else if(index==52){
            o12(&eb);
            goto print;
        }
                else if(index==53){
            o12(&ec);
            goto print;
        }
                else if(index==54){
            o12(&ed);
            goto print;
        }
                else{
            o12(&ee);
            goto print;
        }
    }
    end:
        printf("\nPress any key to exit");
        fflush(stdin);
        scanf("%c",&ex);
}
o12(int *x){
*x=1;
}
o11(int *y){
*y=2;
}

