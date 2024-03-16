#include <iostream>
#include <conio.h>


using namespace std;

int main() {
    bool exit = false;
    char znak;
    int x = 0,y = 0,wynik = 0;
    while(!exit){
        cout<<"Podaj x:"<<'\n';
        cin>>x;
        cout<<"Podaj y:"<<'\n';
        cin>>y;
        wynik = x*y;
        cout<<"Wynik wynosi:"<<wynik<<'\n';
        cout<<"Chcesz zakonczyc dzialanie programu?"<<'\n';
        znak = getch();
        if(znak == 'e'){
            exit = true;
        }

    }


    return 0;
}