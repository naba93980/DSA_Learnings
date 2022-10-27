class Graph {
    constructor() {
        this.graph = new Map();
        this.stack = [];
        this.visited = [];
    }
    add_vertex(v) {
        this.graph.set(v, []);
    }
    add_edge(v1, v2) {
        this.graph.get(v1).push(v2);
        this.graph.get(v2).push(v1);
    }
    dft(v) {
        console.log(this.visited);
        if (!this.visited.includes(v)) {
            this.stack.push(v);
            this.visited.push(v);
        }
        else return;
        let curVertex = this.stack[this.stack.length - 1];
        for (const vertex of this.graph.get(curVertex)) {
            this.dft(vertex);
        }
        this.stack.pop();
        return;
    }
}


const graph = new Graph();
graph.add_vertex('A');
graph.add_vertex('B');
graph.add_vertex('C');
graph.add_vertex('D');
graph.add_vertex('E');
graph.add_vertex('F');
graph.add_edge('A', 'B');
graph.add_edge('B', 'C');
graph.add_edge('C', 'D');
graph.add_edge('D', 'F');
graph.add_edge('F', 'A');
graph.add_edge('A', 'E');
graph.add_edge('E', 'C');
graph.dft('A');

