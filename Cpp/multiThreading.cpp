/**
 * Three threads: main(), foo() and bar()
 * Run with commandline commands: 
 * $ g++ multiThreading.cpp -o a -pthread
 * $ ./a
 */

#include <iostream>
#include <thread>
#include <chrono>

void foo()
{
    while(true){
        printf("I'm in foo\n");
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void bar()
{
    while(true){
        printf("I'm in Bar\n");
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main()
{
    std::thread first (foo);
    first.detach();
    std::thread second (bar);
    second.detach();

    std::cout << "main, foo and bar now executing concurrently ...\n";
    
    for(int i= 0; i<3 ; i++){
        printf("main is running...\n");
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    std::cout << "main is completed\n";

    return 0;
}