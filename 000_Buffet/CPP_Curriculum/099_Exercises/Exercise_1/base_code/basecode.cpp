// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	int x =5;
	while(true){
		cout<< x <<endl;
		
		if(x == 25) {
			break;
		}
			x = x + 1;
		
	}
	int z =15;
	while(true){
		cout<< z <<endl;
		
		if(z == 5){
			break;
		}
		z = z - 1;
	}
	for(int i =5; i<=25; i = i + 1){
		cout << i <<endl;
	}
	for(int i =15; i>=5; i = i - 1){
		cout << i <<endl;
	}
	int y =123;
	while(true){
		
		if(y >= 200){
			break;
		}
		cout<< y <<endl;
		y = y + 2;
		
	}
	
	cout<<endl;
	for(int i =123; i<=200; i = i +2){
		cout << i <<endl;
	}
	
}

	

