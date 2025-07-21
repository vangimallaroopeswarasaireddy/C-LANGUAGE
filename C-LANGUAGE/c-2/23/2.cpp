#include <iostream>
#include <string>
using namespace std;
class Product{
	private:
		string itemname;
		double unitprice;
		int quantityinstock;
	public:
		string getitemname() const{
			return itemname;
		}
		double getunitprice() const{
			return unitprice;
		}
		int getquantityinstock() const{
			return quantityinstock;
		}
		void setitemname(const string& newitemname){
			itemname=newitemname;
		}
		void setunitprice(double newunitprice){
			unitprice=newunitprice;
		}
		void setquantityinstock(int newquantityinstock){
			quantityinstock=newquantityinstock;
		}
		double calculateinventoryvalue() const{
			return unitprice*quantityinstock;
		}
		bool islowstock(){
			if (quantityinstock<10){
				return true;
			}
			else{
				return false;
			}
		}
		void displayproductdetails() const{
			cout<<"----THE DETAILS-----">>endl;
			cout<<"itemname: "<<itemname<endl;
	 		cout<<"unitprice: "<<unitprice<<endl;
	 		cout<<"quantity in stock: "<<quantityinstock<<endl;
	 		cout<<"Inventory value: "<<inventoryvalue<<endl;
	 		cout<<"low stock status: "<<islowstock()<<endl;
	 	}
	 	
};
int main(){
	int numproduct=3;
	Product pro[3];
	for(int i=0;i<numproduct;i++){
	cout<<"Enter the item name: "<<endl;
				string a;
				cin>>a;
				pro[i].setitemname(a);
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				cout<<"Enter the unitprice: "<<endl;
				int b;
				cin>>b;
				pro[i].setunitprice(b);
				c.ignore();
				cout<<"Enter the quantity in stock: "<<endl;
				int c;
				cin>>c;
				pro[i].setquantityinstock(c);
			}
   
}
