#include <iostream>
using namespace std;

int main()
{
   int rows, i, j, space;

   cout << "How many rows are to be printed: ";
   cin >> rows;

   for(i = 1; i <= rows; i++)
   {
      //for loop for displaying space
      for(space = i; space < rows; space++)
      {
         cout << " ";
      }
      //for loop to display star equal to row number
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }

      cout << "\n";
   }

   return 0;
}