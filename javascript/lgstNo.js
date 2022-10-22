let arr = [4, 6,87,50,4,38, 10];
temp = 0;

arr.forEach((element) => {
  if (temp < element) {
    temp = element;
  }
});

console.log(`The largest number in the array: ${temp}`);