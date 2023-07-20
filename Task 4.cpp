
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    ifstream File; //Declares a file stream object
    string fileName;
    string word;
    int count = 0;
	
	cout << "***Word Counting Tool*** \n" ;
    cout << "\nPlease enter the file location :  ";
    getline(cin,fileName);

    File.open(fileName.c_str());

    while(!File.eof())
    {               
        File >> word; 
        count++;
    }

    cout << "Number of words in file is " << count;
    File.close();

    cin.get();  
    return 0;
}
