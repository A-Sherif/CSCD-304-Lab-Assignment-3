// Bubble sort in C++

#include <iostream>
using namespace std;

//display the array
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void bubbleSort(int arr[], int n)
{
  for (int step = 0; step < n - 1; ++step)
  {
    for (int i = 0; i < n - step - 1; ++i)
    {
      // Sorts in ascending order
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}
void printArray(int arr[], int n)
{
  for (int x = 0; x < n; ++x)
  {
    cout << "  " << arr[x];
  }
  cout << "\n";
}
int main()
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   bubbleSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}


