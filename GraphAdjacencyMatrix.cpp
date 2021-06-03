#include<iostream>
using namespace std;
#define MAX 100

class graph
{
    int adj[MAX][MAX]; //Adjacency matrix
    int n;             //Number of vertices in the graph
    int max_edges,i,j,origin,dest;
    int gtype;
    void g_type()
    {
        printf("\nEnter 1 for Undirected graph\nEnter 2 for Directed graph\n");
        printf("\nEnter your choice :: ");
        scanf("%d",&gtype);

        printf("\nEnter number of vertices :: ");
        scanf("%d",&n);

        if(gtype==1)
                max_edges = n*(n-1)/2;
        else
                max_edges = n*(n-1);
    }
    
    void input()
    {
        for(i=1; i<=max_edges; i++)
        {
                printf("\nEnter edge [ %d ] ( -1 -1 to quit ) : ",i);
                printf("\nOrigin:");
                scanf("%d",&origin);
                printf("\nDestination:");
                scanf("%d",&dest);
                if( (origin == -1) && (dest == -1) )
                        break;
                if( origin>=n || dest>=n || origin<0 || dest<0 )
                {
                        printf("\nInvalid vertex!\n");
                        i--;
                }
                else
                {
                        adj[origin][dest] = 1;
                        if( gtype == 1)         //if undirected graph
                                adj[dest][origin] = 1;
                }
        }  //End of for
    }
    void output()
    {
        printf("\nThe adjacency matrix is :: \n");
        for(i=0; i<=n-1; i++)
        {
                for(j=0; j<=n-1; j++)
                        printf("%4d",adj[i][j]);
                printf("\n");
        }
    }
    public:
    void setup()
    {
        g_type();
        input();
        output();
    }
};
int main()
{
    graph g;
    g.setup();
    return 0;
}