#include <iostream>
#inlcude <string>
using namespace std;
class book{
	private:
		string author;
		string title;
		double price;
		int pages;
	public:
		string get_author(){
			return author;
		}
		string get_title(){
			return title;
		}
		double get_price(){
			return price;
		}
		int get_pages(){
			return pages;
		}
		void set_author(const string& newauthor){
			author=newauthor;
		}
		void set_title(const string& newtitle){
			title=newtitle;
		}
		void set_price(double newprice){
			price=newprice;
		}
		void set_pages(int newpages){
			pages=newpages;
		}
		void DisplayBookdetails(){
			cout<<"-------THE BOOK DETAILS-----------"<<endl;
			cout<<"The author of the book is: "<<author<<endl;
			cout<<"The title of the book is: "<<title<<endl;
			cout<<"The price of the book is: "<<price<<endl;
			cout<<"The no of pages int the book is: "<<pages<<endl;
			cout<<"\n";
		}
	
};
int main(){
	
}
