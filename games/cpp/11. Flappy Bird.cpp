#include<conio.h>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
  system("color 7c");
top:
  cout<<"Welcome to my game:\t\t\t\t\t     FLAPPY BIRD\n\n";
  cout<<"\t\t\t\t\t\t\tMade by: TUSHAR GUPTA\n\n";

  cout<<"\n\nUse any key to fly the bird\nRest Instructions you already know\n\n\n";

  cout<<"Press any key to start the game\n";
  getche();

  char bnm[20][50]={};
  int u=0;
  bnm[10][10]=228;
  int score=0;
  int speed=100;
  int diff=30;
  system("color 4e");
while(1){

system("cls");
for(int i=0;i<20;i++){
  if(bnm[i][0]=='|'){
    bnm[i][0]=' ';
  }
}


for(int i=0;i<20;i++){
  for(int j=1;j<50;j++){
    if(bnm[i][j]=='|'){
      bnm[i][j]=' ';
      bnm[i][j-1]='|';
    }
  }
}
int z=1;

for(int i=0;i<20;i++){
  for(int j=diff;j<50;j++){
    if(bnm[i][j]=='|'){z=0;}
  }
}

if(z==1){
  int y=rand()%10;
  if(y==0 || y==3 || y==7){
    for(int i=0;i<11;i++){
      bnm[i][49]='|';
    }
    for(int i=16;i<20;i++){
      bnm[i][49]='|';
    }
  }

  if(y==2 || y==9 || y==5 || y==6){
    for(int i=0;i<3;i++){
      bnm[i][49]='|';
    }
    for(int i=8;i<20;i++){
      bnm[i][49]='|';
    }
  }

  if(y==1 || y==4 || y==8){
    for(int i=0;i<7;i++){
      bnm[i][49]='|';
    }
    for(int i=12;i<20;i++){
      bnm[i][49]='|';
    }
  }
}
cout<<"\n\n\n\n\n\n";
for(int i=0;i<20;i++){
  cout<<endl<<"\t\t\t\t\t";
  for(int j=0;j<50;j++){
    cout<<bnm[i][j];
  }
}
score=score+1;
cout<<"\n\nSCORE: "<<score<<endl;
int x=0;
for(int i=0;i<20;i++){
  if(bnm[i][10]!=(char)228){
    x++;
  }
}
if(x==20){
  goto endg;
}

DWORD TIME,Z;
TIME=GetTickCount();
Z=TIME+speed;
if(score>100){
  speed=50;
}
if(score>200){
  speed=20;
}
if(score>300){
  speed=10;
}
if(score>400){
  speed=5;
}
if(score>500){
  speed=1;
}
if(score>200){
  diff=35;
}
if(score>400){
  diff=40;
}
if(score>600){
  diff=45;
}
while((Z>GetTickCount())){
  if(kbhit()){
    u=2;
    char y=getche();
  }
}

if(u==1 || u==2){
  for(int i=0;i<20;i++){
    if(bnm[i][10]==(char)228){
      bnm[i][10]=' ';
      if(i==0){goto endg;}
      bnm[i-1][10]=228;
      u--;
    }
  }
}
else{
  for(int i=0;i<20;i++){
    if(bnm[i][10]==(char)228){
      if(i==20){goto endg;}
      bnm[i][10]=' ';
      bnm[i+1][10]=228;
      break;
    }
  }
}

}
endg:

cout<<"YOU LOSE\n";
cout<<"\n\nWould you like to try again\nIf yes press any key with enter";
char blah;
cin>>blah;
system("cls");
goto top;
  return 0;
}
