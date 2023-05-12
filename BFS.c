#include <stdio.h>
int q[20]={0}, visited[20]={0},i,f=0,r=-1;
int a [9][9] = {
        {0,1,0,0,0,0,0,0,1},
        {1,0,0,0,0,0,0,0,0},
        {0,0,0,1,1,1,0,0,0},
        {0,0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,1,0},
        {0,0,1,0,0,0,0,0,0},
        {0,0,0,0,0,1,0,1,0},
        {0,0,0,0,1,0,1,0,0},
        {0,0,1,0,0,0,1,0,0},


};
void bfs (int v){
for (i=0;i<9; i++)
    if (a[v][i]==1&& !visited [i])//a[0][1] && visited[0]==0
q[++r]=i;
if(f<=r){
    visited [q[f]]=1;
    bfs(q[f++]);

}
}

main(){
/*int v;
printf("\n Enter the starting vertex: ");
scanf("%d", &v); */
bfs(0);
for (i=0; i<9; i++){

    if(visited[i])
        printf("%d\t",i);
    else{
        printf("\n Bfs is not possible. Not all nodes are reachable");
        break;
    }
}

}
