#include <iostream>
using namespace std;

int main () {
	int array [4][5] = {
		{0,0,3,0,4},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,6,0,0},
	};	
	int size = 0;
	for (int row=0; row<4; row++){
		for ( int col=0;col<5;col++){
			if (array [row][col] != 0){
				size++;
			}
		}
	}
	int k=0;
	int compactMatrix [3][size];
	for (int row=0; row<4; row++){
		for (int col=0;col<5;col++){
			if (array [row][col] !=0){
				compactMatrix[0][k] = row;
				compactMatrix[1][k] = col;
				compactMatrix [2][k]=array [row][col];	
				k++;	
			}
		}
	}
	for (int i=0; i<3; i++){
		for (int j=0; j<size; j++){
			cout<< compactMatrix [i][j] << " ";
		}
		cout << endl;
	}
}


