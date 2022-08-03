

int pivotIndex(int* nums, int numsSize){
    int left_sum = 0, right_sum = 0;
    
    for (int i = 0; i < numsSize; i++){
        if (i == 0){
            left_sum = 0;
        }
        else{
            left_sum += nums[i - 1];
        }
        
        for (int j = (i + 1); j < numsSize; j++){
            right_sum += nums[j];
        }
        
        if (left_sum == right_sum){
            return i;
        }
        else{
            right_sum = 0;
        }
    }
    
    return -1;
}