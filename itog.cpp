void srav(vector<int>& vec,vector<int>& vec2){
    sort(vec.begin(), vec.end());
    vector<int>::iterator iter = unique(vec.begin(), vec.end());
    vec2.assign(vec.begin(), iter);
}
