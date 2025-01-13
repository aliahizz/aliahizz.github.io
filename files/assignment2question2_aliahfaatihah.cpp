// ASSIGNMENT 2 QUESTION 2
//NAMA AHLI 1 : NUR ALIAH IZZATI BINTI AZHARI A24CS0154
//NAMA AHLI 2 : NUR FAATIHAH BINTI MOHAMAD FUAD A24CS0161

#include <iostream>
#include <fstream>
#include <iomanip>

void Input (int[],double[],double[],int);
void Output (int[],double[],double[],int);  

using namespace std ;

int main ()
{
    const int SIZE = 50 ; 
    int itemNo[SIZE];     
    double price[SIZE];    
    double discount[SIZE]; 
    int count = 0;  

    Input (itemNo,price,discount,count);
    Output (itemNo,price,discount,count);

    return 0;       
}    

void Input(int itemNo[], double price[], double discount[], int count)
{
    ifstream inputFile("input.txt");

    if (!inputFile)
    {
        cout << "An error is encountered. Unable to open the input file." << endl;
    }
    else
    {
        for ( int i=0 ; i<10 ; i++)
        {
            inputFile >> itemNo[i] >> price[i] >> discount[i];
        }    
    }  
    inputFile.close();
}  

void Output (int itemNo[], double price[], double discount[],int count)
{
    ifstream inFile;
    cout << "\nNumber of items on sale" << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << endl;    
    cout << setw(10) << "Item No" << setw(10) << "Price" << setw(15) << "Discount(%)"<< setw(22) << "Price After discount" << endl;
    cout << endl << endl; 

    for (int i = 0; i < 10; i++) 
    {
        double newprice = price[i] - (price[i] * discount[i] / 100.0);        
        cout << setw(10) << itemNo[i] << setw(10) << price[i] << setw(10) << discount[i]<< setw(15) <<newprice<< endl;
    } 
    cout << endl << endl;         
}     