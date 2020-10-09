#include<iostream>
#include<string>
using namespace std;

int main (){
	system("CLS");
	double firstNum, secondNum, result;
	string operations;
	
	cout<<"\tCALCULATOR\n"<<endl;
	
	cout<<"Enter First Number: ";
	cin>>firstNum;
	cout<<"Choose operation: +, -, *, /: ";
	cin>>operations;
	cout<<"Enter Second Number: ";
	cin>>secondNum;
	
	if (operations=="+") result = firstNum + secondNum;
	if (operations=="-") result = firstNum - secondNum;
	if (operations=="*") result = firstNum * secondNum;
	if (operations=="/") result = firstNum / secondNum;

	
	cout<<"\nAnswer: "<<result<<endl;
	system("PAUSE");
	return main();
	
}
