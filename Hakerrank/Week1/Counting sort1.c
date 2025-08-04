int* countingSort(int arr_count, int* arr, int* result_count) {
    *result_count=100;
    int *result=calloc(100,sizeof(int));
    int index;
    for(int i=0;i<arr_count;i++){
        index=arr[i];
        result[index]++;
    }
    return result;

}
