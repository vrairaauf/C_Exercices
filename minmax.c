void miniMaxSum(int arr_count, int* arr) {
    int min, max,inMin,inMax, cmp, sommeMin=0, sommeMax=0;
    min=arr[0];
    inMin=0;
    max=arr[0];
    inMax=0;
    for(cmp=1;cmp<arr_count; cmp++){
        if(arr[cmp]>max){
            max=arr[cmp];
            inMax=cmp;
        }
        if(arr[cmp]<min){
            min=arr[cmp];
            inMin=cmp;
        }
        
    }
    for(cmp=0; cmp<arr_count; cmp++){
        if(inMax!=cmp){
            sommeMin += arr[cmp];
        }
        if(inMin != cmp){
            sommeMax += arr[cmp];
        }
    }
    printf("%d %d",  sommeMin, sommeMax);
}