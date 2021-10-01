// problem statement : https://medium.com/algorithm-and-datastructure/mars-rover-9700e868944c

#include<bits/stdc++.h>
using namespace std;


class Rover{
    int x;
    int y;
    char orientation;     // can be (N,S,E,W)
    
    void rotateLeft();
    void rotateRight();
    void moveForward();

public:
    Rover(int x, int y, char orientation){
        this->x = x;
        this->y = y;
        this->orientation = orientation;
    }

    void displayPosition();
    void processMessage(string message);
};

void Rover :: rotateLeft(){
    switch (orientation)
    {
        case 'N': 
            orientation = 'W';
            break;
        case 'S':
            orientation = 'E';
            break;
        case 'E':
            orientation = 'N';
            break;
        case 'W':
            orientation = 'S';
            break;
        default:
            break;
    }
    return ;
}

void Rover :: rotateRight(){
    switch(orientation){
        case 'N':
            orientation = 'E';
            break;
        case 'S':
            orientation = 'W';
            break;
        case 'E':
            orientation = 'S';
            break;
        case 'W':
            orientation = 'N';
            break;
        default:
            break;
    }
    return ;
}

void Rover:: moveForward(){
    switch (orientation)
    {
    case 'N':
        y+=1;
        break;
    case 'S':
        y-=1;
        break;
    case 'E':
        x+=1;
        break;
    case 'W':
        x-=1;
        break;
    default:
        break;
    }
    return ;
}

void Rover:: displayPosition(){
    cout<< x << ' ' << y << ' ' << orientation << endl;
    return;
}

void Rover :: processMessage(string msg){
    for(int i=0;i<msg.size();i++){
        if(msg[i] == 'L'){
            rotateLeft();
        }
        else if(msg[i] == 'R'){
            rotateRight();
        }else{
            moveForward();
        }
    }
    return;
}

int main(){
    int x,y;
    char orientation;
    cin>>x>>y>>orientation;
    Rover r = Rover(x,y,orientation);
    r.processMessage("MMRMMRMRRM");
    r.displayPosition();
    return 0;
}