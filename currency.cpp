//Currency calculation
#include<iostream>
using namespace std;

int main(){
	int rupees,note;
	cout>>"Enter Rupees :";
	cin>>rupess;
	
	if(rupees/2000>=1){
		note=rupess/2000;
		cout<<"2000 :"<<note<<endl;
		rupees=rupees-2000*note;
	}
	if(rupees/500>=1){
		note=rupess/500;
		cout<<"500 :"<<note<<endl;
		rupees=rupees-500*note;
	}
	if(rupees/100>=1){
		note=rupess/100;
		cout<<"100 :"<<note<<endl;
		rupees=rupees-100*note;
	}
	if(rupees/50>=1){
		note=rupess/50;
		cout<<"50 :"<<note<<endl;
		rupees=rupees-50*note;
	}
	if(rupees/20>=1){
		note=rupess/20;
		cout<<"20 :"<<note<<endl;
		rupees=rupees-20*note;
	}
	if(rupees/10>=1){
		note=rupess/10;
		cout<<"10 :"<<note<<endl;
		rupees=rupees-10*note;
	}
	if(rupees/5>=1){
		note=rupess/5;
		cout<<"5 :"<<note<<endl;
		rupees=rupees-5*note;
	}
	if(rupees/2>=1){
		note=rupess/2;
		cout<<"2 :"<<note<<endl;
		rupees=rupees-2*note;
	}
	if(rupees/1>=1){
		note=rupess/1;
		cout<<"1 :"<<note<<endl;
		rupees=rupees-1*note;
	}
}
