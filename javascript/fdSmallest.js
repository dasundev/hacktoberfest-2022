var arr,
  i,
  l,
  min

arr = [29,7,67,4,9,34,7,12,987]
min = Number.POSITIVE_INFINITY
for (i = 0, l = arr.length; i < l; i++) {
  min = Math.min(min, arr[i])
}
console.log (`The smallest number in the array: ${min}`);