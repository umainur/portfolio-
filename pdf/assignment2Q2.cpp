//This is Question 2 in Assignment 2
/*This program is written by :
GWEE ZI NI (A24CS0078)
NUR UMAIRAH BINTI ZAMRI(A24CS0168)*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//prototypes for array1, array2
void Input(int[],double[],double[],int);
void Output(int[],double[],double[],int);

int main()
{
    const int SIZE=10; // array size
    int item_No[SIZE]; 
    double price[SIZE];
    double discount[SIZE];
    
    //function call for Input and Output
    Input(item_No,price,discount,SIZE);
    Output(item_No,price,discount,SIZE);

    return 0;
}

void Input ( int item_No[], double price[],double discount[], int SIZE)
{
  
   //reads the data from input file
   ifstream inFile("input.txt"); 

   if (!inFile.is_open()) //check for successful opening
   {
    cout << "Input file could not be opened.";
    return;
   }
   
   else
     
     for (int i=0; i<SIZE; i++)
     {
         inFile >> item_No[i]; //read item_No
         

         inFile >> price[i]; //read price
         

         inFile >> discount[i]; //read discount
         
     }
    inFile.close(); //close the input file after reading
}

void Output (int item_No[], double price[], double discount[], int SIZE)
{
    cout << "Number of items on sale\n\n";
    cout << "------------------------------------------------------------\n\n";

    cout << setw(10) << "Item No " << setw(10) <<  "Price " << setw(10) << "   Discount(%) " << setw(15) <<  "Price after discount " << endl;
    cout << right;
    cout << endl << endl;

    for (int i=0; i < SIZE; i++)
    {   
        //calculate price after discount
        double pcds=((discount[i])/100)*price[i];
        double priceafterdiscount= price[i]-pcds;

        //display the output 
        cout << setw(10) << item_No[i] << setw(10) << price[i] << setw(10) << discount[i];
        cout << setw(15) << priceafterdiscount;
        cout << endl;
    }
}
