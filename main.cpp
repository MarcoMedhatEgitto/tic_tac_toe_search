#include<iostream>
#include<stdexcept>
using namespace std;


char checkWinDraw(char *board)
{
//	horizontal check
	for(int i=0;i<7;i+=3)
	{
		if(*(board+i)==*(board+i+1) &&
		*(board+i+2)==*(board+i) &&
		*(board+i+1)==*(board+i+2))
		{
			return *(board+i);
		}
	}
//	vertical check
	for(int i=0;i<3;i++)
	{
		if(*(board+i)==*(board+i+3) &&
		*(board+i+6)==*(board+i) &&
		*(board+i+3)==*(board+i+6))
		{
			return *(board+i);
		}
	}
//	cross check
	if((*(board)==*(board+4) &&
	*(board+8)==*(board) &&
	*(board+8)==*(board+4))
	||
	(*(board+2)==*(board+4) &&
	*(board+6)==*(board+2) &&
	*(board+6)==*(board+4)))
	{
		return *(board+4);
	}
//	check if draw
	int drawIndicator=1;
	for(int i=0;i<9;i++)
	{
		if(*(board+i)=='X'||*(board+i)=='O')
		{
			drawIndicator=i;
		}
		else{
			break;
		}
	}
	if(drawIndicator==8)
	{
		return 'D';
	}
	
	return 'N';
}

char printBoard(char player, int input)
{
	
	static char board[9] = {'1','2','3',
					 		'4','5','6',
					 		'7','8','9'};
	
//	inserting the input in the board;
while(board[input-1]=='X'||board[input-1]=='O'){
	cout<<"choose another slot this is filled: ";
		cin>>input;
} 

board[input-1] = player;	
//  printing board
system("cls");
for(int i=0;i<9;i)
{
	cout<<"-------\n";
	for(int j=0;j<3;i++)
	{
		cout<<"|"<<board[i];
		j++;
	}
	cout<<"|"<<endl;
}
	cout<<"-------\n";
	return checkWinDraw(board);
}

char turn(char player){
//	if(player == 'X')
//	{
		int input;
		cout<<"Enter the number of the slot you want to insert in player "<<player<<" : ";
		cin>>input;
		
			
//	}
//	else{
//		cin>>think();
//	}
	
	return printBoard(player, input);
}

int main(){
	char players[2]={'X','O'};
	int turnPlay=1;
	char win_lose;
	printBoard('1',1);
	while(1)
	{
		if(turnPlay%2 == 1)
		{
			win_lose = turn(players[0]);
		}
		else
		{
			win_lose = turn(players[1]);
		}
		if(win_lose == 'X')
		{
			cout<<"The player X wins";
			break;
		}
		else if(win_lose == 'O')
		{
			cout<<"The player O wins";
			break;
		}
		else if(win_lose == 'D'){
			cout<<"Draw Mf's";
			break;
		}
		else{
			turnPlay++;
			continue;
		}	
	}
}
