function sumArray(array) {
    let sum = 0;
  
    array.forEach(item => {
      sum += item;
    });
  
    console.log(sum);
    return sum;
  }
  
  sumArray([1, 7, 2, 4, 3]);