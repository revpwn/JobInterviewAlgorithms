# Recursive function to search x in arr[l..r]  
def recSearch(arr, front, back, num): 
    if back < front: 
        return -1
    if arr[front] == num: 
        return front 
    if arr[back] == num: 
        return back 
    return recSearch(arr, front+1, back-1, num) 
  
# Driver Code  
arr = [12, 34, 54, 2, 3] 
n = len(arr) 
num = 3
index = recSearch(arr, 0, n-1, num) 
if index != -1: 
    print "Element %i is present at index %i" % (num, index) 
else: 
    print "Element %i is not present" % (num) 
