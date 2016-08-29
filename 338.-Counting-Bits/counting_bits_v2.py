class Solution(object):

    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        list1 = []
        base_pow = 1
        flag = 0
        for n in range (0, num + 1):
            list1.append(0)

        for n in range(1, num + 1):
            if n == base_pow:
                base_pow = base_pow * 2
                flag = 0
            list1[n] = list1[flag] + 1
            flag = flag + 1

        return list1
