#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

const int RACE_END = 70;

void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr );
void moveTortoise( int *const );
void moveHare( int * const );

int main()
{
	clock_t start,end;
    int tortoise=1;
    int hare = 1;
    
    srand( time( 0 ) );
    
    start=clock();
    while ( tortoise != RACE_END && hare != RACE_END ) 
   {
      Sleep( 100 );
      system("cls");
	      
      moveTortoise( &tortoise );
      moveHare(&hare);
      printCurrentPositions( &tortoise, &hare );
      
   }
    end=clock();
   
    if(tortoise==70)
		cout<<"TORTOIES WIN!!!";
	if(hare==70)
		cout<<"HARE WIN!";
	cout<<"TIME ELAPSED: "<<(end-start)/1000<<"seconds";
}

/*�L�X�Q�t�P�ߤl��m*/
void printCurrentPositions( const int * const snapperPtr, const int * const bunnyPtr )
{
	for(int i=1;i<=7;i++)
	{
		cout<<"---------|";
	}
	cout<<endl;
	cout<<setw(*bunnyPtr)<<"H"<<endl;
	cout<<setw(*snapperPtr)<<"T"<<endl;
}

/*���ʯQ�t*/
void moveTortoise( int * const turtlePtr )
{
	int a;
	a=rand()%10;
	if(a>=0&&a<=4)
		*turtlePtr+=3;
	else if(a>=5&&a<=6)
			*turtlePtr-=6;
		 else
			*turtlePtr+=1;
			
	if(*turtlePtr>70)
		*turtlePtr=70;
	else if(*turtlePtr<1)
			*turtlePtr=1;
}

/*���ʨߤl*/
void moveHare( int * const rabbitPtr )
{
  	int a;
	a=rand()%10;
	if(a>=0&&a<=1)
		*rabbitPtr+=0;
	else if(a>=2&&a<=3)
			*rabbitPtr+=9;
		else if(a==4)
				*rabbitPtr-=12;
			else if(a>=5&&a<=7)
					*rabbitPtr+=1;
				else
					*rabbitPtr-=2;
	if(*rabbitPtr>70)
		*rabbitPtr=70;
	else if(*rabbitPtr<1)
			*rabbitPtr=1;
}
