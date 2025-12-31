#include <stdio.h>

void f(int arr[], int current, int capacity, int newElement){
    int index = 0; // 找到合適的位置
    // STEP1 找到合適的位置
    for(int i=0;i<current;i++){
        if(newElement<arr[i]){
            index = i;
            break;
        }
    }
    printf("%d ", index);

    // STEP2 (把後面數字，一個一個往後班)
    for(int j=capacity;j>index;j--){
        arr[j] = arr[j-1];
    }
    // STEP3 插入
    arr[index] = newElement;
    current++;
}

int main(){
    // 這個陣列本身的最大數量
    const int capacity = 10;
    // 這個陣列目前大小
    int current = 5;
    // 陣列
    int arr[10] = {10, 20, 30, 40, 50};

    // 印出第一遍
    for(int i=0;i<current;i++){
        printf("%d ", arr[i]);
    }
    // 換行
    printf("\n");
    //  插入一個元素
    int newElement = 15;
    f(arr, current, capacity, newElement);

     // 印出第二遍
    for(int i=0;i<current+1;i++){
        printf("%d ", arr[i]);
    }
    // 換行
    return 0;
}