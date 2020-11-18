string reverseWord(string str){
    string s1="";
    for(int i = str.size()-1;i>=0;i--)
    {
        s1+=str[i];
    }
    return(s1);
}
