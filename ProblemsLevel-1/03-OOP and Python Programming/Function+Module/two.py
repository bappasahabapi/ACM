def add(n1,n2):
    return n1+n2;

# result = add (20,22); print('sum is:',result);
# result = add (20,30); print(result);

def func(x, li):
    print('type of x:',type(x));
    print('type of list:',type(li));
    
    x=500;
    li.append(4);
    return x;

a =10;
myList =[1,2,3 ];
print('List before function call:',myList);

y =func(a,myList);
print('value of y:',y);
print('value of a:',a);
print('List after function call::',myList);