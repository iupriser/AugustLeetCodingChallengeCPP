class Solution
{
public:
    /* bool detectCapitalUse(string word)
    {
        int capCnt = count_if(word.begin(), word.end(), [](char c) { return c <= 'Z'; });
        return !capCnt || capCnt == word.size() || (capCnt == 1 && word[0] <= 'Z');
    }
*/

    bool detectCapitalUse(string word)
    {
        for (int i = 1; i < word.size(); i++)
        {
            if (isupper(word[1]) != isupper(word[i]) ||
                islower(word[0]) && isupper(word[i]))
                return false;
        }
        return true;
    }

    /*
    bool detectCapitalUse(string word) {
		int size=word.size(),count=0;
		if(size<=1)
			return true;
		for (int i = 1; i < size; i++){
			if(word[i]>='a'&&word[i]<='z')
				count+=1;
			else
				count+=2;
		}
		if(count==size-1)
			return true;
		else if(count==2*(size-1))
			return word[0]>='A'&&word[0]<='Z';
		else 
			return false;
    }
*/

    /*
    bool detectCapitalUse(string word) {
        if(islower(word[0])){
            ExpFirst = false;
        }
        for(int i = 0; i < n; i++){
            
            if(islower(word[i])){
                AllCap = false;
            }
            
            if(isupper(word[i])){
                AllSmall = false;
            }
            
            if(isupper(word[i])&&i!=0){
                ExpFirst = false;
            }
            
        }
        if(AllCap || AllSmall || ExpFirst){
            return true;
        } 
    return false;   
    }
*/
};