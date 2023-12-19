#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	char grade; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	

	/*char A[] = {};
	char B[] = {};
	char C[] = {};
	char D[] = {};
	char F[] = {};
	*/

	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
		int i = 0;
	do{
		
		cout << "Student [" << i+1 << "]: ";
		i++;
		cin >> grade; 
		
		if(grade != '0') {
				if(grade == 'A'){ // if grade is A
					count[0] = count[0]+1;
				}
				else if(grade == 'B'){ // if grade is B
					count[1] = count[1]+1;
				}
				else if(grade == 'C'){ // if grade is C
					count[2] = count[2]+1;
				}
				else if(grade == 'D'){ // if grade is D
					count[3] = count[3]+1;
				}
				else if(grade == 'F'){ // if grade is F
					count[4] = count[4]+1;
				}
				else{
					cout <<"Wrong input. Please input again.\n";
					i = i-1;
				}
		}else
		{
			break;
		}
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
	
	return 0;
}