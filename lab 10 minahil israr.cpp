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
	int num,mul;
	int sub;
	int value;
	
	int number=5;
	
	
	cout<<"Enter a value"<<endl;
	cin>>value;
	cout<<"Before Function Call:"<< number<<endl;
	passByValue(number);// passing the value
	cout<<"After Function Call:"<<number<<endl;
			num= num-10; //modifying the value
			cout<<"Subtraction :"<<endl;
	cout<<"Inside Function (passValue):"<<num<<endl;
	num= num*10;//modifying the value
	cout<<"Multiplication:"<<endl;
	cout<<"Inside Function (passValue):"<<num<<endl;
	return 0;

}

