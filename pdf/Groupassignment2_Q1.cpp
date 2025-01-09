//This is Question 1 in Assignment 2
/*This program is written by :
GWEE ZI NI (A24CS0078)
NUR UMAIRAH BINTI ZAMRI(A24CS0168)*/

#include <iostream>
#include<iomanip>
using namespace std;

//prototype
void function1(int[],int);
void function2(int[],int);

//main function
int main()
{
    const int SIZE=5;//SIZE for array1 and array2
    int  array1[SIZE];
    int array2[SIZE];
    int array3[10];
    int sum=0,odd=0;

    function1(array1,SIZE);//function call
    cout<<endl;
    function2(array2,SIZE);//funcation call
    cout<<endl;
    cout<<"OUTPUT:"<<endl;
    cout<<"Table array3:"<<endl;
    for(int count=0;count<SIZE;count++)//For array3,make the array2 appendix to array1
    {    
        array3[count]=array1[count];//The element of array 3 starts from elements of array1
        cout<<array3[count]<<" ";
    }
    for(int count=0;count<SIZE;count++)
    {
        array3[count+SIZE]=array2[count];//The element of array 3 continue with elements in array2
        cout<<array3[count+SIZE]<<" ";;
    }
    cout<<endl;
    for(int count=0;count<10;count++)
    {
        sum=sum+array3[count];//to calculate the sum of array3
    }
    double average=(static_cast<double>(sum))/10;

    //Find the highest and lowest
    int highest=array3[0];
    int lowest=array3[0];
    for(int count=0;count<10;count++)
    {
        if(array3[count]>highest)
            highest=array3[count];
        if(array3[count]<lowest)
            lowest=array3[count];
    }
    int range=highest-lowest;
    //count number of odd number in array3
    for(int count=0;count<10;count++)
    {
        if((array3[count]%2)!=0)
             odd=odd+1;
    }
    cout<<endl;
    cout<<"The average of ten number in array3 = "<<average<<endl;
    cout<<"The range of values in array3 = "<<range<<endl;
    cout<<"The number of odd numbers in array3 = "<<odd;
}

void function1(int array1[],int size)//function header
{
    cout<<"Enter table array1:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"PLease enter an integer: ";
        cin>> array1[i];
    }

    cout<<endl;
}

void function2(int array2[],int size)//function header
{

    cout<<"Enter table array2:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"PLease enter an integer: ";
        cin>> array2[i];
    }
}

void showfirst(int arr1)
{
    cout<<arr1<<" ";
}

void showsecond(int arr2)
{
    cout<<arr2<<" ";
}
