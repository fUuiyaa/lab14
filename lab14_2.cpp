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

//Do not modify source code above this line 

void showMatrix(const bool x[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

void inputMatrix(double x[][N]){
	for(int i=0;i<N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j=0;j<N;j++){
			cin >> x[i][j];
		}
	}
}

void findLocalMax(const double x[][N], bool y[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			int tem1 = i-1, tem2 = j-1;
			int temp1=i+1, temp2=j+1;
		
			if(tem1<0||tem2<0||temp1>=N||temp2>=N){
				y[i][j]=0;
			} else if(x[i][j]>=x[i+1][j] && x[i][j]>=x[i][j+1] && x[i][j]>=x[i-1][j] && x[i][j]>=x[i][j-1]){
					y[i][j]=1;
			} else{
				y[i][j]=0;
			}

		}
	}
}