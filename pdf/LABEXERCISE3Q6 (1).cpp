/*--------------------LAB EXERCISE 3 (QUESTION 6 ) --------------------*/
/*NUR UMAIRAH BINTI ZAMRI A24CS0168*/

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double,double);
double displayData(double,double,double);

double getLength()
{

    double lgth;
    cout << "Enter the rectangle's length : ";
    cin >> lgth;
    return lgth;
}

double getWidth()
{

    double wdth;
    cout << "Enter the rectangle's width : ";
    cin >> wdth;
    return wdth;
}

double getArea(double length,double width)
{

 
    double area = length*width;
    return area;

}

double displayData (double length,double width,double area){

    cout << "The rectangle's length : " << length << endl;
    cout << "The rectangle's width : " << width << endl;
    cout << "The rectangle's area : " << area << endl;
    return area;
}

int main(){
    
    double lgth,wdth,area;
    lgth= getLength();
    wdth= getWidth();
    area= getArea(lgth,wdth);
    cout << endl;
    displayData(lgth,wdth,area);
 

    return 0;
}