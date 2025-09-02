// main.cpp
#include "GeneralLinkedList.h"
#include "TicTacToe.h"
#include "DLinkedList.h"
#include "CircularLinkedList.h"

#include <iostream>
using namespace std;

int LinearSum(int[], int);
void ReverseArray(int[], int, int);
void IterativeReverseArray(int[], int, int);
 

int main() {


    //clearBoard();

    //putMark(0, 0);
    //putMark(1, 1);
    //putMark(0, 1);
    //putMark(1, 0);
    //putMark(0, 2);

    //printBoard();

    //int winner = getWinner();
    //if (winner == X) cout << "X wins!" << endl;
    //else if (winner == O) cout << "O wins!" << endl;
    //else cout << "It's a draw!" << endl;



    //DLinkedList list;

    //list.addFront("A");
    //list.addBack("B");
    //list.addBack("C");

    //cout << "Front: " << list.front() << endl; // A
    //cout << "Back: " << list.back() << endl;   // C

    //list.removeFront();
    //cout << "Front after remove: " << list.front() << endl; // B

    //list.removeBack();
    //cout << "Back after remove: " << list.back() << endl;   // B


    //CircleList playList;
    //playList.add("Stayin Alive");
    //playList.add("Le Freak");
    //playList.add("Jive Talkin");

    //playList.advance();
    //playList.advance();
    //playList.advance();
    //playList.add("Disco Inferno");
    //cout << playList.back();
    //playList.advance();
    //cout << "\n";
    //cout << playList.back();
    //playList.advance();
    //cout << "\n";
    //cout << playList.back();
    //playList.advance();

    int A[5] = { 1,2,3,4,5 };
    int sum = LinearSum(A, 5); 
    cout << sum << "\n";

    //ReverseArray(A, 0, 4);
    IterativeReverseArray(A, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }

}


