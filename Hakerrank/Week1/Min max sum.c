void miniMaxSum(int arr_count, int* arr) {
     long long int sum =0;int maxVal=arr[0],minVal=arr[0];


    for(int i=0;i<5;i++){
        sum += arr[i];
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    long long int minSum = sum - maxVal;
    long long int maxSum = sum - minVal;


    cout << minSum << " "<< maxSum << endl;

}
