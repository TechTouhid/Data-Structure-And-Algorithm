 // monotonic array check 
 function checkMonotonic(array){
    // taking first and last element
    const first = array[0];
    const last = array[array.length-1];
    
    // now loop through the array to check
    if(first === last){
        for(let i = 0 ; i<array.length-1; i++){
            if(array[i+1] !== array[i]){
                return false
            }
        }
    } else if(first < last){
        // non decreasing
       for(let i = 0 ; i< array.length -1; i++){
        if(array[i+1] < array[i]){
            return false;
        }
       }
    } else{
        // non increasing
        for(let i = 0 ; i< array.length -1; i++){
            if(array[i+1] > array[i]){
                return false;
            }
           }
    }
    return true;


}

console.log(checkMonotonic([3,2,5]));