int superDigit(char* n, int k) {
    int k1,i;
    k1=k%9;
    if(k1 == 0)
        return 9;
    else
    {
        int sum=0;
        for(i=0;n[i] != '\0';i++)
            sum=(sum+n[i]-48)%9;
        if((sum*k)%9 == 0)
            return 9;
        else
            return (sum*k)%9;
     }

}
