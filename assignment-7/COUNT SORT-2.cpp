

vector<int> countingSort(vector<int>A) {

vector<int> B (100);
for(int i=0;i<A.size();i++){
    B[A[i]]++;
}
vector <int>C;
    for(int i=0; i<B.size() ; i++ )
    {
        for(int j=0; j<B[i] ; j++ )
        {
            C.push_back(i);
        }
    }
    
    return C;

}



