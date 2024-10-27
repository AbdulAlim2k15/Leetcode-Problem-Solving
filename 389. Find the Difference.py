class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        counter_t = {}
        for char in t:
            if char in  counter_t:
                 counter_t[char] += 1
            else:
                 counter_t[char] = 1
        
        for c in s:
            if counter_t[c] == 1:
                del counter_t[c]
            else:
                counter_t[c] -= 1


        return list(counter_t.keys())[0]
