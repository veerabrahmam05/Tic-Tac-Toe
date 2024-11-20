#include<bits/stdc++.h>
using namespace std;

void board(char *spaces) {
    cout<<endl;
    cout<< "     |     |     "<<endl;
    cout<< "  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<endl;
    cout<< "_____|_____|_____"<<endl;
    cout<< "     |     |     "<<endl;
    cout<< "  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<endl;
    cout<< "_____|_____|_____"<<endl;
    cout<< "     |     |     "<<endl;
    cout<< "  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<endl;
    cout<< "     |     |     "<<endl;
}

void playerMove(char *spaces, char player) {
    int position;
    do {
        cout << "Enter your position (1-9): ";
        cin >> position;
        position--;
        if(spaces[position] == ' ') {
            spaces[position] = player;
            break;
        } 
    } while(!(position >= 0 && position <= 8));
}

void computerMove(char *spaces, char computer) {
    int position;
    srand(time(0));
    while(true) {
        position = rand() % 9;
        if(spaces[position] == ' ') {
            spaces[position] = computer;
            break;
        }
    }
}

bool anyWinner(char *spaces, char player, char computer) {
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]) {
        (spaces[0] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]) {
        (spaces[3] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]) {
        (spaces[6] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]) {
        (spaces[0] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]) {
        (spaces[1] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]) {
        (spaces[2] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]) {
        (spaces[0] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]) {
        (spaces[2] == player)? cout<<"YOU WON!"<<endl : cout<<"YOU LOSE!"<<endl;
    } else {
        return false;
    }
    return true;
}

bool isTie(char *spaces) {
    for(int i = 0; i < 9; i++) {
        if(spaces[i] == ' ') {
            return false;
        }
    }
    cout<<"IT'S A TIE!"<<endl;
    return true;
}


int main() {
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player = 'X';
    char computer = 'O';
    bool running = true;
    board(spaces);
    while (running) {
        playerMove(spaces, player);
        board(spaces);
        if(anyWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        if(isTie(spaces)) {
            running = false;
            break;
        }

        computerMove(spaces, computer);
        board(spaces);
        if(anyWinner(spaces, player, computer)) {
            running = false;
            break;
        }
        if(isTie(spaces)) {
            running = false;
            break;
        }
    }
    cout<<"THANKS FOR PLAYING!"<<endl;
    return 0;
}