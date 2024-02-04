#include<iostream>
using namespace std;

int main(){
	int N;
	int arr[1000000];

	cin >> N;

	for(int i=0; i<N; i++){
		cin >> arr[i];
	}

	int Max, Min = arr[0];

	for(int j=0; j<N; j++){
		if(Max < arr[j]){
			Max = arr[j];
		}
		if(Min > arr[j]){
			Min = arr[j];
		}
	}

	cout << Min << " " << Max;

	return 0;
}
