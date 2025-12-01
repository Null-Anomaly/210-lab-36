/*COMSC 210 | Lab 36 | Lawrence Bryant
IDE used: VSC*/
#include "stringBinaryTree.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() 
{
    
    stringBinaryTree tree;
    
    ifstream fin ("codes.txt");

    string liner;
    fin.open("codes.txt");
    while(fin.good())
    {
        getline(fin, liner);
        tree.insertNode(liner);
        cout << liner << "\n";
    }
    fin.close();

   /*
    fin.open("codes.txt");
    for(int i = 0; i < 100; i++)
    {
        getline(fin, liner);
        tree.insertNode(liner);
        cout << liner << "\n";
    }*/
    
    int x = -1;

    while(x != 0)
    {
        //Menuing.
        cout << "Welcome to the menu!\n Please select an option:\n";
        cout << "1. Insert a string into the tree\n";
        cout << "2. Delete a string from the tree\n";
        cout << "3. Search for a string in the tree\n";
        cout << "4. Display Records in order\n";
        cout << "0 to exit\n";
        cin >> x;

        //Inserts a value
        if(x == 1)
        {
            string temp;
            cout << "Insert the string you want to add: ";
            cin >> temp;
            tree.insertNode(temp);
        }
        //Deletes a value
        if(x == 2)
        {
            string temp;
            cout << "Insert the value of the string that you want to delete: ";
            cin >> temp;
            tree.remove(temp);
        }
        //Searches the value in the tree
        if( x == 3)
        {
            string temp;
            cout << "Insert the value of the string that you want to search for: ";
            cin >> temp;
            if(tree.searchNode(temp))
            {
                cout << "The string " << temp << " was found in the tree.\n";
            }
            else
            {
                cout << "The string " << temp << " was not found in the tree.\n";
            }
        }
        //displays values of the tree
        if(x == 4)
        {
            tree.displayInOrder();
        }

    }
    fin.close();

    return 0;
}