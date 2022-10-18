let arr = ["A", "B", "C",
    "C", "A", "D"];

function removeDuplicates(arr) {
    return arr.filter((item,
                       index) => arr.indexOf(item) === index);
}

console.log(removeDuplicates(arr));

