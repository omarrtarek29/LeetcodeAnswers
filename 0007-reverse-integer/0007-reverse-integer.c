

int reverse(int x){
    unsigned char numArr[10];
    unsigned char digitsCounter = 0;
    unsigned char j;
    unsigned char signFlag = 0;
    int newNum = 0;
    
    if (x < -2147483647 || x > 2147483647){
        return 0;
    }
    
    if(x < 0){
        signFlag = 1;
        x = x * -1;
    }
    
    while(x != 0){
        numArr[digitsCounter++] = x % 10;
        x /= 10;
    }
    
    j = digitsCounter;
    
    for(unsigned char i = 0; i < digitsCounter; i++){
        newNum += (numArr[--j] * pow(10, i));
    }
    
    // When overflow occurs, newNum gets to be negative before assigning negative sign, so just return 0
    if(newNum < 0){
        return 0;
    }
    
    if(signFlag == 1){
        newNum *= -1;
    }

    
    return newNum;
    
}