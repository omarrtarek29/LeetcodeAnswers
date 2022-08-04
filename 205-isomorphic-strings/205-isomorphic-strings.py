class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        _map = dict()
        
        if len(s) != len(t):
            return False
        
        
        for i in range(len(s)):
            if s[i] in _map.keys():
                if _map[s[i]] == t[i]:
                    continue
                else:
                    return False
            else:
                if t[i] in _map.values():
                    return False
                else:
                    _map[s[i]] = t[i]
        
        return True