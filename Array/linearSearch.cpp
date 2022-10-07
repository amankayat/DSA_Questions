void linearSearch(vector<int>v,int key){
	for(int i=0;i<v.size();i++){
		if(v[i]==key)
			return true;//key found in array
	}
	return false;//key not found
}