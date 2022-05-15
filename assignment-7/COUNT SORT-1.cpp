vector<int> countingSort(vector<int>A) 
{
  vector<int> B(100);
  for(int i=0;i<A.size();i++)
  {
    B[A[i]]++;
  }
  return B;
}
