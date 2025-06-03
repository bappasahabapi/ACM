var search = function(arr, target) {
    let st = 0;
    let end = arr.length - 1;

    while (st <= end) {
        let mid = Math.floor(st + (end - st) / 2); // Ensure mid is an integer
        if (target == arr[mid]) {
            return mid;
        }

        // Check which part is sorted
        if (arr[st] <= arr[mid]) { 
            // Left part is sorted
            if (arr[st] <= target && target < arr[mid]) { 
                // Target is in the left part
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        } else {
            // Right part is sorted
            if (arr[mid] < target && target <= arr[end]) { 
                // Target is in the right part
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
};
