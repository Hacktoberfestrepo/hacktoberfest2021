#include<windows.h>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
  system("color 1f");
up1:
   cout<<"Welcome to my game:\t\t\t\t\tMISSI ANTI MISSI\n\n\t\t\t\t\t\tA Game Made by:- TUSHAR GUPTA\n\n";
   cout<<"Story\n\n";
   cout<<"\tIn this world their are two militry bases namely:- Start Base: 'S' and End base: 'E' \n\tE Base is the enemy base and have captured your friend \n\tEnemy is droppping the bombs at you\n\t";
   cout<<"And you have to face them with the ANTI-MISSILES altogether you don't want to harm your friend\n\tSo if either any bombs came to A-Base or any Anti-Missiles came to B-Base you lose\n";
   cout<<"\tYou can use ANY key to launch Anti-Missiles\n\n\n";
up:
   cout<<"\nChoose your difficulty level\n1)Easy\n2)Medium\n3)Hard\n\n";
   int choose,t;
   cin>>choose;
   if(choose==1){t=150;}
   else if(choose==2){t=100;}
   else if(choose==3){t=10;}
   else{cout<<"\nWrong Choice\n"; goto up;}

char line[15]={};

while(1){
system("cls");

if(line[14]=='A'){
  cout<<"You lost the game"<<endl;
  if(!kbhit()){
    goto abcd;
    char b=getche();
  }
}

if(line[14]=='A')
line[14]=' ';

for(int i=0;i<13;i++){
  if(line[i]=='A' && line[i+2]=='B'){
    line[i]=' '; line[i+2]=' ';
  }
  if(line[i]=='A' && line[i+1]=='B'){
    line[i]=' '; line[i+1]=' ';
  }
}

if(line[0]=='B'){
  cout<<"You lost the game"<<endl;
  if(!kbhit()){
    goto abcd;
    char b=getche();
  }
}

for(int i=0;i<14;i++){
  if( line[i]=='A' ){
    line[i]=' ';
    line[i+1]='A';
    i++;
  }
}

for(int i=14;i>0;i--){
  if(line[i]=='B'&& line[i-1]!='A'){
    line[i]=' ';
    line[i-1]='B';
    i--;
  }
}

for(int i=0;i<1;i++){
  int j=rand()%10;

  if(j==2 || j==5){
    line[14]='B';
  }
}
cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\tS"<<line[0]<<"  "<<line[1]<<"  "<<line[2]<<"  "<<line[3]<<"  "<<line[4]<<"  "<<line[5]<<"  "<<line[6]<<"  "<<line[7]<<"  "<<line[8]<<"  "<<line[9]<<"  "<<line[10]<<"  "<<line[11]<<"  "<<line[12]<<"  "<<line[13]<<"  "<<line[14]<<"  "<<"E";

DWORD Time,z;

Time=GetTickCount();
z=Time+t;
while((z>GetTickCount())){

  fflush(stdin);
if(kbhit()){line[0]='A';
char a;
a=getche();}
}}
abcd: cout<<"\n\nWanna Try again if yes press any key with enter\n\n\n";
char ab;
cin>>ab;
goto up1;
  return 0;}
