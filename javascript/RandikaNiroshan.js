const numbersArray = [10, 30, 50, 90, 30, 15, 5, 30, 45, 10];

//issue: #16 Find the Largest Number in an Array
const largestNumber = (arr) => {
  return Math.max(...arr);
};
//test result
console.log(`Largest number: ${largestNumber(numbersArray)}`);