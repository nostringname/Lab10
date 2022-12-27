#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double init,intr,amt;
	int i = 1;

	cout << "Enter initial loan: ";
	cin >> init;
	cout << "Enter interest rate per year (%): ";
	cin >> intr;
	cout << "Enter amount you can pay per year: ";
	cin >> amt;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
    
	do {
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << init;
	cout << setw(13) << left << init*intr/100;
	cout << setw(13) << left << init*intr/100 + init;
	if (amt > (init*intr/100 + init)) {

		amt = init*intr/100 + init;
	}
	cout << setw(13) << left << amt;
	cout << setw(13) << left << (init*intr/100 + init)-amt;
	init = (init*intr/100 + init)-amt;
    cout << "\n"; 

	i++;

	


	
	
	} while(init > 0);

	


	

	return 0;
}
