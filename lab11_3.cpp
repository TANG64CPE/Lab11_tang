#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <cmath>
using namespace std;

double Mean( double sum,int count){
    return sum/count;
}

int main(){
    int count = 0;
    float data[]={0,0.73,0.73,0.27,0.64,0.91,0.55,0.73,0.82,0.73,0.64,0.55,0.55,0.55,0.27,0.64,0.36,0.73,0.73,0.77,0.59,0.5,0.55,0,0.55,0.55,0.55,0.45,0.68,0.14,1,0.82,0.59,0.27,0.32,0.55,0.91,0.64,0.64,0.45,0.64,0.09,0.5,0.36,0.5,0.14,0.64,0.91,0.27,0.95,0.36,0.64,0.45,0.5,0.09,0.73,0.55,0.55,0.41,0.45,0.64,0.64,0.82,0.73,0.55,0.32,0.45,0.82,0.64,0.68,0.59,0.55,0.91,0.73,0.36,0.64,0.82,0.82,0.5,0.55,0.73,0.5,0.68};
    double x ,y ;
    double sum1 = 0 ,sum2 = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        x = atof(textline.c_str());
        sum1 += x;
        count++;
    }
    for ( int i = 0 ; i < count ; i++){
        y = pow(data[i] - Mean(sum1,count),2);
        sum2 += y;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << Mean(sum1,count) << endl;
    cout << "Standard deviation = " << sqrt(sum2/count);
    return 0;
}
