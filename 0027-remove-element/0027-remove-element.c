

int removeElement(int* nums, int numsSize, int val){
    int counter = 0;
    int k = numsSize - 1;
    
    for (int i = 0; i < numsSize; i++){
        if(nums[i] == val){
            nums[i] = -1;
        }
        else{
            counter++;
        }
    }
    
    for (int i = 0; i < numsSize; i++){
        if(nums[i] == -1){
            for (int j = k; j >= i; j--){
                if(nums[j] != -1){
                    nums[i] = nums[j];     
                    k = --j;
                    break;
                }
            }
        }
    }
    
    return counter;
}