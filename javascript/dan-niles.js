const prompt = require("prompt-sync")();
let num_arr = [];
let size = prompt("Enter array size: "); // Array size

for (let i = 0; i < size; i++) {
	num_arr[i] = prompt("Enter array element " + (i + 1) + ": ");
}

console.log("Before reversing: " + num_arr);

num_arr.reverse(); // Reverse array

console.log("After reversing: " + num_arr);
