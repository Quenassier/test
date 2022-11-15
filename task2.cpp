#include <iostream>

using namespace std;

void output(string otvet){
    cout<<otvet;
}

void solution(int x, int y){

    string otvet;

    if(x>0 && y>0){
        otvet = "1";
    } if(x<0 && y>0){
        otvet = "2";
    } if(x<0 && y<0){
       otvet = "3"; 
    } if(x>0 && y<0){
        otvet = "4";
    }

    output(otvet);
}

void input(){
    int x, y;
    cin>>x>>y;

    solution(x, y);
}

int main(){
    input();
    return 0;
}

