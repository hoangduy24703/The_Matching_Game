//#include "creBoard.h"
#include "console.h"
#include"timer.h"
#include <Mmsystem.h>
#include<thread>
#include"bg.h"
#include"Menu.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
//int** core;
//char** front;
int main()
{
    system("title The Matching Game");
    Nocursortype();
    SetFont();
    createconsole();
    console();
    DrawMenu();
    move1();
    /*int size = 4;
    int n = 1;
    int* a =(int*)malloc(1 * sizeof(int));
    a = &n;  
    Board(core, front, size);
    thread th1(BasicMode, std::ref(core), std::ref(front), size,std::ref(a));
    thread th2(timer,std::ref(a),size,"B");
    th1.join();
    th2.join();
    for (int i = 0; i < size; i++)
    {
        delete[] core[i];
        delete[] front[i];
    };
    delete[] core;
    delete[] front;
    free(a);*/
    return 0;
}