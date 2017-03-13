
int **createMatrix(int numNodes){
	int** matrix = (int**) malloc(numNodes * sizeof(int*));
	for (int i = 0; i <= numNodes; i++){
		matrix[i] = (int*) malloc(numNodes * sizeof(int));
		for (int j = 0; j <= numNodes; j++)
			matrix[i][j] = 0;
	matrix[0][0] = numNodes; //numero de nos e guardado na posicao 00 da matrix
	}
   	return matrix;
 }

void freeMatrix(int** matrix){
	int numNodes = matrix[0][0];
	for (int i = 0; i <= numNodes; i++)
   		free(matrix[i]);
	free(matrix);
}

void addEdge(int** matrix, int fromNode, int toNode){
	matrix[fromNode][toNode] = 1;
	matrix[0][toNode] += 1;
}

void findNext(int** matrix){
	for (int i = 0; i <= matrix[0][0]; i++)
	matrix[0]
}