int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    static int dia1=0;
    static int dia2=0;
    for(int i=0;i<arr_columns;i++)
    {
        dia1=dia1+arr[i][i];
    }
    for(int j=(arr_columns-1),i=0;j>=0,i<arr_rows;j--,i++)
    {
        dia2=dia2+arr[i][j];
    }
    if(dia1>dia2)
    return dia1-dia2;
    else{
        return dia2-dia1;
    }

}
