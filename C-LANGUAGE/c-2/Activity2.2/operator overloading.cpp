#include <iostream>
#include <string>
using namespace std;
class operation{
	string str1;
	public:
		void get_str1() {
			cout<<"Enter the string : "<<endl;
			getline(cin,str1);	
		}
		
		bool operator==(const operation& other);
};
bool operation::operator==(const operation& other){
	return str1==other.str1;
}
int main(){
	operation c1,c2;
	c1.get_str1();
	c2.get_str1();
	if(c1==c2){
		cout<<"Both the strings are equal"<<endl;
	}
	else{
		cout<<"Both are not equal"<<endl;
	}
	return 0;
}
