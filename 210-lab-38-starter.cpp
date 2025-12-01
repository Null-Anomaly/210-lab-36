/*COMSC 210 | Lab 36 | Lawrence Bryant
IDE used: VSC*/
#include <iostream>
#include "stringBinaryTree.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    
    stringBinaryTree tree;
    ifstream inner ("codes.txt");
    inner.open("codes.txt");
    string line;
    while(getline(inner, line))
    {
        tree.insertNode(line);
    }
    inner.close();
    
    int x = -1;

    while(x != 0)
    {
        cout << "Welcome to the menu!\n Please select an option:\n";
        cout << "1. Insert a string into the tree\n";
        cout << "2. Delete a string from the tree\n";
        cout << "3. Search for a string in the tree\n";
        cout << "4. Modify the records\n";
        cout << "0 to exit\n";
        cin >> x;

        if(x == 1)
        {
            string temp;
            cout << "Insert the string you want to add";
        }
    }

    return 0;
}