#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>

#define visiblerl(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z]='|'; bnm[x][z+5]='|'; bnm[x+1][z]='|'; bnm[x+1][z+5]='|';}
#define visiblelu(x,y,z) if(bnm[x][y]==(char)157){bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_'; bnm[x][z]='|'; bnm[x+1][z]='|';}
#define visibleru(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z+5]='|'; bnm[x+1][z+5]='|'; bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_';}
#define visiblerd(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z+5]='|'; bnm[x+1][z+5]='|'; bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_';}
#define visibleld(x,y,z) if(bnm[x][y]==(char)157){bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_'; bnm[x][z]='|'; bnm[x+1][z]='|';}
#define visibleud(x,y,z) if(bnm[x][y]==(char)157){bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_'; bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_';}

#define visibleu(x,y,z) if(bnm[x][y]==(char)157){bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_';}
#define visibled(x,y,z) if(bnm[x][y]==(char)157){bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_';}
#define visibler(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z+5]='|'; bnm[x+1][z+5]='|';}
#define visiblel(x,y,z)  if(bnm[x][y]==(char)157){bnm[x][z]='|'; bnm[x+1][z]='|';}

#define visiblerld(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z]='|'; bnm[x][z+5]='|'; bnm[x+1][z]='|'; bnm[x+1][z+5]='|'; bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_';}
#define visiblerlu(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z]='|'; bnm[x][z+5]='|'; bnm[x+1][z]='|'; bnm[x+1][z+5]='|'; bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_';}
#define visiblerud(x,y,z) if(bnm[x][y]==(char)157){bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_'; bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_'; bnm[x][z+5]='|'; bnm[x+1][z+5]='|';}
#define visiblelud(x,y,z) if(bnm[x][y]==(char)157){bnm[x][z]='|'; bnm[x+1][z]='|'; bnm[x-1][y]='_'; bnm[x-1][y-1]='_'; bnm[x-1][y+1]='_'; bnm[x-1][y+2]='_'; bnm[x+1][y]='_'; bnm[x+1][y-1]='_'; bnm[x+1][y+1]='_'; bnm[x+1][y+2]='_';}

#define position(x,y) if(bnm[x][y]==(char)157){
#define d(x,y) if(input=='s'){bnm[x][y]=' '; bnm[x+2][y]=157;}
#define u(x,y) if(input=='w'){bnm[x][y]=' '; bnm[x-2][y]=157;}
#define l(x,y) if(input=='a'){bnm[x][y]=' '; bnm[x][y-5]=157;}
#define r(x,y) if(input=='d'){bnm[x][y]=' '; bnm[x][y+5]=157;}
#define e goto end;
using namespace std;

int main(){
  top:
  system("color 1e");
  cout<<"\t\t\t\t\t\t\t\t\tMAZE 2: INVISIBLE MAZE";
  cout<<"\n\t\t\t\t\t\t\t\t\t Made by: TUSHAR GUPTA";

  cout<<"\n\nUse The keys: 'W','A','S','D' To Move \n";
  cout<<"\nYOU HAVE ONLY HUNDRED MOVES TO FIND THE EXIT SO GOOD LUCK\n";
  cout<<"Enter any key to start";
  getche();

char bnm[21][51]={};
bnm[5][22]=157;
int score=100;
int j=2;
while(1){
  system("cls");
  visiblerlu(1,2,0); visiblerl(3,2,0); visiblel(5,2,0); visibleld(7,2,0); visiblelu(9,2,0); visiblerl(11,2,0); visiblel(13,2,0); visiblerl(15,2,0); visiblerl(17,2,0); visibleld(19,2,0);
  visiblelu(1,7,5); visiblerl(3,7,5); visibled(5,7,5); visibleud(7,7,5); visibleud(9,7,5); visiblelud(11,7,5); visibleud(13,7,5); visiblelu(15,7,5); visiblerld(17,7,5); visibleud(19,7,5);
  visibleu(1,12,10); visibleld(3,12,10); visibleu(5,12,10); visibled(7,12,10); visibleud(9,12,10); visibleu(11,12,10); visibler(13,12,10); visibled(15,12,10); visiblelu(17,12,10); visibled(19,12,10);
  visibleud(1,17,15); visibleud(3,17,15); visibleud(5,17,15); visibleru(7,17,15); visibler(9,17,15); visibled(11,17,15); visiblelud(13,17,15); visibleud(15,17,15); visibleud(17,17,15); visibleud(19,17,15);
  visibleud(1,22,20); visibleu(3,22,20); visiblel(7,22,20); visiblerl(9,22,20); visiblerd(11,22,20); visibleud(13,22,20); visiblerud(15,22,20); visiblerud(17,22,20); visibleud(19,22,20);
  visiblerud(1,27,25);  visibleud(3,27,25);  visiblerud(5,27,25);  visibleud(7,27,25);  visiblelu(9,27,25);  visiblerl(11,27,25); visiblerl(15,27,25);  visiblerl(17,27,25);  visibled(19,27,25);
  visiblelu(1,32,30);  visibler(3,32,30);  visiblel(5,32,30);  visiblerd(7,32,30);  visibleud(9,32,30);  visiblelu(11,32,30); visiblerl(15,32,30);  visiblerld(17,32,30);  visibleud(19,32,30);
  visibleu(1,37,35);  visiblerld(3,37,35);  visibleud(5,37,35);  visiblerlu(7,37,35);  visibled(9,37,35);  visibleud(11,37,35);  visibleud(13,37,35);  visiblelu(15,37,35);  visiblerl(17,37,35);  visiblerd(19,37,35);
  visibleud(1,42,40);  visiblelu(3,42,40);  visibler(5,42,40);  visiblerld(7,42,40);  visibleu(9,42,40);  visiblerd(11,42,40);  visibleud(13,42,40);  visibleru(15,42,40);  visiblerld(17,42,40);  visiblelud(19,42,40);
  visiblerud(1,47,45);  visiblerud(3,47,45);  visiblerlu(5,47,45);  visiblerl(7,47,45);  visiblerd(9,47,45);  visiblerlu(11,47,45);  visibler(13,47,45);  visiblerl(15,47,45);  visiblerl(17,47,45);  visiblerd(19,47,45);

cout<<"\n\n\n\n";
  for(int i=0;i<21;i++){
    cout<<endl<<"\t\t\t\t\t\t";
    for(int j=0;j<51;j++){
      cout<<bnm[i][j];
    }
  }

  for(int i=0;i<21;i++){
    for(int j=0;j<51;j++){
      if((i==1 || i==3 || i==5 || i==7 || i==9 || i==11 || i==13 || i==15 || i==17 || i==19)&&(j==2 || j==7 || j==17 || j==12 || j==22 || j==27 || j==32 || j==37 || j==42 || j==47)){}
      else{bnm[i][j]=' ';}
    }
  }
  cout<<"\n\nscore:  "<<score<<endl;

  if(score==0){
    goto loose;
  }
  score--;

  if(bnm[19][42]==(char)157){
    goto win;
  }

  char input=getche();
  position(1,2) d(1,2); e}
  position(3,2) d(3,2); u(3,2); e}
  position(5,2) u(5,2); r(5,2); d(5,2); e}
  position(7,2) u(7,2); r(7,2); e}
  position(9,2) r(9,2); d(9,2); e}
  position(11,2) u(11,2); d(11,2); e}
  position(13,2) u(13,2); r(13,2); d(13,2); e}
  position(15,2) u(15,2); d(15,2); e}
  position(17,2) u(17,2); d(17,2); e}
  position(19,2) u(19,2); r(19,2); e}
  position(1,7) r(1,7); d(1,7); e}
  position(3,7) u(3,7); d(3,7); e}
  position(5,7) u(5,7); r(5,7); l(5,7); e}
  position(7,7) r(7,7); l(7,7); e}
  position(9,7) r(9,7); l(9,7); e}
  position(11,7) r(11,7); e}
  position(13,7) r(13,7); l(13,7); e}
  position(15,7) r(15,7); d(15,7); e}
  position(17,7) u(17,7); e}
  position(19,7) r(19,7); l(19,7); e}
  position(1,12) r(1,12); l(1,12); d(1,12); e}
  position(3,12) u(3,12); r(3,12); e}
  position(5,12) r(5,12); l(5,12); d(5,12); e}
  position(7,12) u(7,12); r(7,12); l(7,12); e}
  position(9,12) r(9,12); l(9,12); e}
  position(11,12) r(11,12); l(11,12); d(11,12); e}
  position(13,12) u(13,12); d(13,12); l(13,12); e}
  position(15,12) u(15,12); r(15,12); l(15,12); e}
  position(17,12) r(17,12); d(17,12); e}
  position(19,12) u(19,12); r(19,12); l(19,12); e}
  position(1,17) r(1,17); l(1,17); e}
  position(3,17) r(3,17); l(3,17); e}
  position(5,17) r(5,17); l(5,17); e}
  position(7,17) d(7,17); l(7,17); e}
  position(9,17) u(9,17); l(9,17); d(9,17); e}
  position(11,17) r(11,17); l(11,17); u(11,17); e}
  position(13,17) r(13,17); e}
  position(15,17) r(15,17); l(15,17); e}
  position(17,17) r(17,17); l(17,17); e}
  position(19,17) r(19,17); l(19,17); e}
  position(1,22) r(1,22); l(1,22); e}
  position(3,22) r(3,22); l(3,22); d(3,22); e}
  position(5,22) u(5,22); d(5,22); r(5,22); l(5,22); e}
  position(7,22) u(7,22); d(7,22); r(7,22); e}
  position(9,22) u(9,22); d(9,22); e}
  position(11,22) u(11,22); l(11,22); e}
  position(13,22) r(13,22); l(13,22); e}
  position(15,22) l(15,22); e}
  position(17,22) l(17,22); e}
  position(19,22) r(19,22); l(19,22); e}
  position(1,27) l(1,27); e}
  position(3,27) r(3,27); l(3,27); e}
  position(5,27) l(5,27); e}
  position(7,27) l(7,27); r(7,27); e}
  position(9,27) r(9,27); d(9,27); e}
  position(11,27) u(11,27); d(11,27); e}
  position(13,27) u(13,27); d(13,27); r(13,27); l(13,27); e}
  position(15,27) u(15,27); d(15,27); e}
  position(17,27) u(17,27); d(17,27); e}
  position(19,27) u(19,27); r(19,27); l(19,27); e}
  position(1,32) r(1,32); d(1,32); e}
  position(3,32) u(3,32); d(3,32); l(3,32); e}
  position(5,32) u(5,32); d(5,32); r(5,32); e}
  position(7,32) u(7,32); l(7,32); e}
  position(9,32) r(9,32); l(9,32); e}
  position(11,32) r(11,32); d(11,32); e}
  position(13,32) u(13,32); r(13,32); l(13,32); d(13,32); e}
  position(15,32) u(15,32); d(15,32); e}
  position(17,32) u(17,32); e}
  position(19,32) r(19,32); l(19,32); e}
  position(1,37) r(1,37); l(1,37); d(1,37); e}
  position(3,37) u(3,37); e}
  position(5,37) r(5,37); l(5,37); e}
  position(7,37) d(7,37); e}
  position(9,37) u(9,37); r(9,37); l(9,37); e}
  position(11,37) r(11,37); l(11,37); e}
  position(13,37) r(13,37); l(13,37); e}
  position(15,37) d(15,37); r(15,37); e}
  position(17,37) u(17,37); d(17,37); e}
  position(19,37) u(19,37); l(19,37); e}
  position(1,42) r(1,42); l(1,42); e}
  position(3,42) r(3,42); d(3,42); e}
  position(5,42) u(5,42); d(5,42); l(5,42); e}
  position(7,42) u(7,42); e}
  position(9,42) r(9,42); l(9,42); d(9,42); e}
  position(11,42) u(11,42); l(11,42); e}
  position(13,42) r(13,42); l(13,42); e}
  position(15,42) l(15,42); d(15,42); e}
  position(17,42) u(17,42); e}
  position(19,42) r(19,42); e}
  position(1,47) l(1,47); e}
  position(3,47) l(3,47); e}
  position(5,47) d(5,47); e}
  position(7,47) u(7,47); d(7,47); e}
  position(9,47) u(9,47); l(9,47); e}
  position(11,47) d(11,47); e}
  position(13,47) u(13,47); d(13,47); l(13,47); e}
  position(15,47) u(15,47); d(15,47); e}
  position(17,47) u(17,47); d(17,47); e}
  position(19,47) u(19,47); l(19,47); e}
end:
cout<<"";
}
win:
cout<<"\n\nCONGRATULATIONS YOU WIN THE GAME YOU GOT OUT";
j=0;
if(j==2){
  loose:
  cout<<"YOU LOSE THE GAME YOU CAN'T FIND THE EXIT\n\n";
  goto top;
}

}
