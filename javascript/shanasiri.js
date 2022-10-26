//Sum of Numbers in an Array
const array = [1, 2, 3, 4];
let sum = 0;

for (let i = 0; i < array.length; i++) {
    sum += array[i];
}
console.log(sum);

//Sum of the odd numbers
limit = 10;
sum = 0;

for(let i = 1; i <= 10; i++){
    if(i % 2 == 1){
        sum = sum + i;
    }
}
console.log(`The sum of odd numbers from 0 - ${limit} is: \n ${sum}`);