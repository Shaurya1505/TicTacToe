#include <iostream>
#include <conio.h>
#include<cstdlib>
#include<ctime>

using namespace std;

int Check( char[]);
void mat( char[]);

int main()
{
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int player = 1,i,choice;

char place;
do
{
mat(square);

if(player%2==1)
player=1;
else
player=2;


// code for computer's turn
if(player==2)
{
cout << "Players  " << player<<endl;
cout<<"Press Enter for CPU"<<endl;
srand(time(0));
choice=rand()%9;
char mark='O';
int turn=1;
int placed=0;
while(placed==0)
{

if (choice == 1 && square[1] == '1'){
square[1] = mark;
placed=1;
}
else if (choice == 2 && square[2] == '2'){

square[2] = mark;
placed=1;
}
else if (choice == 3 && square[3] == '3'){

square[3] = mark;
placed=1;
}
else if (choice == 4 && square[4] == '4'){

placed=1;
square[4] = mark;
}
else if (choice == 5 && square[5] == '5'){

square[5] = mark;
placed=1;
}
else if (choice == 6 && square[6] == '6'){

square[6] = mark;
placed=1;
}
else if (choice == 7 && square[7] == '7'){

square[7] = mark;
placed=1;
}
else if (choice == 8 && square[8] == '8'){

square[8] = mark;
placed=1;
}
else if (choice == 9 && square[9] == '9'){

square[9] = mark;
placed=1;
}

else
{
choice=rand()%9;
}
}
i=Check(square);
player++;
_getche();
mat(square);
}

// code for player 1's turn
else if(player==1)
{
cout << "WHERE DO YOU WANT TO PLACE YOUR MARK, ENTER POSITION";
cin >> choice;
char mark='X';

if (choice == 1 && square[1] == '1')

square[1] = mark;
else if (choice == 2 && square[2] == '2')

square[2] = mark;
else if (choice == 3 && square[3] == '3')

square[3] = mark;
else if (choice == 4 && square[4] == '4')

square[4] = mark;
else if (choice == 5 && square[5] == '5')

square[5] = mark;
else if (choice == 6 && square[6] == '6')

square[6] = mark;
else if (choice == 7 && square[7] == '7')

square[7] = mark;
else if (choice == 8 && square[8] == '8')

square[8] = mark;
else if (choice == 9 && square[9] == '9')

square[9] = mark;
else
{
cout<<"THE PLACE IS ALREADY OCCUPIED ";

player--;
_getche();
}
i=Check(square);

player++;
}
}while(i==-1);
mat(square);
if(i==1)

cout<<"CONGRATULATIONS!!!! \nYOU WIN";
else if(i==0)
cout<<"GAME DRAW.";
else if(i==2)
cout<<"HARDLUCK.\nYOU LOST";

_getche();
}

void mat(char square[])
{
system("cls");
cout << "\n\n\!!TIC-TAC-TOE!!\n\n";

cout << "YOU (X)  -  CPU (O)" << endl << endl;
cout << endl;

cout << "     |     |     " << endl;
cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;

cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;

cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

cout << "     |     |     " << endl << endl;
}


int Check(char square[])
{
if (square[1] == square[2] && square[2] == square[3] && square[1] == 'X')

return 1;
else if (square[4] == square[5] && square[5] == square[6] && square[4] == 'X')

return 1;
else if (square[7] == square[8] && square[8] == square[9] && square[7] == 'X')

return 1;
else if (square[1] == square[4] && square[4] == square[7] && square[1] == 'X')

return 1;
else if (square[2] == square[5] && square[5] == square[8] && square[2] == 'X')

return 1;
else if (square[3] == square[6] && square[6] == square[9] && square[3] == 'X')

return 1;
else if (square[1] == square[5] && square[5] == square[9] && square[1] == 'X')

return 1;
else if (square[3] == square[5] && square[5] == square[7] && square[3] == 'X')

return 1;

else if (square[1] == square[2] && square[2] == square[3] && square[1] == 'O')

return 2;
else if (square[4] == square[5] && square[5] == square[6] && square[4] == 'O')

return 2;
else if (square[7] == square[8] && square[8] == square[9] && square[7] == 'O')

return 2;
else if (square[1] == square[4] && square[4] == square[7] && square[1] == 'O')

return 2;
else if (square[2] == square[5] && square[5] == square[8] && square[2] == 'O')

return 2;
else if (square[3] == square[6] && square[6] == square[9] && square[3] == 'O')

return 2;
else if (square[1] == square[5] && square[5] == square[9] && square[1] == 'O')

return 2;
else if (square[3] == square[5] && square[5] == square[7] && square[3] == 'O')

return 2;
else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
&& square[4] != '4' && square[5] != '5' && square[6] != '6' 
&& square[7] != '7' && square[8] != '8' && square[9] != '9')

return 0;
else
return -1;
}
