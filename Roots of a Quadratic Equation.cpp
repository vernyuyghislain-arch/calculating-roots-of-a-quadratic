#include<iostream>
#include<cmath>
using namespace std;
// function to calculate the roots
void calculateroots(double a, double b, double c)

{
	// check if the equation is quadratic
	if (a==0){
		cout <<"the equation is not quadratic"<< endl;
	}
	// calculate the discriminant
	double d = (b*b) - (4 * a * c);
	// real and distinct roots
	if (d > 0){
		double root1 = (-b + sqrt(d)) / (2 * a);
		double root2 = (-b - sqrt(d)) / (2 * a);
		cout<<"the roots are real and distinct"<< endl;
		cout<<"root 1 = " << root1<< endl;
		cout<<"root 2 = " << root2<< endl;
	}
	// equal roots
	else if (d == 0){
		double root = -b / (2 * a);
		cout<<"the roots are equal"<<endl;
		cout<<"root 1 = root 2 = "<< root << endl;
	}
	// complex roots
	else{
		double realpart = -b / (2 * sqrt(-d)) / (2 * abs(a));
		double imaginarypart = sqrt(-d) / (2 * abs(a));
		cout<<"the roots are complex"<<endl;
		cout<<"root 1 = "<< realpart <<"+" << imaginarypart<< "i"<<endl;
		cout<<"root 2 = "<<realpart <<"-" << imaginarypart<< "i"<<endl;
	}
}
int main(){
	double a, b, c;
	cout<<"enter the values of a, b, c: ";
	cin>> a >> b >> c;
	//funtion call
	calculateroots(a, b, c);
	return 0;
}
