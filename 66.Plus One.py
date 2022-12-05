
#approach one (submitted)
class Solution(object):
   def plusOne(self, digits):
      """
      :type digits: List[int]
      :rtype: List[int]
      """
      num = ""
      #convert int list to string 
      for i in digits:
         num += str(i)
      num = int(num)   # string to int
      num += 1
      num = str(num)#again int to string
      #stre the element of string into an int list 
      ans = []
      for i in num:
         ans.append(int(i))
      return ans
digits = [1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9]
ob1 = Solution()
print(ob1.plusOne(digits))



#Approach two (not submitted)
import math
def plusOne(digits):
    l= len(digits)
    sum =0
    for i in range(l):
        sum = sum + digits[i]*pow(10,l-(i+1))
    sum += 1
    print(sum)

    
    i=0
    digitize = []
    while sum != 0:
        rem = sum%10
        sum = int(sum/10)
        print(rem," ",sum)
        digitize.insert(i,rem)
        i += 1
    

    size = len(digitize)-1
    k=0
    while(k <= size):
        temp = digitize[k]
        digitize[k] = digitize[size]
        digitize[size] = temp
        k += 1
        size -= 1
        
    for k in range(len(digitize)):
        print(digitize[k])
   
list = [6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3]
list1 = plusOne(list)


