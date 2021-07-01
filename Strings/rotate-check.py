# Write a Code to check whether one string is a rotation of another

def rotateCheck(s1, s2):
    size1 = len(s1)
    size2 = len(s2)
    temp = ""
    temp = s1 + s1
    if (temp.count(s2)>0):
        return 1
    else:
        return 0

s1 = "AACD"
s2 = "ACDA"
  
if rotateCheck(s1, s2):
    print("Rotations")
else:
    print("Not rotations")
