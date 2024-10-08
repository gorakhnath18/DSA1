/*#include<iostream>
using namespace std;
int main(){
    // smallest in an array
    
   /*int marks[6]={5,15,22,1,-15,-24};
            int smallest=INT8_MAX;
                int idex=-1;


    for(int i=0;i<6;i++){

        if(marks[i]<smallest){
            smallest=marks[i];
            idex=i;
        }
        else{
            i++;
        }
        
    
    }

   // largest in an array
           int  largest=INT8_MIN;
int index=-1;

    for(int i=0;i<6;i++){
    

        if(marks[i]>largest){
            largest=marks[i];
            index=i;
        }
        else{
            i++;
        }
 
    
    }
        cout<<smallest<<"and "<<idex<<endl;

        cout<<largest<<"and"<<index;*/
/* #include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array
    int element = 30;  // element to find
    int index = -1;

    // Loop through the array to find the index of the element
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            index = i;
            break;  // break the loop once the element is found
        }
    }

    if (index != -1)
        cout << "Element " << element << " is found at index " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
*/





#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Swap the elements from start to end until the middle is reached
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array
    reverseArray(arr, n);

    // After reversing
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
