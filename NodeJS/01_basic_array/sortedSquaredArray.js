// sorted squared array with "n log n" time complexity
function sortedSquaredArrayNLogN(array){
    // define the new array here
    const newArray = new Array(array.length).fill(0);

    for( let i = 0; i < array.length; i++){
        newArray[i] = Math.pow(array[i] , 2); // array[i] * array[i]
    }

    // sort array with built in function
    newArray.sort((a,b) => a - b);
    // newArray.sort(function(a,b) {return a - b});
    return newArray;
}

// sorted squared array wilt o(n) time complexity
function sortedSquaredArrayN(array) {
    // define new array here
    const newArray = new Array(array.length).fill(0);
    let pointerLeft = 0;
    let pointerRight = array.length - 1;
    for (let i = array.length - 1; i >= 0; i--) {
        const leftSquared = Math.pow(array[pointerLeft], 2);
        const rightSquared = Math.pow(array[pointerRight], 2);
        
        if(leftSquared > rightSquared){
            newArray[i] = leftSquared;
            pointerLeft++;
        }else{
            newArray[i] = rightSquared; 
            pointerRight--;
        }
    }
    return newArray;
}


a = [1, 3, 4, 5];
b = [-7, -2, 3, 4, 9];
c = [];

// console.log(sortedSquaredArrayNLogN(a));
// console.log(sortedSquaredArrayNLogN(b));
// console.log(sortedSquaredArrayNLogN(c));

d = [1, 4, 5, 7];
e = [-6, -1, 0, 5, 10];
f = [];

console.log(sortedSquaredArrayN(d));
console.log(sortedSquaredArrayN(e));
console.log(sortedSquaredArrayN(f));


