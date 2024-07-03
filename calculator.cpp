//
#include<iostream>
using namespace std;

int main(){
	double num1, num2;
	char choice;
	cout<<"+ , - , * , / :";
	cin>>choice;
	cout<<"Enter 2 Numbers :";
	cin>>num1>>num2;
	switch(choice){
		case '+' : cout<<"Addition :"<<num1+num2<<endl;
			break;
			
		case '-' : cout<<"Substraction :"<<num1-num2<<endl;
			break;
		
		case '*' : cout<<"Multiplicatiom :"<<num1*num2<<endl;
			break;
		
		case '/' : cout<<"Division :"<<num1/num2<<endl;
			break;
			
			default :cout<<"Invalid Choice :";
	break;			
	}
	
	
}
