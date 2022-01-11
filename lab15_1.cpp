#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i = 1; i <N; i++){
		T number = d[i];
		for (int j = 1; j < i+1; j++){
			T np = d[i-j];
			if(number > np)
				d[i-j+1] = np;
			if (number < np || number == np){
				d[i-j+1] = number;
				break;
			}	
			if(number > np && (i-j) == 0){
				d[i-j+1] = np;
				d[i-j] = number;
			}

		}

		cout << "Pass " << i << ":" ;
		for(int i = 0; i < 10; i++) 
			cout << d[i] << " ";
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
