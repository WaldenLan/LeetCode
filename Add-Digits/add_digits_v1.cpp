class Solution {
public:
    int addDigits(int num) {
        int len = log10(num);
	    int i,a[10000],n=0,t=0;
	    for (i=0;i<=len;i++){
		    a[i]=(num/int(pow(10,i)))%10;
		    n+=a[i];
	    }
	    if (n/10 <1) return n;
	    else return addDigits(n);
    }
};
