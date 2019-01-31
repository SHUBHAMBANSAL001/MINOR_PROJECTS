#include<iostream>
using namespace std;
#include<conio.h>
// ############## function to display matrix################# //
void show_matrix(char matrix[][3])
{
	cout<<endl<<"|";
 for(int i=0;i<3;i++)
 {
 	for(int j=0;j<3;j++)
 	{
 		cout<<matrix[i][j]<<"         |"; 
	
	}
   cout<<endl<<"|";
 }
}
// ################################# Checking for the win case ############################### //
void check(char matrix[][3])
{
	
	if ( (matrix[0][0] == matrix [0][1]) && (matrix[0][1] == matrix[0][2]) )
  {
  	if( matrix[0][0]== 'X' )
  	{
	cout<<"Player 1 Wins !! \n"; 
	  exit(0);
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }
  else if ( matrix[1][0] == matrix [1][1] && matrix[1][1] == matrix[1][2] )
  {
  	if( matrix[1][0]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  } 
  else if ( matrix[2][0] == matrix [2][1] && matrix[2][1] == matrix[2][2] )
  {
  	if( matrix[2][0]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }
  else if ( matrix[0][0] == matrix [1][0] && matrix[1][0] == matrix[2][0] )
  {
  	if( matrix[0][0]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }
  else if( matrix[0][1] == matrix [1][1] && matrix[1][1] == matrix[2][1] )
  {
  	if( matrix[0][1]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }
  else if( matrix[0][2] == matrix [1][2] && matrix[1][2] == matrix[2][2] )
  {
  	if( matrix[0][2]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }	
  else if( matrix[0][0] == matrix [1][1] && matrix[1][1] == matrix[2][2] )
  {
  	if( matrix[0][0]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }
  else if( matrix[0][2] == matrix [1][1] && matrix[1][1] == matrix[2][0] )
  {
  	if( matrix[0][2]== 'X' )
  	{
	   cout<<"Player 1 Wins !! \n";
	   exit(0); 
	}
	else 
	{
		cout<<"Player 2 Wins !! \n";
		exit(0);
	}
  }
}
// ##################################### Main function #########################################// 
int main()
{
 int i,j;
 char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
  cout<<"        TIC - TAC - TOE          ";
  show_matrix(matrix);
  cout<<"PLAYER1 (X)  ------------ PLAYER2(O)| \n";
  int l=1;//for the number of turns of the game
  char pos;
  char array[9];
  int p=0,flag,count=0;
  for(p=0;p<9;p++)
  {
  array[p]='z';
  }
while(l<10) //At max the number of turns in the game will be 9 
{
	cout<<"PLAYER1 ENTER YOUR NUMBER POSITION  ";
	cin>>pos;
	while(1)
	{
		for(p=0;p<9;p++)
		{
			if( array[p] == pos)
			{
				flag=1;	//what to do if it already exists
			}
			
		}		
	flag=1;	
    for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
		 if(matrix[i][j]== pos)
		 {
		 	flag = 0;
		 }
		}
	 }		
		if (flag == 1)
		{
			system("cls");
   
            cout<<"        TIC - TAC - TOE          ";  
            show_matrix(matrix);
 
			cout<<"PLAYER1 ENTER YOUR NUMBER POSITION again (previous entry against the rules)  ";
			cin>>pos;
	        flag = 0;
		}
		else
		{
		array[count]=pos;
		count++; 
	    break;
		} 
    }
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 if( matrix[i][j] == pos )
		 {
		 	matrix[i][j] = 'X';
		 }
		}
	}
    system("cls");
    cout<<"        TIC - TAC - TOE          ";  
    show_matrix(matrix);
 	check(matrix);
 	cout<<"PLAYER2 ENTER YOUR NUMBER POSITION  "; 
	cin>>pos;
	while(1)
	{
		for(p=0;p<9;p++)
		{
			if( array[p] == pos )
			{
				flag=1;//what to do if it already exists
			}
			
		}
	    flag=1;	
        for(i=0;i<3;i++) 
	    {
		 for(j=0;j<3;j++)
		 {
		   if(matrix[i][j]== pos)
		   {
		 	flag = 0;
			}
		 }
	    }		
	
		if (flag == 1)
		{
		 	system("cls");
			cout<<"        TIC - TAC - TOE          ";  
            show_matrix(matrix);
 
			cout<<"PLAYER2 ENTER YOUR NUMBER POSITION  again (previous entry against the rules) ";
			cin>>pos;
			flag=0;
		}
		else
		{
		array[count]=pos;
	    count++;
		break; 
	    }
    }
	for(i=0;i<3;i++) //For feeding the positon entered by the second player
	{
		for(j=0;j<3;j++)
		{
		 if(matrix[i][j]== pos)
		 {
		 	matrix[i][j]= 'O';
		 }
		}
	}
   system("cls");
   cout<<"        TIC - TAC - TOE          ";  
   show_matrix(matrix);
   check(matrix);
   l++;
}
return 0;
}