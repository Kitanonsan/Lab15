#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool m[][N]){
	for(int r = 0; r < N; r++){
		for(int c = 0; c < N; c++){
			cout << m[r][c] << " ";
		}
		cout << '\n';
	}
}

void inputMatrix(double d[][N]){
	for(int i = 0; i < N; i++){
	    cout << "Row " << i+1 << ": ";
		for(int j = 0; j < N; j++){
			double a;
			cin >> a;
			d[i][j] = a;
		}
	}  
}

void findLocalMax(const double a[][N], bool b[][N]){
	for(int r = 0; r < N; r++){
		for(int c = 0; c < N; c++){
			b[r][c] = false;
		}
	}
	for(int r = 1; r < N-1; r++){
		for(int c = 1; c < N-1; c++){
			if((a[r][c] > a[r-1][c]||a[r][c] == a[r-1][c]) 
			&& (a[r][c] > a[r+1][c]||a[r][c] == a[r+1][c]) 
			&& (a[r][c] > a[r][c-1]||a[r][c] == a[r][c-1]) 
			&& (a[r][c] > a[r][c+1]|| a[r][c] == a[r][c+1]))
			b[r][c] = true;
		}
	}
}