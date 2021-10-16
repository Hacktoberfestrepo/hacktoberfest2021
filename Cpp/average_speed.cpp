#include <iostream>
using namespace std;
int main(){

    float X, x_Speed, Y, y_Speed, z_Speed, z_Minutes , total_distance ,total_time , avg_speed;

    cout<<"input X in km";
    cin>>X;
    cout<<"input x_Speed in m/s";
    cin>>x_Speed;
    cout<<"input y in km";
    cin>>Y;
    cout<<"input y_Speed in km/h";
    cin>>y_Speed;
    cout<<"input z_Speed km/h";
    cin>>z_Speed;
    cout<<"input z_Minutes min";
    cin>>z_Minutes;

    total_distance = X + Y + (z_Speed * (z_Minutes/60));
    total_time = (X / (x_Speed * 3600/1000)) + (Y / y_Speed) + (z_Minutes/60);
    avg_speed = total_distance/total_time ;
    cout<<"Average speed in km/h = "<< avg_speed<<endl;
    return 0;
}
