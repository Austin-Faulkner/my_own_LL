// Austin Faulkner: December 30, 2019

/*
Design your own LL class to hold a series of integers. The class should
have member functions for appending, inserting, sorting, deleting, printing
finding the average, finding the max and min, and clearing the LL.
*/

#ifndef MYLL_INTS_H
#define MYLL_INTS_H

#include <iostream>

namespace MyLL_Ints
{
   class MyLL
   {
   public:

      struct Node
      {
         int data;
         Node* link;
      };

      typedef Node type_value;
      int FindListLength(Node* head);
      bool IsSortedUp(Node* head);
      void InsertAsHead(Node*& head, int value);
      void InsertAsTail(Node*& head, int value);
      void InsertSortedUp(Node*& head, int value);
      bool DelFirstTargetNode(Node*& head, int target);
      bool DelNodeBefore1stMatch(Node*& head, int target);
      void ShowAll(std::ostream& outs, Node* head);
      void FindMinMax(Node* head, int& minValue, int& maxValue);
      double FindAverage(Node* head);
      void SortLinkedList(Node* head);
      void PromoteTarget(Node*& head, int target);
      void ListClear(Node*& head, int noMsg = 0);
   };
}

#endif
