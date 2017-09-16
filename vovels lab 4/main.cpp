/*************************************************************************
* Name: Rafal Dzierzanowski
CSC 121
* Date: 09.14.2017
Lab 4
*************************************************************************
* Statement: Count the number of vowels in a sentence
* Specifications:
* Input – A sentence
* Output- The sentence, # of characters and # of times each vowel occurs
*************************************************************************/


#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
int a_count;
int e_count;
int i_count;
int o_count;
int u_count;
int i;
string sentence;


   cout << "This program asks the user for a sentence,\n";
   cout<< "searches the sentence for all vowels,\n";
    cout<< "and displays the number of times each\n";
    cout<< "vowel appears in the sentence.\n\n";


    a_count = 0;
    e_count = 0;
    i_count = 0;
    o_count = 0;
    u_count = 0;

    cout << "Enter the sentence to search: \n";
    getline(cin,sentence);
for ( i=0; i<=sentence.length()-1; i++)
   {
         if ( sentence[i]=='a'|| sentence[i]=='A')
    {
a_count++;

    }

    if ( sentence[i]=='e'|| sentence[i]=='E')
    {
e_count++;

    }
    if ( sentence[i]=='i'|| sentence[i]=='I')
    {
i_count++;

    }
    if ( sentence[i]=='o'|| sentence[i]=='O')
    {
o_count++;

    }
    if ( sentence[i]=='u'|| sentence[i]=='U')
    {
u_count++;

    }
    }

    cout<<"There are\n\n" << a_count << " a's\n"<<e_count<<" e's\n" << i_count<< " i's\n"<<o_count<< " o's and \n" << u_count<< "u's"<< endl;
}
