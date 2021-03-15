#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Создание массива, и поиск индекса передаваемого элемента
int binarySearch(int num, int *arr, int size){
    int indent = 0;
    while(size > 0){
        // Поиск индекса среднего элемента в массиве
        int medium = size / 2;
        
        // Рассматривается массив от 0 до size - 1
        // Нужный элемент больше, чем значение, лежащее в середине массива
        if(arr[indent + medium] > num){
        }
        // Нужный элемент меньше, чем значение, лежащее в середине массива
        else if(arr[indent + medium] < num) {
            // Массив сокращается до массива с середины массива до конца
            // Теперь рассматривается массив от середины исходного до конца
            indent += medium;   
        }
        // Нужный элемент лежит посередине исходного массива
        else if(arr[indent + medium] == num){
            return indent + medium;
        }
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