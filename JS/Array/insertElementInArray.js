const readline = require("readline");
const getIndex = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

var a = [60, 30, 3, 9, 10, 50];
var b = [];
var index = null;

// getIndex.question("What is the position ? ", (position) => {
//     index = position;
    
//     // O(n)
//   for (let i = 0; i < index - 1; i++) {
//     b[i] = a[i];
//   }
//     console.log(b);
//     getIndex.question("what number u wanna enter?", (number) => {
//         // O(1)
//         b[index - 1] = +number;

//         // O(n)
//         for (let i = index; i < a.length; i++){
//             b[i] = a[i];
//         }
//         console.log(b);
//         getIndex.close();
//     })
// });

//more efficient way --
// getIndex.question("What is the position ? ", (position) => {
//   index = position-1;

//   // O(n)
//   for (let i = a.length-1; i >= index ; i--) {
//     a[i+1] = a[i];
//   }
//   getIndex.question("what number u wanna enter?", (number) => {
//     // O(1)
//       a[index] = +number;
//       console.log(a);
//     getIndex.close();
//   });
// });

// using built-in methods --
a.splice(3, 0, 456);
console.log(a);