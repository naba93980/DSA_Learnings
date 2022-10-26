// Q: backtracing maze problem - no.of ways to reach right-bottom corner from top-left corner

function routes(row, col) {
    let leftSum = 0, rightSum = 0;
    if (row === 1 || col === 1) return 1;
    leftSum = routes(row - 1, col);
    rightSum = routes(row, col - 1);
    return (leftSum + rightSum);
}

console.log(routes(3,3));