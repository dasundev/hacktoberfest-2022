// Time complexity of solution: O(n) 
// Count the Number of Duplicate Characters

const FunctionRepeatFind = (str) => {
    const allchars = {};
   for (const char of str) {
    allchars[char] = (allchars[char] || 0) + 1;
   }
   return Object.entries(allchars).filter(char => char[1] > 1).map(char => char[0]);
}
 
console.log(FunctionRepeatFind("aabbkdndiccoekdczufnrz")); // ["a", "b", "c", "d", "k", "n", "z"] 