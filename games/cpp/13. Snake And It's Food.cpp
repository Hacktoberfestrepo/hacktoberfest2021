#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
int main(){
  system("color 1e");

int r=1,l=0,u=0,d=0;
int score=1;
  char bnm[1000]={};
map<int,int> map;


for(int i=0;i<20;i++){
  rand();
}

int apple;
up:
apple=rand()%950;
if(apple<51 || (apple+1)%50==0 || apple%50==0){
  goto up;
}

bnm[apple]=235;
int left=0;
top:
for(int i=0;i<1000;i++){
  map[i]=0;
}

map[567]=1;
int head=567;
system("cls");
cout<<"\t\t\t\t\t\t\t\t\tSNAKE AND IT'S FOOD\n\n";
cout<<"\t\t\t\t\t\t\t\t\t\t\t\t-TUSHAR GUPTA";
cout<<"\n\n\n\nUse the keys: 'w','s','a','d' to move the snake";
cout<<"\nPress any key to start the game\n";
getche();




while(1){
  if(r==1){
    for(int i=0;i<10;i++){
      rand();
    }
  }
  if(l==1){
    for(int i=0;i<20;i++){
      rand();
    }
  }
  if(u==1){
    for(int i=0;i<23;i++){
      rand();
    }
  }
  if(d==1){
    for(int i=0;i<12;i++){
      rand();
    }
  }
  system("cls");

  for(int i=1;i<1000;i++){
    if(map[i]>0){ bnm[i]=221;}
    if(map[i]==0){if(bnm[i]==(char)235){} else bnm[i]=' ';}
  }

cout<<"\n\n\n\n\n\n\n";
  for(int i=0;i<1000;i++){
    if(i%50==0){cout<<endl<<"\t\t\t\t\t\t\t"; bnm[i]=(char)221;}
    if((i+1)%50==0){bnm[i]=(char)221;}
    if(i<50){bnm[i]=(char)221;}
    if(i>=950){bnm[i]=(char)221;}
    cout<<bnm[i];
  }
  cout<<"\n\n"<<"\t\t\t\t\t\t\tSCORE:  "<<score;
int count=0;
  for(int i=0;i<1000;i++){
    if(bnm[i]!=(char)235){
      count++;
    }
  }

  if(count==1000){
    score++;
    left=2;
    cout<<"\a";
    if(r==1){map[apple+1]=score;}
    else if(l==1){map[apple-1]=score;}
    else if(u==1){map[apple-50]=score;}
    else if(d==1){map[apple+50]=score;}
    up1:
    apple=rand()%950;
    if(apple<51 || (apple+1)%50==0 || apple%50==0 ){
      goto up1;
    }

    bnm[apple]=235;

    goto down;
  }

if(r==1){
  for(int i=51;i<949;i++){
    if(bnm[i]==(char)221){
      if(map[i]<=0){}
      else{
      map[i]--;
      if(i==head){
       if(map[i+1]!=0 && map[i+1]<score && left==0){goto end;}
      map[i+1]=score;
    head++;}
    if((i+1)%50==0){goto end;}
      }
    }
  }
}
else if(l==1){
  for(int i=51;i<949;i++){
    if(bnm[i]==(char)221){
      if(map[i]<=0){}
      else{
      map[i]--;
      if(i==head){
       if(map[i-1]!=0 &&map[i-1]<score && left==0){goto end;}
      map[i-1]=score;
    head--;}
    if((i-1)%50==0){goto end;}
      }
    }
  }
}
else if(u==1){
  for(int i=51;i<949;i++){
    if(bnm[i]==(char)221){
      if(map[i]<=0){}
      else{
      map[i]--;
      if(i==head){
       if(map[i-50]!=0 && map[i-50]<score && left==0){ goto end;}
      map[i-50]=score;
            head-=50;

    if(i-50<50){ goto end;}
  }
      }
    }
  }
}else if(d==1){
  for(int i=51;i<949;i++){
    if(bnm[i]==(char)221){
      if(map[i]<=0){}
      else{
      map[i]--;
      if(i==head){
       if(map[i+50]!=0 && map[i+50]<score && left==0){goto end;}
      map[i+50]=score;
        head+=50;
    if(i+50>950){ goto end;}
  }
      }
    }
  }
}
down:
left--;
if(left<0){
  left=0;
}
DWORD Time,z;
Time=GetTickCount();
z=Time+50;
while(z>GetTickCount()){
  if(kbhit())
{
char input=getche();
if(input=='w' && d!=1){u=1; r=0; l=0; d=0;}
if(input=='a' && r!=1){u=0; r=0; l=1; d=0;}
if(input=='s' && u!=1){u=0; r=0; l=0; d=1;}
if(input=='d' && l!=1){u=0; r=1; l=0; d=0;}
}

}


}
end:
cout<<"\a";
cout<<"\n\n\t\t\t\t\t\t\tYOU LOSE";
Sleep(3000);
char a;
cout<<"\n\n\a\t\t\t\t\t\t\tWanna Continue From Where You Lost??\n\n\t\t\t\t\t\t\tIf Yes Scan any Character\n\t\t\t\t\t\t\t";
cin>>a;
goto top;
  return 0;
}
