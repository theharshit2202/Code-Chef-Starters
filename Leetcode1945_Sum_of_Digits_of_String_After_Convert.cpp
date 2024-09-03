//https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/?envType=daily-question&envId=2024-09-03
class Solution {
public:

int sum_of_num (int num){
	int sum = 0;
	while(num > 0 ){
		int last_digit = num % 10;
		sum = sum + last_digit;
		num = num / 10;
	}
	//cout << "function gives : " << sum << "\n";
	return sum;
}

int getLucky(string s, int k) {
	int sum = 0  ;
    for(int i = 0; i < s.length(); i++) {  // Corrected from 'str' to 's'
            int num = (int) s[i] - 'a' + 1 ;
            //cout << "num received :" << num << "\n";
            if(num > 9){
            	sum += sum_of_num(num);
            }           
            else{
            	sum += num;
            }
            //cout << "current sum : " << sum << "\n ---------------\n";
        
    }
    while (k != 1){
        	sum =  sum_of_num(sum);
        	k--;
        }
    //cout << "final : " << sum;
    return sum;
}

};
