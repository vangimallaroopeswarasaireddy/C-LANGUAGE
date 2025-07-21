#include <iostream>
using namespace std;

class Box{
	private:
		float length;
		float breadth;
		float height;
		static int count;
	public:
		float getvolume(){
			return length*breadth*height;
		}
		Box(){
			count++;
		}
		static int counter(){
			return count;
		}
		void setlength(float newlength){
			length=newlength;
		}
		void setbreadth(float newbreadth){
			breadth=newbreadth;
		}
		void setheight(float newheight){
			height=newheight;
		}
		
		
		
};
int Box::count=0;
int main(){
	Box b1;
	b1.setlength(25.4);
	b1.setbreadth(23.4);
	b1.setheight(22.0);
	cout<<"The volume of the box b1: "<<b1.getvolume()<<endl;
	Box b2;
	b2.setlength(21.3);
	b2.setbreadth(21.55);
	b2.setheight(13.2);
	cout<<"The volume of the box b2: "<<b2.getvolume()<<endl;
	cout<<"The count : "<<Box::counter()<<endl;
	return 0;
}
