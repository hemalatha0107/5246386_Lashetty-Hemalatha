char* balancedSums(int arr_count, int* arr) {
    int l=0,r=arr_count-1;
    int lsum=arr[l];
    int rsum=arr[r];
    while(l!=r){
        if(lsum<rsum){
            l++;
            lsum=lsum+arr[l];
        }
        else{
            r--;
            rsum=rsum+arr[r];
        }
    }
    if(lsum==rsum)
    return "YES";
    else 
    return "NO";

}
