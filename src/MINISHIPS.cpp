#include <iostream>
#include <ctime>
using namespace std;

const int rows = 10;
const int elements = 10;
void start();
void gameOver();

int maxShips = 5;

int matrix[rows][elements];

void Clear() {
  for(int i=0; i<rows; i++) {
    for(int j=0; j<elements; j++) {
      matrix[i][j] = 0;
    }
  }
}

void Show() {
  for(int i=0; i<rows; i++) {
    for(int j=0; j<elements; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

int NumberOfShips() {
  int c=0;
  for(int i=0; i<rows; i++) {
    for(int j=0; j<elements; j++) {
      if(matrix[i][j] == 1)
        c++;
    }
  }
  return c;
}

void SetShips() {
  int s = 0;
  while(s < maxShips) {
    int x = rand() % rows;
    int y = rand() % elements;
    if(matrix[x][y] != 1) {
      s++;
      matrix[x][y] = 1;
    }
  }
}

bool Attack(int x, int y) {
  if(matrix[x][y] == 1) {
    matrix[x][y] = 2;
    return true;
  }
  return false;
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
}


int main() {
  start();
  cout << "to shoot type x position then y position\n";
  srand(time(NULL));
  Clear();
  SetShips();
  int pos1, pos2;
  char prompt;
  while(1) {
    cout <<"Please input location:";
    cin >> pos1 >> pos2;
    if(Attack(pos1, pos2))
      cout << "You got me! :)" << endl;
    else
      cout << "Sorry no ship at that position!" << endl;
    cout << "Do you want to surrdender (y/n)? ";
    cin >> prompt;
    if(prompt == 'y')
      break;
  }
  cout << "Game over!" << endl;
  Show();
  gameOver();
  system("pause");
  return 0;
}