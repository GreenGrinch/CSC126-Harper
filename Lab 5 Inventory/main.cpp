/*************************************************************************
* Name: Rafal Dzierzanowski
CSC 121
* Date: 09.14.2017
Lab 5
*************************************************************************
* Statement: Inventory for a hardware store is input by user and the
*
program lists the tools displaying the total cost and number
*
of tools
* Specifications:
* Input – Name of each tool (no spaces in the name) followed by the price
* Output- A list of tools, total cost and number of tools
*************************************************************************/


#include <iostream>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <ctype.h>

using namespace std;


int main()
{
string name;
string tool_list;
double cost;
double total_cost;
int total_number;

total_number = 0;
total_cost = 0;


cout << "Enter the name (without spaces) of the first tool followed by the price ( enter -1 to exit) ";

cin >> name;

	while (name != "-1")
	{

	cin >> cost;
	total_number++;
	total_cost += cost;
	tool_list = tool_list + "\n" + name;

    cout << "Enter the name (without spaces) of the next tool followed by the price (enter -1 as the tool name when finished): ";
	cin >> name;
	}

	cout << "Tools" << endl << tool_list << endl << endl;
	cout << "Total cost               $" << total_cost << endl;
	cout << "Number of tools           " << total_number;


return 0;
}
