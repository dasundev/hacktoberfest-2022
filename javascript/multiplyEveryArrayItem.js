let numberArray = [1, 2, 34, 54, 65, 32, 56, 67, 23, 76, 20]

Array.prototype.multiflyArrayItem = function () {
    const newArray = this.map(x => x * 2);
    return newArray
}

console.log("Decending order = ", numberArray.multiflyArrayItem())