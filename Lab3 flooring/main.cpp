#include <iostream>

using namespace std;

int main()
{
int choice;
string message1 = "1: Scored concrete, costs $3000\n";
string message2 = "2: Carpeting comes with a $5000 allowance\n";
string message3 = "3: Wood floors in the living area,\n carpeting in the bed rooms, tile in the bath areas,\n and a $5000 carpeting allowance, totaling $10000\n\n";

    cout << "This program asks a user to enter a choice of flooring for a new home.\n\n";
    cout << " enter the number that matches your floring choice\n";
    cout <<  message1;
    cout << message2;
    cout << message3;

    cin >> choice;
    cout << "\n\n";

if (choice == 1)
{
cout << "You chose selection " << message1 << "\n";
}
else if (choice == 2)
{
cout << "You chose selection " << message2 << "\n";
}
else if ( choice == 3)
{
cout << "You chose selection " << message3 << "\n";
}
else
{
cout << "Your selection is not available";
}
    return 0;
}
