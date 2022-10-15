class Graph {
    constructor() {
        this.data = {};
    }
    addVertex(vertex) {
        if (!this.data[vertex]) {
            this.data[vertex] = [];
        }
    }
    addEdge(v1, v2) {
        if (!this.data[v1]) {
            this.addVertex(v1);
        }
        if (!this.data[v2]) {
            this.addVertex(v2);
        }
        this.data[v1].push(v2);
        this.data[v2].push(v1);
    }
    removeEdge(v1, v2) {
        this.data[v1] = this.data[v1].filter((item) => item !== v2);
        this.data[v2] = this.data[v2].filter((item) => item !== v1);
    }
    removeVertex(v) {
        if (!this.data[v] == undefined)
            return;
        for (const v1 of this.data[v]) {
            this.removeEdge(v, v1);
        }
        delete this.data[v];
    }
}
const graph1 = new Graph();

// add vertex
graph1.addVertex('A');
graph1.addVertex('B');
graph1.addVertex('C');
graph1.addVertex('D');

// add edges
graph1.addEdge('A', 'B');
graph1.addEdge('A', 'C');
graph1.addEdge('B', 'C');
graph1.addEdge('B', 'D');
console.log(graph1.data);

// remove edge in graph
graph1.removeEdge('B', 'D');
console.log(graph1.data);

//remove vertex
graph1.removeVertex('B');
console.log(graph1.data);



