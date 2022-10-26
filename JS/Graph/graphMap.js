class Graph {
    constructor() {
        this.graph = new Map();
    }
    add_vertex(v) {
        this.graph.set(v, []);
    }
    add_edge(v1, v2) {
        this.graph.get(v1).push(v2);
        this.graph.get(v2).push(v1);
    }
    bft(v) {
        let visited = [];
        let queue = [];
        queue.push(v);
        visited.push(v);
        while (!(queue.length === 0)) {
            const curVertex = queue.shift();
            for (const adjVertex of this.graph.get(curVertex)) {
                if (!visited.includes(adjVertex)) {
                    queue.push(adjVertex);
                    visited.push(adjVertex);
                }
            }
        }
        console.log(visited);
    }
}
const graph = new Graph();
graph.add_vertex('A');
graph.add_vertex('B');
graph.add_vertex('C');
graph.add_vertex('D');
graph.add_edge('A', 'B');
graph.add_edge('B', 'C');
graph.add_edge('C', 'D');
graph.add_edge('D', 'A');
graph.bft('A');
// console.log(graph);
