//ASSIGNMENT 2 QUESTION 1
//NAMA AHLI 1 : NUR ALIAH IZZATI BINTI AZHARI A24CS0154
//NAMA AHLI 2 : NUR FAATIHAH BINTI MOHAMAD FUAD A24CS0161
//3 array 

#include <iostream>
using namespace std;

int main()
{
    int const SIZE=5;
    int array1[SIZE];
    int array2[SIZE];
    int array3[10];

    cout << "Enter table array1:" << endl;
    for (int count =0; count < SIZE ; count++)
    {
        cout << "Please enter an integer: ";
        cin >> array1[count];

    }

    cout << endl;
    cout << "Enter table array2: " << endl;
    for (int count =0; count < SIZE ; count++)
    {
        cout << "Please enter an integer: ";
        cin >> array2[count];
        
    }

    //for array3 - combine array1 and array2 
    int i =0;
    for (int count =0; count <5;count++)
    {
        array3[i]=array1[count];
        i++;
    }

    for (int count =0; count < 5; count++)
    {
        array3[i]=array2[count];
        i++;
    }

    //calc total used for ave
    double total =0;
    for (int count =0; count < 10; count ++)
    {
        total += array3[count];
    }

    //calc ave
    double ave = total/10;

    //finding largest for range 
    int largest = array3[0];
    for (int count =0; count < 10; count ++)
    {
        if (array3[count] >largest)
            largest = array3[count];
        
    }

    //finding LOWEST for range

    int lowest= array3[0];
    for (int count =0; count < 10 ; count++)
    {
        if(array3[count] < lowest)
            lowest = array3[count];

    }

    //calc range
    double range = largest - lowest;


    //finding odd
    int odd =0;
    for (int count =0; count<10 ; count++)
    {
        if (array3[count]%2 !=0)
            odd = odd +1;

    }

    cout << endl;
    cout << "OUTPUT:" <<endl;
    cout << "Table array3:" << endl;
    for (int count =0; count<10 ; count++)
    {
        cout << array3[count] << " ";
    }
    
    cout << endl << endl;
    cout << "The average of ten numbers in array3 = " << ave << endl;
    cout << "The range of values in array3 = " << range << endl;
    cout << "The number of odd numbers in array3 = " << odd << endl;

    return 0;
}
