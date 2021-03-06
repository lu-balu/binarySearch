#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int binarySearch(int num, int *arr, int size){
    cout << "Создается массив из " << size << " элементов." << endl;
    cout << "Производится поиск индекса, на которм находится элемент " << num << "." << endl;
    int indent = 0;
    while(size > 0){
        int medium = size / 2;
        cout << "Индекс среднего элемента в новом массиве равен " << medium << endl;
        cout << "Рассматривается массив c " << indent << " индекса элемента по " << size - 1 << " индекс элемента." << endl;
        cout << "Размер массива больше 0." << endl;
        if(arr[indent + medium] > num){
            cout << "Значение " << arr[indent + medium] << ", лежащее по индексу " << medium << " серединного элемента больше искомого значения " << num << endl;
        }
        else if(arr[indent + medium] < num) {
            cout << "Значение " << arr[indent + medium] << ", лежащее по индексу " << medium << " серединного элемента меньше искомого значения " << num << endl;
            indent += medium;   
        }
        else if(arr[indent + medium] == num){
            return indent + medium;
        }
        cout << "Массив сокращается с " << size; 
        size = size / 2;
        cout << " элементов до " << size << " элементов." << endl;
    }
    return -1;
}

int main() {
    int size = 15;
    int arr[size];
    for(int i = 0; i < size; i++){
        arr[i] = i + 1;
    }
    cout << binarySearch(5, arr, size) << endl;
}