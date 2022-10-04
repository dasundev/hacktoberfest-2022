const numbersArray = [10, 30, 50, 90, 30, 15, 5, 30, 45, 10];

//issue: #16 Find the Largest Number in an Array
const largestNumber = (arr) => {
  return Math.max(...arr);
};
//test result
console.log(`Largest number: ${largestNumber(numbersArray)}`);

//issue: #8 Reverse an Array
const reverseArray = (arr) => {
  return arr.reverse();
};
//test result
console.log(`Reverse array: ${reverseArray(numbersArray)}`);

//issue: #18 Sort Numbers in Descending Order
const sortNumbersDescending = (arr) => {
  return arr.sort((a, b) => b - a);
};
//test result
console.log(`Sorted array: ${sortNumbersDescending(numbersArray)}`);

//issue: #20 Remove Duplicates from an Array
const removeDuplicates = (arr) => {
  return [...new Set(arr)];
};
//test result
console.log(`After remove duplicates: ${removeDuplicates(numbersArray)}`);
