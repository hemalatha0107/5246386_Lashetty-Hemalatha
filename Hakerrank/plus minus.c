void plusMinus(int arr_count, int* arr) {
    float p=0,n=0,z=0,p1,n1,z1;
    int i;
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
        p++;
        else if(arr[i]<0)
        n++;
        else {
            z++;
        }
    }
    p1=p/arr_count;
    n1=n/arr_count;
    z1=z/arr_count;
    printf("%f\n",round(1000000*p1)/1000000);
    printf("%f\n",round(1000000*n1)/1000000);
    printf("%f\n",round(1000000*z1)/1000000);
    
}
