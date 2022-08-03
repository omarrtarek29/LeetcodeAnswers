class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
        nine_counter = 0
        
        for digit in reversed(digits):
            if digit == 9:
                nine_counter += 1
            else:
                break
        
        if nine_counter > 0:
            
            for i in range(nine_counter):
                del digits[-1 - i]
                digits.append(0)

            idx = -nine_counter - 1
            try:
                if digits[idx] is None:
                    digits.insert(-nine_counter, 1)
                else:
                    digits[idx] += 1
            except:
                digits.insert(-nine_counter, 1)
        else:
            digits[-1] += 1
        
        return digits