// Austin Faulkner: December 30, 2019

#include <iostream>
#include <iomanip>  // setw()
#include <cctype>   // toupper
#include <cstdlib>  // EXIT_SUCCESS
#include "Gaddis_17_1_YourOwnLL_Specification.h"

using namespace MyLL_Ints;

void displayMenu();

int main(int argc, char* argv[])
{
   MyLL list;   // Declare an instance object of class MyLL

   MyLL::type_value *pointer = nullptr;

   char choice = ' ';
   int integer = 0,
       target = 0,
       minimumVal = 0,
       maximumVal = 0,
       message = 0;

   do
   {
      std::cout << std::endl << std::endl
                << std::setw(50) << "LINKED LIST MENU" << std::endl
                << std::setw(50) << "---------------------------------------"
                << "---------------------------------------"
                << std::endl;

      displayMenu();

      std::cout << std::setw(50) << "---------------------------------------"
                << "---------------------------------------"
                << std::endl << std::endl;
      std::cin >> choice;
      std::cout << std::endl;

      switch (choice)
      {
         case 'a':
         case 'A': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "Answer: " << list.FindListLength(pointer);
                             break;
         case 'b':
         case 'B': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "Answer: " << list.IsSortedUp(pointer)
                             << std::endl;
                             break;
         case 'c':
         case 'C': std::cout << "Please enter an nonnegative integer value: ";
                   std::cin >> integer;
                   std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The value you entered is: "
                             << integer;
                   list.InsertAsHead(pointer, integer);
                   break;
         case 'd':
         case 'D': std::cout << "Please enter an nonnegative integer value: ";
                   std::cin >> integer;
                   std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The value you entered is: "
                             << integer;
                   list.InsertAsTail(pointer, integer);
                   break;
         case 'e':
         case 'E': std::cout << "Please enter an nonnegative integer value: ";
                   std::cin >> integer;
                   std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The value you entered is: "
                             << integer;
                   list.InsertSortedUp(pointer, integer);
                   break;
         case 'f':
         case 'F': std::cout << "Please enter a nonnegative integer value: ";
                   std::cin >> target;
                   std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The value you entered is: "
                             << target;
                   list.DelFirstTargetNode(pointer, target);
                   break;
         case 'g':
         case 'G': std::cout << "Please enter a nonnegative integer value: ";
                   std::cin >> target;
                   std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The value you entered is: "
                             << target;
                   list.DelNodeBefore1stMatch(pointer, target);
                   break;
         case 'h':
         case 'H': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "Here are the linked list data: " << " ";
                   list.ShowAll(std::cout, pointer);
                   break;
         case 'i':
         case 'I': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "Minimum Value & Maximum Value: " << " ";
                   list.FindMinMax(pointer, minimumVal, maximumVal);
                   break;
         case 'j':
         case 'J': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The average is: ";
                   std::cout << list.FindAverage(pointer);
                   break;
         case 'k':
         case 'K': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "The linked list is now sorted."
                             << std::endl;
                   list.SortLinkedList(pointer);
                   break;
         case 'l':
         case 'L': std::cout << "The choice you entered is: "
                             << choice << std::endl
                             << "Enter promotion target: ";
                   std::cin >> target;
                   list.PromoteTarget(pointer, target);
                   break;
         case 'm':
         case 'M': std::cout << "The choice you entered is: "
                             << choice << std::endl;
                   list.ListClear(pointer, message);
                   break;
      }
   } while (toupper(choice) != 'Q');

   return EXIT_SUCCESS;
}

void displayMenu()
{
   std::cout << std::endl
             << std::setw(60)
             << "A)  Find the linked list length." << std::endl
             << std::setw(67)
             << "B)  Check if the linked list is sorted." << std::endl
             << std::setw(61)
             << "C)  Insert integer value as head." << std::endl
             << std::setw(61)
             << "D)  Insert integer value as tail." << std::endl
             << std::setw(80)
             << "E)  Insert an integer value in a sorted linked list."
             << std::endl
             << std::setw(54)
             << "F)  Delete a target node: " << std::endl
             << std::setw(70)
             << "G)  Delete node before first target match." << std::endl
             << std::setw(58)
             << "H)  Show all linked list data." << std::endl
             << std::setw(68)
             << "I)  Find the minimum and maximum values." << std::endl
             << std::setw(82)
             << "J)  Find the average of the values in the linked list."
             << std::endl
             << std::setw(53)
             << "K)  Sort the linked list." << std::endl
             << std::setw(80)
             << "L)  Promote target integer to the front of the list." << std::endl
             << std::setw(60)
             << "M)  Clear the whole linked list." << std::endl
             << std::setw(49)
             << "Q)  Quit the program."
             << std::endl << std::endl;
}
