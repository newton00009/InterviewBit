int Solution::solve(vector<int> &A, int b) {

    int n=A.size();
   int i=0;
int flag=0;
   int result=0;
  
  for(i=0;i<b;i++)
  result+=A[i];
 
int sum = result;

for(int i = 0; i < b; i++)
{
    sum -= A[b - 1 - i];
    sum += A[n - 1- i];
    
    result = max(result, sum);
}
   return result;

}
