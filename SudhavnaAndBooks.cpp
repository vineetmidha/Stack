// https://www.codechef.com/problems/SUDBOOKS

#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	
	stack<int> st;
	
	while (q--)
	{
	    int type, n;
	    
	    cin >> type;
	    
	    if (type==1)
	    {
	        cin >> n;
	        st.push(n);
	    }
	    else if (type==-1)
	    {
	        if (st.empty())
	            cout << "kuchbhi?\n";
	        else
	            {
	                cout << st.top() << "\n";
	                st.pop();
	            }
	    }
	}
	
	return 0;
}

