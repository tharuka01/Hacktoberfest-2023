class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        p=[0]
        for i in nums:
            p.append(p[-1] + i)
        print(p)
        ans=0
        d={}
        for i in p:
            extra=i-k
            if extra in d:
                    ans+=d[extra]
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        return ans
