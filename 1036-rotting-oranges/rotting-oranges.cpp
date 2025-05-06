class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size(); // size of rows
        int m=grid[0].size(); // size of columns 
          queue<pair<pair<int, int>, int>> q;// queue banao with rows,columns and time ka jisko queue me push karege like in this format((1,2),0)
        int fresh=0; // fresh ka count karlo pehle kyuki baadme jab zero hoga tab time over hojaega
        vector<vector<int>> vis(n,vector<int>(m,0)); // visited ka bhi ek grid banalo because original grid jo ref se pass hui hai usme gadbad nahi machani hai apne ko
        for(int i=0;i<n;i++){ //n tak chalo rows me
            for(int j=0;j<m;j++){ // m tak chalo columns mein
                if(grid[i][j]==2){ //dekhlo rotten kaha kaha hai
                    vis[i][j]=2; // rotten hai toh duplicate vis array me rotten mark kardo
                    q.push({{i,j},0}); // queue mein bhi push kardo usko with time 1 jisse wo pop karde baadme and next check karein and then visited me cross check krle and also har side ka dekhna hai toh ek sath 4 entries push hongi
                }
                else if(grid[i][j]==1){//dekhlo fresh aur badha do fresh ka count
                    fresh++;
                }
            }
        }

int tm=0;//ye apna total time taken hai
        // next apan directions dekh lete hai clockwise dekh lete hai
        int ans =0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        //bfs chalayege and queue ke andar pehe front me initiaise kardege ki kaha pe kya hai jese currently front mein grid ke rotten row ka value and column ka value and time taken and jo initialise 0 se hua tha upar 
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
         tm =max(t,tm);
        for(int i=0;i<4;i++){
            //neighbours ko rot karege ek ke baad ek sath mein 
           int  nrow=r+drow[i];
            int ncol=c+dcol[i];
            //row and col rot karne ke baad ek aur loop mein chalte hai jisme apan dekhenge ki out of bounds toh nahi ja raha kahin ki n se aage chala jaae ya 0 ya 0 se kam hojae
            //ek aur cheez dekhenge apan ki fresh orange hai and rotten toh nahi hai kahin because apan fresh ko hi rot kar sakte hai na 
            if(nrow>=0 and nrow<n and ncol>=0 and ncol<m and grid[nrow][ncol]==1 and vis[nrow][ncol]!=2){
                 vis[nrow][ncol]=2;
                 grid[nrow][ncol]=2;
               q.push({{nrow, ncol}, t + 1});
               
                fresh--;
            }
            
        }
    }
        if (fresh==0)
        return tm;
        else
        return -1;

    }
};