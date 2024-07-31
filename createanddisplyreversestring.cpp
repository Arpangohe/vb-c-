#include <iostream>
using namespace std;

int main() {
     string str, rev="";
     cout << "Enter a string: ";
     getline(cin,str);
     
     for(int i=str.size()-1;i>=0;i--){
     	rev.push_back(str[i]);
	 }
	 for(int i=0;i<str.size();i++){
	 cout<<rev[i];
	 }
}
