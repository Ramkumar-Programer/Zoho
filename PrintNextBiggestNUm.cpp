/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;



void sort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}


int main()
{
    int num;
    
    cin >> num;
    
    int arr[num];
    for(int index =0 ; index < num; index += 1)
    {
        cin >> arr[index];
    }
    
    // int arr[] = {6, 4, 8, 1, 2};
    int arr1[5];
    int index = 0;
    for(auto a:arr)
    {
        arr1[index] = a;
        index +=1;
    }
    
    sort(arr, 5);
    int maxNum = arr[4];
    
    int index1 = 0;
    for(int start = 0; start < 5; start += 1)
    {
        for(int second = 0; second < 5; second += 1)
        {
            if(arr1[start] == maxNum)
            {
                cout << maxNum << "-> ";
                break;
            }
            else if(arr1[start] == arr[second])
            {
                cout << arr1[start] << "->" << arr[second+1] << " ";
            }
        }
    }

    return 0;
}

