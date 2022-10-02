class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        ans = []
        flag = 0
        
        for x in nums:
            for j in ans:
                if x == j:
                    ans.remove(j)
                    flag = 1

            if flag == 0:
                ans.append(x)
                
            flag = 0
        
        return ans[0]