# Two solutions
class Solution:
    def romanToInt(self, s: str) -> int:
        # thisdict = {
        #     "I": 1, 
        #     "V": 5, 
        #     "IV": 4, 
        #     "X": 10, 
        #     "IX": 9, 
        #     "L": 50,
        #     "XL": 40,
        #     "C": 100,
        #     "XC": 90,
        #     "D": 500,
        #     "CD": 400,
        #     "M": 1000,
        #     "CM": 900
        # }
        # i = 0
        # sum = 0
        # while(i<len(s)):
        #     if(s[i]=="I" and i < len(s)-1 and (s[i+1]=="V" or s[i+1]=="X")):
        #         sum += thisdict[s[i]+s[i+1]]
        #         i += 2
        #     elif(s[i]=="X" and i < len(s)-1 and (s[i+1]=="L" or s[i+1]=="C")):
        #         sum += thisdict[s[i]+s[i+1]]
        #         i += 2
        #     elif(s[i]=="C" and i < len(s)-1 and (s[i+1]=="D" or s[i+1]=="M")):
        #         sum += thisdict[s[i]+s[i+1]]
        #         i += 2
        #     else:
        #         sum += thisdict[s[i]]
        #         i += 1
        # return sum
        map = {'I': 1, 'V' : 5, 'X': 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' :1000}
        s = s[::-1]
        total = 0
        highest = 0
        for char in s:
            value = map[char]
            if value >= highest:
                highest = value
                total += value
            else:
                total -= value
        return total
            
        
