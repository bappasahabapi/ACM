var peakIndexInMountainArray = function(arr) {
    let st=1;
    let end =arr.length -2;

    while(st<=end){

        let mid =st+(end-st)/2;

        if(arr[mid-1] < arr[mid] && arr[mid]> arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
            // go to the right
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
};