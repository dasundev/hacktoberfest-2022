let numberArray = [1, 2, 34, 54, 65, 32, 56, 67, 23, 76]

Array.prototype.descOrder = function () {
    for (let i = 0; i < numberArray.length; i++) {
        for (let j = i + 1; j < numberArray.length; j++) {
            if (numberArray[i] < numberArray[j]) {
                let temp = numberArray[i];
                numberArray[i] = numberArray[j];
                numberArray[j] = temp;
            }
        }
    }

    return numberArray

}

console.log("Decending order = ", numberArray.descOrder())
