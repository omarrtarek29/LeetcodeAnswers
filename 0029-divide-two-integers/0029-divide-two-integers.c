

int divide(int dividend, int divisor){   
    long long ans;
    
    if (dividend < -2147483648){
        return -2147483648;
    }
    else if (dividend > 2147483647){
        return 2147483647;
    }
    
    ans = (long long)dividend / divisor;
    
    if (ans > 2147483647){
        return 2147483647;
    }
    
    return (int)ans;
}