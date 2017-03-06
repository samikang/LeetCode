
class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        repo=[0]*10
        A=0
        B=0
        for i in range(len(secret)):
            if secret[i]==guess[i]:
                A+=1
            else:
                repo[int(secret[i])]+=1
        for i in range(len(secret)):
            if secret[i]!=guess[i] and repo[int(guess[i])]>0:
                B+=1
                repo[int(guess[i])]-=1

    
        return '{}A{}B'.format(A,B)
        
