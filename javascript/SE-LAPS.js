function findBiggestSmallest(arr,m)
{
    let Biggest = arr[0];
    let Smallest = arr[0];
 
    for (let i = 0; i < m; i++) {
        if (arr[i] < Smallest) {
            Smallest = arr[i];
        }
        else if (arr[i] > Biggest) {
            Biggest = arr[i];
        }
    }
    let answer = {
        "first":Smallest,
        "second":Biggest
    }
    return answer;
}
 
    let arr = [ 2,4,16,256,0,2022,-1];
    let M = arr.length;
 
    //Call the Function 
    let answer = {};
    answer = findBiggestSmallest(arr,M);
    console.log("Biggest Number Is: " + answer.second);
    console.log("Smallest Number Is: " + answer.first);
     