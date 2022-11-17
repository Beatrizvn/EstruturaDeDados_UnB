void swap(int *a,int *b){
    int z;
    z = *a;
    *a = *b;
    *b = z;
    return a, b;
}
