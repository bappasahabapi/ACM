## Prolem Statements:

## Bruteforce Approaches

```cpp
// using brute force

int maxArea(vector<int>& height)
{
    int maxWater =0; //ans

    // this is for left 
    for(int i =0;i<height.size();i++){
        //this is for right
        for(int j =0; j<height.size();j++){
           int width=j-i;
           int height =min(height[i],height[j]);
           int currWater =width*height;

           maxWater=max(currWater,maxWater);
        }
    }
    return maxWater;
        
}
```


Let’s break down the brute force solution to the **Container With Most Water** problem step-by-step, visually explaining each iteration.

---

### **Problem Setup**
The goal is to find two vertical lines from the input array `height` that form a container which holds the maximum amount of water. The formula for the water between two lines is:

\[
\text{Water} = \text{width} \times \min(\text{height[i]}, \text{height[j]})
\]

Where:
- `width = j - i` (distance between the two lines)
- `height[i]` and `height[j]` are the heights of the lines at indices `i` and `j`.

---

### **Input**
`height = [1, 8, 6, 2, 5, 4, 8, 3, 7]`

### **Output**
`49` (Maximum water held between two lines)

---

### **Step-by-Step Execution**

#### **Initialization**
- `maxWater = 0`: This will hold the maximum water found so far.

#### **Outer Loop (Left Pointer `i`)**
Iterates through each index `i` in the array.

---

### Visualizing Each Iteration

#### **1. i = 0 (Left Line at Index 0, Height = 1)**
- Inner loop starts from `j = 1` to the end of the array.

**Calculations**:
- \( j = 1 \): \(\text{width} = 1 - 0 = 1\), \(\text{ht} = \min(1, 8) = 1\), \(\text{Water} = 1 \times 1 = 1\)
  - `maxWater = max(0, 1) = 1`
- \( j = 2 \): \(\text{width} = 2\), \(\text{ht} = \min(1, 6) = 1\), \(\text{Water} = 2 \times 1 = 2\)
  - `maxWater = max(1, 2) = 2`
- Continue similarly for \( j = 3, 4, \ldots, 8 \).

**Maximum Water for \( i = 0 \)**:
`maxWater = 8`

---

#### **2. i = 1 (Left Line at Index 1, Height = 8)**
- Inner loop starts from `j = 2`.

**Calculations**:
- \( j = 2 \): \(\text{width} = 2 - 1 = 1\), \(\text{ht} = \min(8, 6) = 6\), \(\text{Water} = 1 \times 6 = 6\)
  - `maxWater = max(8, 6) = 8`
- \( j = 3 \): \(\text{width} = 2\), \(\text{ht} = \min(8, 2) = 2\), \(\text{Water} = 2 \times 2 = 4\)
  - `maxWater = max(8, 4) = 8`
- \( j = 8 \): \(\text{width} = 8 - 1 = 7\), \(\text{ht} = \min(8, 7) = 7\), \(\text{Water} = 7 \times 7 = 49\)
  - `maxWater = max(8, 49) = 49`

---

#### **3. i = 2 (Left Line at Index 2, Height = 6)**
- Inner loop starts from `j = 3`.

**Calculations**:
- \( j = 3 \): \(\text{width} = 3 - 2 = 1\), \(\text{ht} = \min(6, 2) = 2\), \(\text{Water} = 1 \times 2 = 2\)
  - `maxWater = max(49, 2) = 49`
- \( j = 8 \): \(\text{width} = 8 - 2 = 6\), \(\text{ht} = \min(6, 7) = 6\), \(\text{Water} = 6 \times 6 = 36\)
  - `maxWater = max(49, 36) = 49`

---

#### **Continue for Remaining Indices**
Repeat the process for \( i = 3, 4, \ldots, 7 \). The maximum water of `49` is never exceeded.

---

### **Visual Summary**
1. Heights:
   ```
   [1, 8, 6, 2, 5, 4, 8, 3, 7]
    ↑                                      ↑
    i = 1                                  j = 8
   ```
2. Maximum Water:
   - Width = 7 (distance between indices 1 and 8)
   - Height = 7 (minimum of height[1] = 8 and height[8] = 7)
   - Water = \( 7 \times 7 = 49 \)

---

### **Output**
`49`


## Optimized Solution: [two pointer]

```c++
// Applied Burte Force 

class Solution {
public:
    // using Two pointer approach O(n)

int maxArea(vector<int>& height)
{
    int maxWater =0;
    int lp=0;
    int rp=height.size()-1;

    while(lp<rp){
       int w = rp-lp;
      int  ht =min(height[lp],height[rp]);
      int  currWater =w * ht;
        maxWater =max(currWater,maxWater);
        height[lp]<=height[rp] ? lp++ : rp--;
        // if(height[lp]<height[rp]){
        //     lp++;
        // }
        // if(height[lp]>height[rp]){
        //     rp--;
        // }
    }
    return maxWater;     
}
};
```
### **Two-Pointer Approach for "Container With Most Water" Problem**

The two-pointer approach efficiently calculates the maximum water container in \(O(n)\) time by systematically narrowing down the search space.

---

### **Key Idea**
1. Use two pointers:
   - `lp`: starts at the **leftmost** index (0).
   - `rp`: starts at the **rightmost** index (`height.size() - 1`).
2. Calculate the area formed by the lines at `lp` and `rp`.
3. Move the pointer corresponding to the **shorter height** inward to maximize the height difference.

---

### **Code Implementation**
```cpp
int maxArea(vector<int>& height) {
    int maxWater = 0;  // Store the maximum water
    int lp = 0;        // Left pointer
    int rp = height.size() - 1; // Right pointer

    while (lp < rp) {
        // Calculate width and height
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;

        // Update maximum water
        maxWater = max(currWater, maxWater);

        // Move the pointer with the shorter height
        height[lp] <= height[rp] ? lp++ : rp--;
    }
    return maxWater;
}
```

---

### **Input**
```plaintext
height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
```

---

### **Step-by-Step Execution**

1. **Initialization**:
   - `lp = 0` (Height = 1)
   - `rp = 8` (Height = 7)
   - **Width**: \( rp - lp = 8 - 0 = 8 \)
   - **Height**: \( \min(1, 7) = 1 \)
   - **Water**: \( 8 \times 1 = 8 \)
   - Update `maxWater` to 8.
   - Move `lp` because height[lp] < height[rp].

---

2. **Next Iteration**:
   - `lp = 1` (Height = 8)
   - `rp = 8` (Height = 7)
   - **Width**: \( rp - lp = 8 - 1 = 7 \)
   - **Height**: \( \min(8, 7) = 7 \)
   - **Water**: \( 7 \times 7 = 49 \)
   - Update `maxWater` to 49.
   - Move `rp` because height[rp] < height[lp].

---

3. **Third Iteration**:
   - `lp = 1` (Height = 8)
   - `rp = 7` (Height = 3)
   - **Width**: \( rp - lp = 7 - 1 = 6 \)
   - **Height**: \( \min(8, 3) = 3 \)
   - **Water**: \( 6 \times 3 = 18 \)
   - `maxWater` remains 49.
   - Move `rp` because height[rp] < height[lp].

---

4. **Fourth Iteration**:
   - `lp = 1` (Height = 8)
   - `rp = 6` (Height = 8)
   - **Width**: \( rp - lp = 6 - 1 = 5 \)
   - **Height**: \( \min(8, 8) = 8 \)
   - **Water**: \( 5 \times 8 = 40 \)
   - `maxWater` remains 49.
   - Move `rp` because height[rp] <= height[lp].

---

5. **Continue the Process**:
   - Iteratively calculate the width, height, and area.
   - Adjust the pointers based on the shorter line to explore potentially larger containers.

---

### **Visualization**

#### Initial State
```plaintext
[1, 8, 6, 2, 5, 4, 8, 3, 7]
 ↑                             ↑
lp = 0                       rp = 8
Width = 8, Height = 1, Water = 8
```

#### After First Iteration
```plaintext
[1, 8, 6, 2, 5, 4, 8, 3, 7]
    ↑                         ↑
   lp = 1                   rp = 8
Width = 7, Height = 7, Water = 49
```

#### After Moving `rp`
```plaintext
[1, 8, 6, 2, 5, 4, 8, 3, 7]
    ↑                    ↑
   lp = 1              rp = 7
Width = 6, Height = 3, Water = 18
```

#### Final State
Once the pointers converge (`lp >= rp`), the maximum water stored is the answer.

---

### **Complexity**
- **Time Complexity:** \( O(n) \)
  - The two pointers traverse the array once.
- **Space Complexity:** \( O(1) \)
  - No additional space is used.

---

### **Output**
```plaintext
49
```
