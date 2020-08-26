#include<stdio.h>

int countArrayElement(int *ptr, int capacity){
    int count = 0;
    int i = 0;
    while( i < capacity){
        if(ptr[i] != 0){
            count ++;
        }
        i++;
    }
    return count;
}

void travesal(int *ptr, int usedSize){
    for(int i = 0; i < usedSize ; i++){
        printf(" %d ",ptr[i]);
    }
 printf("\n");   
}

int indexInsertion(int *ptr, int element, int index, int capacity, int usedSize){
    if(usedSize >= capacity){
        return -1;
    }else{
        for(int i = usedSize - 1; i >= index; i--){
            ptr[i+1] = ptr[i];
        }
        ptr[index] = element;
    }
}
int main(){
    
    
    int arr[10] = {1,4,52,12};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    // printf("%d",capacity);
    int usedSize = countArrayElement(&arr, capacity);
    travesal(&arr, usedSize);
    indexInsertion(&arr,7,2,capacity,usedSize);
    usedSize += 1;
    travesal(&arr,usedSize);

    return 0;
}