let numberArray = [1, 2, 34, 54, 65, 32, 56, 67, 23, 76]

Array.prototype.descOrder = function () {
    for (let i = 0; i < this.length; i++) {
        for (let j = i + 1; j < this.length; j++) {
            if (this[i] < this[j]) {
                let temp = this[i];
                this[i] = this[j];
                this[j] = temp;
            }
        }
    }

    return this

}

console.log("Decending order = ", numberArray.descOrder())