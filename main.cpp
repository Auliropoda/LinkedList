#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList A;

    for (int i = 0; i < 5; ++i)
    A.pushBack(i);

    for (int i = 0; i < A.size(); ++i)
    cout << A[i] << " ";
    cout << endl;


    A.remove(0);

    for (int i = 0; i < A.size(); ++i)
    cout << A[i] << " ";
    cout << endl;

     A.reverse();

    for (int i = 0; i < A.size(); ++i)
    cout << A[i] << " ";

}
