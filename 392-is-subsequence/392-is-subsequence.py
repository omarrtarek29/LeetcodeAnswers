class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        _str = ''
        
        for ch in s:
    
            for i, char in enumerate(t):
                if ch == char:
                    _str += ch
                    t = t[1:]
                    break
                else:
                    t = t[1:]

        if _str == s:
            return True
        
        else:
            return False