#include<iostream>
using namespace std;
//Function definition
void passByValue(int num)
{
	num= num+10; //Modifying the value
	cout<<"Inside Function (Pass by value):"<< num<<endl;

}
int main(){
	//Function definition
	int num;
	
	
	int number=5;
	
	
	cout<<"Before Function Call:"<< number<<endl;
	passByValue(number);// passing the value
	cout<<"After Function Call:"<<number<<endl;
		
	return 0;
}
