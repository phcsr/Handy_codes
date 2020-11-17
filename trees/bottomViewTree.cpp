vector <int> bottomView(Node *root)
{
   map<int,int>mp;
   	queue<pair<Node *,int > >q;
	int d=0;
	vector<int> v;
	if(root==NULL)
	return v;
	q.push(make_pair(root,d));
	while(!q.empty())
	{
		pair<Node *,int> p = q.front();
		q.pop();
		struct Node *cur = p.first;
		int val = p.second;
		mp[val] = cur->data;
		if(cur->left!=NULL)
		{
			q.push(make_pair(cur->left,val-1));
		}
		if(cur->right !=NULL)
		{
			q.push(make_pair(cur->right,val+1));
		}
	}
		map<int ,int >::iterator it;

	for(it=mp.begin();it!=mp.end();it++)
	{
	    v.push_back(it->second);
// 		cout<<it->second<<" ";
	}
	return v;
}
