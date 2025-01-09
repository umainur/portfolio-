#include <iostream>
using namespace std;

int main(){
    cout << "*****************Lab Exercise 2***************" << endl;
    char operation, loopoperation= 'n';
    float num1,num2,result;
    do{
        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        cout << "Please enter the desired operation (+,-,*,/) : ";
        cin >> operation;


        //Apply switch case here and do the calculation to show the result

        switch (operation)
        {
            case '+' : result= num1+num2;
                       cout << num1 <<"," <<  num2 << "," << operation << "," << result << endl;
                       break;

            case '-' : result= num1-num2;
                       cout << num1 <<"," << num2 << "," << operation << "," << result << endl;
                       break;
            
            case '*' : result= num1*num2;
                       cout << num1 <<"," << num2 << "," << operation << "," << result << endl;
                       break; 
            
            case '/' : result= num1/num2;
                       cout << num1 <<"," << num2 << "," << operation << "," << result << endl;
                       break;
            
            default : cout << "Invalid operation" <<endl;
            

        }

    

        cout << "Please enter y to end the program : ";
        cin >> loopoperation;

    }while (loopoperation !='y');

}