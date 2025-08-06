
🔘 **Question solved by merge sort:** https://docs.google.com/document/d/11Re0S3mgG1--Fn-NjLtVkS0fH_F1ioD5BRLw3LTFTuc/edit 

`Merge Sort:`divide and conquer algorithm
    
     01.First handle the base case;
     02. we have a loop which continues 0 to mid-1;
     03. Next divide the vector into two parts: vector b and vector c;
     04. Next we have sorted vector(means divide steps); which is in O(n)
     05. Next the conquer steps
    
#    Best Case :

        [] --> []
        [a] --> [a]

#   🎄 Implementation:

🔘 **Divide part**

🔥 `It takes a vector input and return a vector output`

```cpp
        vector<int> merge_sort(vector<int>a){
            
        }
```

 🔥 `next define the base case inside the vector`   
    if array size is **0 or 1** then return the array  

```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }
        }
```  

🔥 `otherwise we divide the array at the  midpoint `
```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;
        }
```  

🔥 ` divide the vector into two parts`

```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            // divide the vector into two parts
            vector<int>b;
            vector<int>c;
        }
``` 

🔥 ` Divide the vector into two parts vector b and c where a=b+c`

```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;
        }
``` 
🔥 **Divide the array into two parts if even then size of b = size of c otherwise** 

`vector b starts with 0 to mid and vector c element start mid to i<a.size() `
<!-- `Next we have to make a loop which iterate 0 to mid-1 ` -->



```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;

            for(int i=0;i<mid;i++)
                b.push_back(a[i]);

            for(int i=mid;i<a.size();i++)
                c.push_back(a[i]);
        }
``` 

🔥 `Next we call the two child array b and c`

     here a get the sorted b elements
    and a also get the sorted c elements

```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;

            for(int i=0;i<mid;i++)
                b.push_back(a[i]);

            for(int i=mid;i<a.size();i++)
                c.push_back(a[i]);

            //  now we get two sortd vector
            // This is divide steps
            vector<int>sorted_b=merge_sort(b);
            vector<int>sorted_c=merge_sort(c);

            
        }
``` 
**Conquer part**

🔥 `Store the two sorted array into vector a `

```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;

            for(int i=0;i<mid;i++)
                b.push_back(a[i]);

            for(int i=mid;i<a.size();i++)
                c.push_back(a[i]);

            //  now we get two sortd vector
            // This is divide steps
            vector<int>sorted_b=merge_sort(b);
            vector<int>sorted_c=merge_sort(c);
            
            // return sorted array is stored in vector a
            vector<int> sorted_a;

            
        }
``` 

🔥 ` Next we take two index and both are pointed in index 0`

```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;

            for(int i=0;i<mid;i++)
                b.push_back(a[i]);

            for(int i=mid;i<a.size();i++)
                c.push_back(a[i]);

        //  now we get two sortd vector
        // This is divide steps
            vector<int>sorted_b=merge_sort(b);
            vector<int>sorted_c=merge_sort(c);
            
        // return sorted array is stored in vector a
            vector<int> sorted_a;

         // Next we take two index and both are pointed in index 0
            int idx1 =0;
            int idx2 =0;

            
        }
```

🔥 `next the loop will run the vector size of a ;`
```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;

            for(int i=0;i<mid;i++)
                b.push_back(a[i]);

            for(int i=mid;i<a.size();i++)
                c.push_back(a[i]);

            //  now we get two sortd vector
            // This is divide steps
            vector<int>sorted_b=merge_sort(b);
            vector<int>sorted_c=merge_sort(c);
            
            // return sorted array is stored in vector a
            vector<int> sorted_a;

         // Next we take two index and both are pointed in index 0
            int idx1 =0;
            int idx2 =0;

    // next the loop will run the vector size of a;
            for(int i=0;i<a.size();i++)
            {
                if(sorted_b[idx1]<sorted_c[idx2])
                {
                    sorted_a.push_back(sorted_b[idx1]);
                    idx1++;
                }
                else
                {
                    sorted_a.push_back(sorted_c[idx2]);
                    idx2++;
                }
            }

            
        }
```

🔥 `Next check the corner case `
That means we the index is reach the last element then we store the other array element .


🔥 `next the loop will run the vector size of a ;`
```cpp
        vector<int> merge_sort(vector<int>a)
        {
            if(a.size()<=1){
                return a;
            }

            int mid =a.size()/2;

            vector<int>b;
            vector<int>c;

            for(int i=0;i<mid;i++)
                b.push_back(a[i]);

            for(int i=mid;i<a.size();i++)
                c.push_back(a[i]);

            //  now we get two sortd vector
            // This is divide steps
            vector<int>sorted_b=merge_sort(b);
            vector<int>sorted_c=merge_sort(c);
            
            // return sorted array is stored in vector a
            vector<int> sorted_a;

         // Next we take two index and both are pointed in index 0
            int idx1 =0;
            int idx2 =0;

    // next the loop will run the vector size of a;
            for(int i=0;i<a.size();i++)
            {
                //corner case
                if(idx1==sorted_b.size())
                {
                            sorted_a.push_back(sorted_c[idx2]);
                            idx2++;
                }
                else if(idx2==sorted_c.size())
                {
                            sorted_a.push_back(sorted_b[idx1]);
                            idx1++;
                }


                if(sorted_b[idx1]<sorted_c[idx2])
                {
                    sorted_a.push_back(sorted_b[idx1]);
                    idx1++;
                }
                else
                {
                    sorted_a.push_back(sorted_c[idx2]);
                    idx2++;
                }
            }
            
            return sorted_a;
            
        }

        int main()
        {
            vector<int> a={5,3,7,1,8,9};
            vector<int>ans =merge_sort(a);
            for(int i=0;i<ans.size();i++)
                cout<<ans[i]<<" ";
        
        
            return 0;
        }
```
