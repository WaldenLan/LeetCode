class Solution(object):

	def countBits(self, num):
	    """
	    :type num: int
	    :rtype: List[int]
	    """
	    list1 = []

	    for n in range(0, num + 1):
	        tmp = n
	        occur = 0
	        list2 = []
	        while (tmp != 0):
	            rmd = tmp % 2
	            tmp = (tmp - rmd) / 2
	            list2.append(rmd)
	            
	            
	        for m in range(0, len(list2)):
	            if list2[m] == 1:
	                occur = occur + 1

	        list1.append(occur)

	    return list1
