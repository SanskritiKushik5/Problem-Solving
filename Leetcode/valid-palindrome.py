class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s=''
        for item in s:
            if item in "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM0123456789":
                new_s +=item.lower()
        if new_s[::-1]==new_s:
            return True
        return False
