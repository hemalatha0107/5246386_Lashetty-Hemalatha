char* timeConversion(char* s) {
    int hh = (10 * (s[0] - '0')) + (s[1] - '0');
    if(s[8] == 'P' && hh < 12){
        hh += 12;
    }
    else if(s[8] == 'A' && hh == 12){
        hh = 0;
    }
    s[0] = (char)((hh / 10) + '0');
    s[1] = (char)((hh % 10) + '0');
    s[8] = '\0';
    return s;

}
