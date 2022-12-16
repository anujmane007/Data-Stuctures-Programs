#include<stdio.h>

int graph[20][20], queue[20], visited[20], n;
int front = 0, rear = -1; 
int i, j;

void bfs(int v){
	for(i = 1; i<=n; i++){
		if(graph[v][i] == 1 && !visited[i])
			queue[++rear] = i;
	}
	if(front <=rear){
		visited[queue[front]] = 1;
		bfs(queue[front++]);
	}
}

int main(){
	int v;
	printf("Enter no of vertices: ");
	scanf("%d", &n);
	
	for(i = 0; i<=n;i++){
		queue[i]= 0;
		visited[i]=0;
	}
	printf("\nEnter the graph data in matrix form: \n");
	for(i = 1; i<=n;i++){
		for(j= 1; j<= n; j++){
			scanf("%d", &graph[i][j]);
		}
	}
	printf("\nEnter the starting vertex: ");
	scanf("%d", &v);
	bfs(v);
	printf("\nThe bfs is : ");
	for(i = 1; i<=n;i++){
		if(visited[i])
			printf("%d\t", i);
	}
}