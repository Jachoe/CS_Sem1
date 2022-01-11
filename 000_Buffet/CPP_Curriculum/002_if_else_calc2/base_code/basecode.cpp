// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;
	int x;
	int y;
	cout<<"enter the first number"<<endl;
	cin>>x;
	cout<<"enter second number"<<endl;
	cin>>y;
	cout<<"enter the operation"<<endl;
	char z;
	cin>>z;
	if (z=='-')
	{
		cout<<x-y<<endl;
	}
	else if(z=='+')
	{
		cout<<x*y<<endl;
	}
	else if(z=='/')
	{
		cout<<x/y<<endl;
	}

}
