char* pangrams(char* s) {
    int arr[26]={0};
    int i=0;
    int index;
    while(s[i]!='\0'){
        if(s[i]>='a'&& s[i]<='z')
            index=s[i]-'a';
        else
            index=s[i]-'A';
        arr[index]++;
        i++;
    }
    for(i=0;i<26;i++){
        if(arr[i]==0)
            return "not pangram";
    }
    return "pangram";

}
