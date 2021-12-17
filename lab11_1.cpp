#include<iostream>
using namespace std;

int main(){
	char grade;
	int i=1,a=0,b=0,c=0,d=0,f=0;
	char count[5] = {'A','B','C','D','F'}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	do{
		cout << "Student [" << i << "]:";
		cin >> grade; 
		i++;
		if( grade == count[0]) 
			a++;
		if( grade == count[1]) 
			b++;
		if( grade == count[2])
			c++;
		if( grade == count[3])
			d++;
		if( grade == count[4])
			f++;
		if( grade == 0)
			break;
		else
			continue;
	}while(true);
	cout << "In total " << i << "students.";
	cout << "A = " << a <<", ";
	cout << "B = " << b <<", ";	
	cout << "C = " << c <<", ";
	cout << "D = " << d <<", ";
	cout << "F = " << f <<", ";
	return 0;
}
