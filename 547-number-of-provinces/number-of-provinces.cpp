class Solution {
public:
    void dfs(int node ,vector<int> adjList[] , vector<int> &visitedArr)
    {
        visitedArr[node]=1;

        for(int x:adjList[node])
        {
            if(!visitedArr[x])
            {
                dfs(x,adjList,visitedArr);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;

        //convert adj matrix to adj list
        vector<int> adjList[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        //calling DFS
        vector<int> visitedArr(n,0);
        for(int i=0;i<visitedArr.size();i++)
        {
            if(visitedArr[i]==0)
            {
                count++;
                dfs(i,adjList,visitedArr);
            }
        }
        return count;
    }
};