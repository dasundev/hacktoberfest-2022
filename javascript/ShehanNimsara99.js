function capitalize(str) {
  return str
    .split(" ")
    .map(word => word.replace(/^[a-z]/g, u => u.toUpperCase()))
    .join(" ");
}

console.log(
  capitalize(" capitalize the first letter of each word in a string ")
);
