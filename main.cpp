#include <iomanip>
#include <iostream>
using namespace std;


/*
//prob1: Maximum Finder (Pointers & Arrays)
int findMax(int *arr, int size) {
    int max = *arr;
    for (int i=0; i<size; i++) {
        if (*(arr+i) > max)
            max = *(arr+i);
    }
    return max;
}
int main() {
    int heights[] = {150, 165, 172, 160, 180};
    int size = 5;

    int max = findMax(heights, size);
    cout << "Maximum Height: "<< max << endl;
    return 0;
}
*/

/*
//prob2: Pointer Variables a and b
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *ptrA = &a;
    int *ptrB = &b;

    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;

    cout << "Address of a: " << ptrA << endl;
    cout << "Address of b: " << ptrB << endl;
}
*/

/*
//prob 3: Find Max Value and Show Pointer
int main() {
    int size;
    cout << "How many number do you want to enter: ";
    cin >> size;

    int data[size];

    cout << "Enter " << size << " numbers: \n";
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
    int *maxPtr = &data[0];
    for (int i = 1; i < size; i++) {
        if (*(data + i) > *maxPtr)
            maxPtr = (data + i);
    }
    cout << "Maximum number is: " << *maxPtr<<endl;
    cout << "Pointer to max value: " << maxPtr << endl;
    return 0;
}
*/

/*
//prob 4:Analyze and Uncomment Code
#define val 33.3;
#define number 50;
int a;
int& fun(){
    return a;
}
int foo(){
    return a;
}
int main() {
    int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    double t;
    //*ptr_1=&n1; //9
    ptr_1=&n2;
    //*ptr_2=&n2; //11
    ptr_2=&n1;
    t=val; //33.3
    //k=val; //33.3
    //foo()=number;
    fun()=number; //50
    cout<< a <<" "<< *ptr_1+1 <<" "<< t-1 <<" "<<*ptr_2-1<<endl;
}
*/

/*
//prob 5: Pointer and Array Display
int main() {
    int arr[10] = {5, 12, 8, 19, 3, 25, 7, 14, 2, 30};
    int *ptrA = arr;

    cout << "Address\t\t\tValue" << endl;
    cout << "-------------------------------" << endl;

    for (int i = 0; i < 10; i++) {
        cout << ptrA+i << "\t" << *(ptrA+i) << endl;
    }

    return 0;
}
*/

/*
//prob6: Secret Message Decoder (Pointer Basics Dereferencing)
int main() {
    int secMes = 42;
    int *ptrSecMes = &secMes;

    cout <<"Secret message number: " <<*ptrSecMes << endl;
}
*/

/*
//prob 7:
float calculateAverage(int *arr, int size) {
    int *ptrArr = arr;
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += *(ptrArr+i);

    float average = float(sum) / size;
    return average;
}
int main() {
    int scores[] = {88, 76, 90, 85, 92};
    int n= 5;

    float average = calculateAverage(scores, n);

    cout << fixed << setprecision(2);
    cout << "The average student score is: " << average << endl;

    return 0;
}
*/

/*
//prob8: Treasure Hunt (Pointer Arithmetic Arrays)
int main() {
    int treasures[] = {10, 20, 30, 40, 50};
    int *ptr = treasures;

    int size = sizeof(treasures) / sizeof(treasures[0]);

    ptr = ptr + (size-1);

    cout << "Last treasure value: " <<*ptr << endl;
    return 0;
}
*/

/*
//prob9: Automated Grading System (Pointer Dynamic Update)
int main() {
    int score = 75;
    int *scorePtr = &score;

    cout <<"Original score: " << *scorePtr << endl;
    *scorePtr += 10;
    cout <<"New score: " << *scorePtr << endl;
    return 0;
}
*/

/*
//prob10: Magic Mirror (Reversing an Array with Pointers)
void reverseArray(int *arr, int size) {
    int *startPtr = arr;
    int *endPtr = arr + (size-1);
    int temp;

    while (startPtr < endPtr) {
        temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }
}

int main() {
    int arr[5]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, 5);

    cout <<"Reversed array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // Using pointer arithmetic
    }
    cout << endl;
}
*/

