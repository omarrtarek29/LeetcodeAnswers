

int mySqrt(int x){
    long i = 1;
    long half = x/2; 
    
    if (x <= 0){
        return 0;
    }
    
    else if(x == 1){
        return 1;
    }
    
    else{
        for (i = 1; i <= half; i++){
            
            if(x == (i * i)){
                return i;
            }
            
            else if(x < (i * i)){
                return (i - 1);
            }
            
        }
    }
    return (i - 1);
}