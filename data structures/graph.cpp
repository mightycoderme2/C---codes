#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector <int > top_sort;

void addedge(vector <int> a[],int u ,int v)
{
    top_sort.push_back(v);
    a[u].push_back(v);
    //a[v].push_back(u);
}
void printvector(vector<int> a[])
{
    for (int v = 0; v < 6; ++v) {
        cout << "\n aacency list of vertex " << v
             << "\n head ";
        for (auto x : a[v])
            cout << "-> " << x;
        printf("\n");
    }
}

/*
void printgraph(int a[5][5],int n1,int b)
{
    if(b==1)
    {
        for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            a[i][j]=0;
            cout<<a[i][j];
        }
    }
    }
    else
    {
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            cout<<a[i][j];
        }
    }
    }
}
*/
void dfs_ans(int i , vector<int> a[], vector <bool> &visited)
{
visited[i]=true;
   cout<<i<<" ";
for(int j = 0; j < a[i].size(); j++)
{
    if(visited[a[i][j]]==false)
    {
     dfs_ans(a[i][j],a,visited);
    }
}
}
void dfs(vector <int> a[], int n)
{
vector<bool>visited(n,false);
for(int i = 0; i < n; i++)
{
    if(visited[i]==false)
    {
        dfs_ans(i,a,visited);
    }

}
}

bool check(queue<int>q,int x)
{
    queue<int>b;
    b=q;
    while(!b.empty())
    {
        if(x==b.front())
        {
            return false;
        }
        else
        {
            b.pop();
        }
    }
    return true;
}

vector <int > construct_func(vector <int> a[], vector <int> top_sort)
{
for (int v = 0; v < 6; ++v) {
        for (auto x : a[v])
            {
                top_sort.push_back(x);
            }
    }
    return top_sort;
    
}
int main()
{
    //normal representation
    /*
    int n,m;
    cout<<"enter the number of nodes";
    cin>>n;
    int a[n][n];
    printgraph(a[5][5],5);
    for(int i=0; i<n; i++)
    {
        int u,v;
        cout<<"enter source and target node";
        cin>>u>>v;
        a[u][v]=1;
        a[v][u]=1;
    }
    printgraph(a[5][5],5);
    */
   //vector representation 
   vector <int> a[6];
   int n=6;
   /*
    addedge(a, 0, 1);
    addedge(a, 0, 4);
    addedge(a, 1, 2);
    addedge(a, 1, 3);
    addedge(a, 1, 4);
    addedge(a, 2, 3);
    addedge(a, 3, 4);
   printvector(a);

   dfs(a,n);
   int b;
    queue <int>q,t;
    cout<<"enter a starting node 0-5";
    cin>>b;
    q.push(b);
    while(!q.empty())
    {
        int top=q.front();
        t.push(q.front());
        q.pop();
        for(int i=0;i<a[top].size();i++)
        {
            if(check(q,a[top][i])==true){
                if(check(t,a[top][i])==true)
                {
                q.push(a[top][i]);
            }
            }
        }

    }
    while(!t.empty())
    {
        cout<<t.front();
        t.pop();
    }
    */
    queue <int> y;
    vector <int> top_sort_2;
    addedge(a,5, 2);
    addedge(a,5, 0);
    addedge(a,4, 0);
    addedge(a,4, 1);
    addedge(a,2, 3);
    addedge(a,3, 1);
    printvector(a);
    /*
    for(auto x:top_sort)
    {
        cout<<x;
    }
    */
while(top_sort_2.size()!=6)
{
    for(int i1=0;i1<6;i1++)
    {
        auto res = find(top_sort.begin(),top_sort.end(),i1);
        auto res1= find(top_sort_2.begin(),top_sort_2.end(),i1);
        if(res==top_sort.end() && res1==top_sort_2.end())
        {
            top_sort_2.push_back(i1);
            cout<<i1;
            a[i1].clear();
        }
        top_sort.clear();
        top_sort=construct_func(a,top_sort); 
    }
}
  return 0;
}