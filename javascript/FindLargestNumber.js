let numberArray = [1, 2, 34, 54, 65, 32, 56, 67, 23, 76, 20]

Array.prototype.findLargest = function () {
    let maxValue = numberArray[0]
    for (let i = 1; i < numberArray.length; i++) {
        if (maxValue < numberArray[i]) {
            maxValue = numberArray[i]
        }
    }

    return maxValue

}

console.log("Decending order = ", numberArray.findLargest())
