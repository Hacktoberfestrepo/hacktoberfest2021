#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>

using namespace std;
int main();
void end(int a,int b){
  cout<<"\nGame End\n";
  if(a==1){
    cout<<"Player one is the Winner\n";
  }
  else{
    cout<<"Player two is the Winner\n";
  }
  cout<<"\n\nWANTS TO PLAY AGAIN?? (y/n)\n";
  char ans;
  up:
  ans=getche();
  if(ans=='y'){
    main();
  }
  else if(ans=='n'){
    exit(0);
  }
  else {
    goto up;
  }
  exit(0);
}

void game(){

int r=1,l=0,u=1,d=0;

  char bnm[1001]={};
  int num=50*8+7;
  int top1=num,top2=num+37,last1=num+100;
  int last2=top2+100;
  for(int i=1;i<4;i++){
    bnm[num]=222;
    bnm[num+37]=222;
    bnm[num+10]=232;
    bnm[num+15-200]=232;
    bnm[num+27-100]=232;
    bnm[num+22+400]=232;
    bnm[num+19+150]=232;
    num+=50;
  }

bnm[425]=175;
while(1){
  system("cls");
  cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
  for(int i=1;i<1001;i++){
    if(i<52){bnm[i]=178;}
    if((i-1)%50==0){bnm[i]=178;}
    if(i%50==0){bnm[i]=178;}
    if(i>949){bnm[i]=178;}
    cout<<bnm[i];
    if(i%50==0){cout<<endl<<"\t\t\t\t\t\t\t\t";}
  }//printend

for(int i=52;i<950;i++){
  if(bnm[i]==(char)174){
    if(u==0 && d==0){
      if(bnm[i-1]==(char)222 || bnm[i-1]==(char)232){
        l=0;
        r=1;
        bnm[i]=175;
        int temp=rand();
          if(temp%10==2  || temp%10==5 || temp%10==7 || temp%10==4){
            u=1;
            d=0;
          }
          if(temp%10==3 || temp%10==0 || temp%10==6 || temp%10==9 || temp%10==8){
            d=1;
            u=0;
          }
          if(temp%10==1){
            d=0;
            u=0;
          }
        goto end;
      }
      else{
        bnm[i]=' ';
        bnm[i-1]=174;
      }
    }
    if(u==1){
      if(i-50<50){
        d=1;
        u=0;
      }
      else if(bnm[i-1]==(char)222 || bnm[i-1]==(char)232){
        l=0;
        r=1;
        bnm[i]=175;
        int temp=rand();
          if(temp%10==2  || temp%10==5 || temp%10==7 || temp%10==4){
            u=1;
            d=0;
          }
          if(temp%10==3 || temp%10==0 || temp%10==6 || temp%10==9 || temp%10==8){
            d=1;
            u=0;
          }
          if(temp%10==1){
            d=0;
            u=0;
          }
        goto end;
      }
      else{
        bnm[i]=' ';
        bnm[i-51]=174;
        goto end;
      }
    }//endofup
    else if(d==1){
      if(i+50>950){
        d=0;
        u=1;
      }
      else if(bnm[i-1]==(char)222 || bnm[i-1]==(char)232){
        l=0;
        r=1;
        bnm[i]=175;
        int temp=rand();
          if(temp%10==2  || temp%10==5 || temp%10==7 || temp%10==4){
            u=1;
            d=0;
          }
          if(temp%10==3 || temp%10==0 || temp%10==6 || temp%10==9 || temp%10==8){
            d=1;
            u=0;
          }
          if(temp%10==1){
            d=0;
            u=0;
          }
        goto end;
      }
      else{
        bnm[i]=' ';
        bnm[i+49]=174;
        goto end;
      }
    }//endofdown
  }//endofleft
  else if(bnm[i]==(char)175){
    if(u==0 && d==0){
      if(bnm[i+1]==(char)222 || bnm[i+1]==(char)232){
        l=1;
        r=0;
        int temp=rand();
          if(temp%10==2  || temp%10==5 || temp%10==7 || temp%10==4){
            u=1;
            d=0;
          }
          if(temp%10==3 || temp%10==0 || temp%10==6 || temp%10==9 || temp%10==8){
            d=1;
            u=0;
          }
          if(temp%10==1){
            d=0;
            u=0;
          }
        bnm[i]=174;
        goto end;
      }
      else{
        bnm[i]=' ';
        bnm[i+1]=175;
        goto end;
      }
    }
    if(u==1){
      if(i-50<50){
        d=1;
        u=0;
      }
      else if(bnm[i+1]==(char)222 || bnm[i+1]==(char)232){
        l=1;
        r=0;
        bnm[i]=174;
        int temp=rand();
          if(temp%10==2  || temp%10==5 || temp%10==7 || temp%10==4){
            u=1;
            d=0;
          }
          if(temp%10==3 || temp%10==0 || temp%10==6 || temp%10==9 || temp%10==8){
            d=1;
            u=0;
          }
          if(temp%10==1){
            d=0;
            u=0;
          }
        goto end;
      }
      else{
        bnm[i]=' ';
        bnm[i-49]=175;
        goto end;
      }
    }//endofup
   else if(d==1){
     if(i+50>950){
       d=0;
       u=1;
     }
     else if(bnm[i+1]==(char)222 || bnm[i+1]==(char)232){
       l=1;
       r=0;
       bnm[i]=174;
       int temp=rand();
         if(temp%10==2  || temp%10==5 || temp%10==7 || temp%10==4){
           u=1;
           d=0;
         }
         if(temp%10==3 || temp%10==0 || temp%10==6 || temp%10==9 || temp%10==8){
           d=1;
           u=0;
         }
         if(temp%10==1){
           d=0;
           u=0;
         }
       goto end;
     }
     else{
       bnm[i]=' ';
       bnm[i+51]=175;
       goto end;
     }
   }//endofdown
  }//endofrigth
}//endofmove
int yes;
yes=0;
for(int i=52;i<950;i++){
  if(bnm[i]==(char)174 || bnm[i]==(char)175){
    yes=1;
    break;
  }
}
if(yes==0){
  end(r,l);
}

end:

DWORD time,z;
time=GetTickCount();
z=time+1;
while((z>GetTickCount())){
  if(kbhit()){
    char input=getche();
        if(input=='w' && top1-50>50 && bnm[top1-50]!=(char)174){
            bnm[top1-50]=222;
            bnm[last1]=' ';
            top1=top1-50;
            last1=last1-50;
            for(int i=0;i<top1%20;i++){
              rand();
            }
        }
        if(input=='s' && last1+50<950 && bnm[last1+50]!=(char)174){
          bnm[top1]=' ';
          bnm[last1+50]=222;
          top1=top1+50;
          last1=last1+50;
          for(int i=0;i<top1%20;i++){
            rand();
          }
        }
        if(input=='o' && top2-50>50 && bnm[top2-50]!=(char)175){
            bnm[top2-50]=222;
            bnm[last2]=' ';
            top2=top2-50;
            last2=last2-50;
            for(int i=0;i<top2%20;i++){
              rand();
            }
        }
        if(input=='k' && last2+50<950 && bnm[last2+50]!=(char)175){
          bnm[top2]=' ';
          bnm[last2+50]=222;
          top2=top2+50;
          last2=last2+50;
          for(int i=0;i<top2%20;i++){
            rand();
          }
        }
  }
}//inputend
        }//whileend
      }//gameend

int main(){
  system("cls");
  cout<<"\t\t\t\t\t\t\t\t\t\tAIR HOCKEY\n";
  cout<<"\t\t\t\t\t\t\t\t\t\t\t\t-Tushar Gupta\n\n\n";
  cout<<"INSTRUCTIONS:-\n";
  cout<<"1: PLAYER 1 'w' TO MOVE THE SLIT UP AND 's' TO MOVE THE SLIT DOWN\n";
  cout<<"2: PLAYER 2 'o' TO MOVE THE SLIT UP AND 'k' TO MOVE THE SLIT DOWN\n";
  cout<<"3: DO NOT LET THE OBJECT PASS BEYOND YOUR RESPECTIVE SLIT ELSE YOU GONNA LOSE THE GAME\n";
  cout<<"4: BE AWARE OF THE OBSTACLES THEY MIGHT BE THE GAME CHANGER\n";
  cout<<"\n\n\nPRESS ANY KEY TO CONTINUE";

  system("color 1e");
  getche();
  system("cls");
  game();
  return 0;
}
