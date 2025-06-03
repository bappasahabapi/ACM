## Brute Force Approach:
Here's a visual explanation of the logic behind the solution to the **Best Time to Buy and Sell Stock** problem:

### Problem Breakdown
We are trying to find the maximum profit from a single buy and sell operation. The key here is to identify:
- The best day to buy the stock.
- The best day to sell the stock after the purchase.

---

### Steps with Visuals

#### **Step 1: Initialize Variables**
- `maxProfit` = 0 (initial profit is zero since no transactions are made yet).
- `bestBuy` = `prices[0]` (the first day's price is the initial "best buy price").

#### **Step 2: Iterate Through the Array**
For each day `i`, we:
1. Check if selling on this day yields a higher profit.
   - Formula: `prices[i] - bestBuy`.
   - If the result is greater than `maxProfit`, update `maxProfit`.
2. Update the `bestBuy` price if `prices[i]` is lower than the current `bestBuy`.

---

### Example
#### Input: `prices = [7, 1, 5, 3, 6, 4]`

| Day | Price | `bestBuy` | Profit (`prices[i] - bestBuy`) | `maxProfit` |
|-----|-------|-----------|-------------------------------|-------------|
|  1  |   7   |    7      |             -                 |      0      |
|  2  |   1   |    1      |             -                 |      0      |
|  3  |   5   |    1      |            5 - 1 = 4          |      4      |
|  4  |   3   |    1      |            3 - 1 = 2          |      4      |
|  5  |   6   |    1      |            6 - 1 = 5          |      5      |
|  6  |   4   |    1      |            4 - 1 = 3          |      5      |

---

### **Graphical Representation**

1. Plot the prices on a line graph.
2. At each step:
   - Keep track of the lowest point so far (`bestBuy`).
   - Calculate the potential profit if sold on the current day.
3. The `maxProfit` is the maximum height difference between any two points where the buy occurs first.

#### Visualization:
```
Prices: 7, 1, 5, 3, 6, 4
        *                       
        |                    
        |          *         Sell (Day 5)
        |       *            
        |                    Profit = 5
        |    *               
        |          *         Max Profit
        |-------------------      
        | *  Buy (Day 2)
        |     
        |
    Day: 1  2  3  4  5  6 
```

### Intuition:
1. "Buy low, sell high" means tracking the lowest price (`bestBuy`) so far.
2. Continuously calculate profit by subtracting `bestBuy` from the current price.
3. Keep the maximum profit updated at every step.