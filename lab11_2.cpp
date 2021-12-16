#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	//กรอก Code เฉพาะส่วนนี้ ให้สอดคล้องกับโจทย์และ Code ส่วนอื่น ๆ 
	//โดยห้ามแก้ไข Code ในส่วนอื่น ๆ
	dest << "-------------------- BOOM ---------------------" << endl;
	dest << "AR CHI" << endl;
	dest << "AR BOW" << endl;
	dest << "CHOW CHOW" << endl;
	dest << "BA KA" << endl;
	dest << "BA GEAR" << endl;
	dest << "CHEER CHEER" << endl;
	dest << "WE ARE ALL" << endl;
	dest << "ENTANEER" << endl;
	dest << "CMU" << endl;
	dest << "-------------------- HA!! ---------------------" << endl;
    source.close();
    dest.close();
	return 0;
}
