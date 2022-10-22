let numberArray = [65,3,8,9,12,34,6,23,89]

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

console.log("Decending order of the number pattern = ", numberArray.descOrder())
