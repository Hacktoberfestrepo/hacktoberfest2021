#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int a;
int score;
int main();

void endgame(int kya){
system("cls");
Sleep(1000);
cout<<kya<<" "<<a;
if(kya>a){
  cout<<"Congratulations You made a highscore\n";
  fstream file("recources/balancescore.txt",ios::out);
  cout<<"Enter Your Name: ";
  string name;
  getline(cin,name);
  file<<name;
  string space;
  space=" ";
  file<<space;
  file<<kya;
}
else{
  cout<<"OOPS!! You Loose\n";
}
up:
cout<<"\nWanna Try Again?? (y/n)";
char ans=getche();
if(ans=='y'){
  main();
}
else if(ans=='n'){
  exit(0);
}
else{
  cout<<"\nINVALID OPTION TRY AGAIN\n";
  goto up;
}

}

void startgame(){
  int score=0;
  char bnm[10][10]={};
  bnm[4][5]=248;
  cout<<"\n\n\t\t\t\t\t\t\tGame will going to start in just a while....So hold down your keys\n";
  Sleep(5000);
  int r=0,l=1,u=0,d=0;
  while(1){
    system("cls");
    for(int i=0;i<10;i++){
      bnm[0][i]=219;
      bnm[9][i]=219;
    }
    bnm[1][0]=bnm[1][9]=bnm[2][0]=bnm[2][9]=bnm[3][0]=bnm[3][9]=bnm[4][0]=bnm[4][9]=bnm[5][0]=bnm[5][9]=bnm[6][0]=bnm[6][9]=bnm[7][0]=bnm[7][9]=bnm[8][0]=bnm[8][9]=219;

cout<<"\n\n\n\n\n\n\n";
    for(int i=0;i<10;i++){
      cout<<"\t\t\t\t\t\t\t\t\t\t";
      for(int j=0;j<10;j++){
        cout<<bnm[i][j]<<"   ";
      }
      cout<<endl<<endl;
    }
    cout<<"\n\n\t\t\t\t\t\t\tSCORE: "<<score<<"\n\n";
    int x=rand()%3;
    if(x==1 || x==0){
    int bala = rand()%4;
    if(bala==0){
      r=1;
      l=0;
      u=0;
      d=0;
    }
    if(bala==1){
      r=0;
      l=1;
      u=0;
      d=0;
    }
    if(bala==2){
      r=0;
      l=0;
      u=1;
      d=0;
    }
    if(bala==3){
      r=0;
      l=0;
      u=0;
      d=1;
    }
}
    if(r==1){
      for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
          if(bnm[i][j]==(char)248){
            bnm[i][j]=' ';
            if(bnm[i][j+1]==(char)219 && r==1){
              endgame(score);
            }
            else{
              bnm[i][j+1]=248;
              score++;
              goto down;
            }
          }
        }
      }
    }

        if(l==1){
          for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
              if(bnm[i][j]==(char)248){
                bnm[i][j]=' ';
                if(bnm[i][j-1]==(char)219 && l==1){
                  endgame(score);
                }
                else{
                  bnm[i][j-1]=248;
                  score++;
                  goto down;
                }
              }
            }
          }
        }

        if(u==1){
              for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                  if(bnm[i][j]==(char)248){
                    bnm[i][j]=' ';
                    if(bnm[i-1][j]==(char)219 && u==1){
                      endgame(score);
                    }
                    else{
                      bnm[i-1][j]=248;
                      score++;
                      goto down;
                    }
                  }
                }
              }
            }

          if(d==1){
                  for(int i=0;i<10;i++){
                    for(int j=0;j<10;j++){
                      if(bnm[i][j]==(char)248){
                        bnm[i][j]=' ';
                        if(bnm[i+1][j]==(char)219 && d==1){
                          endgame(score);
                        }
                        else{
                          bnm[i+1][j]=248;
                          score++;
                          goto down;
                        }
                      }
                    }
                  }
                }
down:

DWORD time,out;
time=GetTickCount();
out=time+300;
while((out>GetTickCount())){
  char key;
  if(kbhit()){
    key = getche();
    if(key==72){
      u=1;
      r=0;
      l=0;
      d=0;
    }
    else if(key==77){
      u=0;
      r=1;
      l=0;
      d=0;
    }
    else if(key==75){
      u=0;
      r=0;
      l=1;
      d=0;
    }
    else if(key==80){
      u=0;
      r=0;
      l=0;
      d=1;
    }
  }
}//end_of_input

if(r==1){
  for(int o=0;o<20;o++)
  rand();
}
if(l==1){
  for(int o=0;o<18;o++)
  rand();
}
if(u==1){
  for(int o=0;o<24;o++)
  rand();
}
if(d==1){
  for(int o=0;o<22;o++)
  rand();
}
}//endwhile
}//end_of_startgame

int main(){
  system("cls");
  system("color 1e");
  printf("\n\n\n\n\t\t\t\t\t\t\t***************************************************************\n");
  printf("\t\t\t\t\t\t\t***************************************************************\n");
  printf("\t\t\t\t\t\t\t*\t\t\t\t\t\t\t      *\n");
  printf("\t\t\t\t\t\t\t*  *****   ******   *       ******   *     *   *****   *****  *\n");
  printf("\t\t\t\t\t\t\t*  *   *   *    *   *       *    *   * *   *   *       *      *\n");
  printf("\t\t\t\t\t\t\t*  ****    ******   *       ******   *  *  *   *       *****  *\n");
  printf("\t\t\t\t\t\t\t*  *   *   *    *   *       *    *   *   * *   *       *      *\n");
  printf("\t\t\t\t\t\t\t*  *****   *    *   *****   *    *   *     *   *****   *****  *\n");
  printf("\t\t\t\t\t\t\t*\t\t\t\t\t\t\t      *\n");
  printf("\t\t\t\t\t\t\t***************************************************************\n");
  printf("\t\t\t\t\t\t\t***************************************************************\n");
  printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t-Tushar Gupta");
  printf("\n\t\t\t\t\t\t\tUse the Arrow Keys to balance\n");

  fstream infile;
  infile.open("recources/balancescore.txt");
if(!infile){
  fstream file("recources/balancescore.txt",ios::out);
}
  char s[100];

  if(infile >> s){
    cout<<"\n\t\t\t\t\t\t\tHiscore by: ";
    int check=atoi(s);
    while(check==0){
    cout<<s<<" ";
    infile>>s;
    check=atoi(s);
  }
  a=atoi(s);
  cout<<a;
}
  else{
    cout<<"\n\t\t\t\t\t\t\tHighsore by: ERROR:: No Highscore to show";
    a=0;
  }
  infile.close();
  cout<<"\n\t\t\t\t\t\t\tIt's Time to make a new high score";
  printf("\n\t\t\t\t\t\t\tPress Any key to start the game");
  getch();
  score=0;
  startgame();
}
