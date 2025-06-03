## Patterns: 
Needed for better understand to work with for loop excutation

- To print pattern we have nested loop .
    - ouoter loop for rows
    - inner loop for cols

- 1: for the outer loop, `count the number of lines/row;`
- 2: for the inner loop, `focus on the colums and connect` them somehow 
to the rows
- 3: whatever we printing , print them inside the inner for loop
- 4: Obververd symmetry `(optionals)`

```shell

- pattern-1

* 
* * 
* * * 
* * * * 

- pattern-3
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

- pattern-4
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

- pattern-5
* * * * * 
* * * * 
* * * 
* * 
* 
- pattern-6
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
- pattern-7
    *    
   ***   
  *****  
 ******* 
*********
- pattern-8
********* 
  *******  
   *****   
    ***    
     *     

- pattern-9
call patter7(), pattern8()

    *    
   ***   
  *****  
 ******* 
*********
********* 
 *******  
  *****   
   ***    
    *  
- pattern-10
call patter7(), pattern8()

    *    
   ***   
  *****  
 ******* 
*********
********* 
 *******  
  *****   
   ***    
    *  
- pattern-10a
call patter7(), pattern8a()

    *    
   ***   
  *****  
 ******* 
*********
 *******
  *****
   ***
    *

```