//TEST 2023 2024, QUESTION 2 

float calculateLateFees()       //task1
{
    float fee;
    int day;

   
    while (day >= 0)
    {
        if (day <= 7)
        fee = day* 0.50;

        else if (day <= 14 )
        fee = (7*0.5)+ ((day-7)*1.00);

        else
        fee = (7*0.5)+(7*1.00) + ((day -14)*2.00);

    }

    return fee;
}

void displayMenu()          //task2
{
    cout << "1. Calculate Late Fees\n";
    cout << "2. Display Library Information\n";
    cout << "3. Quit\n"
}

void displayLibraryInfo()           //task3
{
    cout<< "************ Library Information ************\n";
    cout << "Library Name : UTM Library\n";
    cout << "Address: Skudai, Johor\n";
    cout << "Contact: (123) 456 7890\n";
}

int getUserInput(int& day)          //task4
{
    int day;
    cout << "Enter the number of days the book is overdue:";
    cin << day;

}

int main()          // task5
{
    do
    {
        displayLibraryInfo();
        displayMenu();
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice)
        {
            case 1 : calculateLateFees();
            break;

            case 2 : displayLibraryInfo();
            break;

            case 3 :
            cout << "Exiting the program. Thank  you!\n";
            break;
        }


    } while (choice !=0)

}