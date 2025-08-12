int pageCount(int n, int p) {
if(p<=(n/2))
    return p/2;
if(n%2==0 && (n-p)==1)
    return 1;
return (n-p)/2;

}
