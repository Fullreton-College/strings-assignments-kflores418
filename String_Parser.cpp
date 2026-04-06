#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For parsing lines
using namespace std;

void parseCSV(const string& filename);

int main() 
{   
   parseCSV("students.csv");
   return 0;
}


void parseCSV(const string& filename)
{
   ifstream inStream(filename);
   string word;

   while (getline(inStream, word, ' '))
   {
      for (int i = 0; i < word.length(); i++)
      {
         cout << word[i];
            if(word[i] == ':')
            {
               cout << ' ';
            }
      }

      cout << endl;
   }

   inStream.close();
}
