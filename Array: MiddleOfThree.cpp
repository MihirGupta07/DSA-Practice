//User function template for C++

class Solution{
  public:
    int middle(int A, int B, int C){
        if((A>B&&B>C) || (C>B && B>A))
        return(B);
        if((A>C&&C>B) || (B>C && C>A))
        return(C);
        if((B>A&&A>C) || (A>B && C>A))
        return(A);
        
        
    }
};
