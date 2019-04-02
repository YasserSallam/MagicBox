/*create magic box using c++
distribute number from 1 to 9 where sum of any column = sum of any row = sum of any diagonal
algrothim used go to center put first number (1) then check if it is divide by n (which 3 or 4 ..)
if divide row++ then continue els row-- and column -- then continue
    note : matrix dimension is odd*/
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy(int,int);		//function to set cursor position
int main()
{
	int counter=1,
	matrixDimension,                      // dimension of matrix
	row=1,column= 10;       //start position for cursor
	cout<<"please enter matrix dimension \t ";
	cin>>matrixDimension;
	int numberOfRowLeftAndRight=matrixDimension/2;            //number of columns right and left center column
	for(counter=1;counter<=(matrixDimension*matrixDimension);counter++){
		gotoxy(row,column);                     //go to center column and put first number
		cout<<counter;        //1
		if(counter % matrixDimension ==0){
			row++;
			if(row > matrixDimension)
				row = 1;
		}
		else {
            row--;
			if(row < 1 )
				row=matrixDimension;
			if(column<= 10-(3*numberOfRowLeftAndRight ))        //check position of current column (main position -(3* number of rows))
				column=(10+(3*numberOfRowLeftAndRight));
			else
				column-=3;
			}
		}
gotoxy(10,20);
return 0;
}
void gotoxy(int y, int x)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
