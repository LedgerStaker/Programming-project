#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <vector>

using namespace std;

const int empty = 0; // contains water
const int occupied = 1; // contains a ship
const int missed = 2; // shot into ocean
const int hit = 3; // shot and hit
void start();
void gameOver();

int board[ 10 ][ 10 ];

void initialize_board(int array1[ 10 ][ 10 ]) {
  // make blank board
  for( int x=0; x<10; x++)
    for( int y=0; y<10; y++)
      array1[x][y] = occupied;
}

void print_board(int array2[10][10]) {
    for(char a = 'A'; a <= 'J'; a++) { //letter coordinates
		cout << setw(5) << a;
    }
    cout << endl;
 
    for(int i = 1; i <= 10; i++) { //number coordinates
        if(i == 10)
		cout << i;
	else
		cout << " " << i ;
 
        for(int j = 0; j < 10 ; j++) {
 
	    if(array2[i][j] == occupied || array2[i][j] == empty){
				cout << setw(5) << " |" ;
			}
            else if(array2[i][j] == missed ) {
                cout << setw(5) << "O|";
			}
	    else if(array2[i][j] == hit ) {
		cout << setw(5) << "X|";
	    }
	}
        cout << "\n";
    }
}


void start () {
   cout << "Welcome to Mini Ships\n";
    cout << "By Ledger Staker\n";
cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░\n";
cout << "░░░░░░░░░░░░░░░███░░░░░░░███░█░░░░\n";
cout << "░░░░░░░░░░░░░██▒▒█░░░░░░█▒▒█░░░░░░\n";
cout << "░░░░░░░░░░░░█▒▒░░█░░░░░█▒▒▒█░░░░░░\n";
cout << "░░░░░░░░░░░█▒░░░░█░░░░█▒▒▒█░░░░░░░\n";
cout << "░░░░░░░░░░░█▒░░░░█░░░░██▒█░░░░░░░░\n";
cout << "░░░░░░░░░░░█▒░░░░█░░░░░██░░░░░░░░░\n";
cout << "░░░░░░░░░░░░█▒▒░░█░░░░░░░░░░░░░░░░\n";
cout << "░░░░░░░░░░░░░██▒▒█░░░░░░░░░░░░░░░░\n";
cout << "██░░░░░░░░░░░░░███░░░░░░░░░░░░░░██\n";
cout << "███░░░░░░░░░░░░░░█░░░░░░░░░░░░░███\n";
cout << "░████████████████████████████████░\n";
cout << "░░░█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█░░░\n";
cout << "░░░░█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█░░░░\n";
cout << "░░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░░░░\n";
cout << "░░░░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░░░░░░\n";
cout << "░░░░░░░░░████████████████░░░░░░░░░\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
  cout << "when your ready type start and then choose where you want yours ships to be\n";
  cout << "you can not place your ships right next to another ship it must be one space away\n";
  cout << "you cannot shoot the same place twice\n";
  cout << "to win mini ships you must sink all of your opponents ships\n";
}
 
void gameOver() {
    cout << "\nThanks for playing Mini Ships\n";
      cout << "By Ledger Staker\n";
cout << "░░░░░░░░░░░░░░░░░░░░░░░░░░░░█░░░░░\n";
cout << "░░░░░░░░░░░░░░░███░░░░░░░███░█░░░░\n";
cout << "░░░░░░░░░░░░░██▒▒█░░░░░░█▒▒█░░░░░░\n";
cout << "░░░░░░░░░░░░█▒▒░░█░░░░░█▒▒▒█░░░░░░\n";
cout << "░░░░░░░░░░░█▒░░░░█░░░░█▒▒▒█░░░░░░░\n";
cout << "░░░░░░░░░░░█▒░░░░█░░░░██▒█░░░░░░░░\n";
cout << "░░░░░░░░░░░█▒░░░░█░░░░░██░░░░░░░░░\n";
cout << "░░░░░░░░░░░░█▒▒░░█░░░░░░░░░░░░░░░░\n";
cout << "░░░░░░░░░░░░░██▒▒█░░░░░░░░░░░░░░░░\n";
cout << "██░░░░░░░░░░░░░███░░░░░░░░░░░░░░██\n";
cout << "███░░░░░░░░░░░░░░█░░░░░░░░░░░░░███\n";
cout << "░████████████████████████████████░\n";
cout << "░░░█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█░░░\n";
cout << "░░░░█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█░░░░\n";
cout << "░░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░░░░\n";
cout << "░░░░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██░░░░░░░\n";
cout << "░░░░░░░░░████████████████░░░░░░░░░\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
cout << "▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n";
  cout << "about one fourth almost done\n";
}

int main() {
  start();
  initialize_board(board);
  print_board(board);
  gameOver();
  return 0;
}
