class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        # your code here
        a = set(A)
        b = set(B)
        c = set(C)
        x = list(a.intersection(b,c))
        x.sort()
        return x
