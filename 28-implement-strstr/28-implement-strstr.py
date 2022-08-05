class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        needleLen = len(needle)
        haystackLen = len(haystack)
        loopRange = haystackLen if (needleLen == 1) else (haystackLen - needleLen) 
        
        if needle == haystack:
            return 0
        
        for i in range(loopRange + 1):
            if needle == haystack[i : needleLen + i]:
                return i
            
            
        return -1