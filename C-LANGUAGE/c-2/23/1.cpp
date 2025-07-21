#include <iostream>
#include <string>
#include<limits>
using namespace std;
class Student
{
	private:
		string name;
		int score;
	public:
		string getname() const{
			return name;
		}
		int getscore() const{
			return score;
		}
		void setname(const string& newname){
			name=newname;
		}
		void setscore(int newscore){
			score=newscore;
		}
		void calculategrade(){
			if (score>=90){
				cout<<"The grade of the student is A"<<endl;
			}
			else if(score>=75){
				cout<<"The grade of the student is B"<<endl;
			}
			else 
			if(score>=50){
				cout<<"The grade of the student is C"<<endl;
			}
			else{
				cout<<"The student has failed the exam"<<endl;
			}
		}
		void displayinfo()
		{
			cout<<"----THE DETAILS OF THE STUDENT----"<<endl;
			cout<<"The Name of the student:"<<name<<endl;
			cout<<"The score of the student:"<<score<<endl;
			calculategrade();
			cout<<"program finished\n"<<endl;
		}
	};
	
	int main(){
		const int numstudent=3;
		Student stud[numstudent];
		
			for(int i=0;i<numstudent;i++){
				cout<<"Enter the name of the student"<<i+1<<endl;
				string a;
				cin>>a;
				stud[i].setname(a);
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Enter the score of the student"<<i+1<<endl;
				int b;
				cin>>b;
				stud[i].setscore(b);
			}
			for(int i=0;i<numstudent;i++){
				stud[i].displayinfo();
			}
		return 0;
	}

