#include <iostream>
using namespace std;

int main()
{
   
    float marks[10]= {70,85,57,64,83,92,75,69,95};
    double total=0.0;

    for (int i=0; i < 10;i++)
    {   
        cout << "Student: " << (i+1) << marks[i] << endl;
        total += marks[i];
       
    }
    cout << "Total marks for all students is " << total << endl;
    double average;
    average = total/10;
    cout << "Average for all students is " << average;
}