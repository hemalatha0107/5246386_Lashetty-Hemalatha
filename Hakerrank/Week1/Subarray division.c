int birthday(int s_count, int* s, int d, int m) {
    int outp = 0;
    for(int i = 0; i < s_count; i++){
        int day = d;
        int month = m;
        int value = i;
        while(month--){
            day -= s[value];
            value++;
        }
        if(day == 0){
            outp++;
        }
    }
    return outp;

}
