
class Solution:
    def reverse(self, x: int) -> int:
        sign =1
        sum =0
        if(x<0):
            sign = -1
            x*=(-1)
        if(x>0):
            while(x!=0):
                rem = x%10
                sum = sum*10 + rem
                x = x//10
        reversed = sum*sign
        if(not -2147483648<=reversed<= 2147483647):
            return 0
        else:
            return reversed
num = int(input())
solution = Solution()
result = solution.reverse(num)
print(result)
        
    