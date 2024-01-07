# Ex 1 

    arr[]
    for x in A:
        if(x not in arr):
            emtry[x] = 0
        emtry[x] += 1
    
    for x in range(len(A)):
        if(arr[x] > len(A)/2)
            return x
    return null

# Ex 2
    arr[]
    negative_index = 0
    positive_index = len(A)/2

    for i in range(len(A)):
        if A[i] < 0:
            arr[negative_index] = A[i]
            negative_index += 1
        else:
            arr[positive_index] = A[i]
            positive_index += 1

# Ex 3 
     def find_min_diff(A):

        if len(A) == 1:
            return A[0][0]

        mid = len(A) // 2

        left_min_diff = find_min_diff(A[:mid])
        right_min_diff = find_min_diff(A[mid:])

        return min(left_min_diff, right_min_diff)


        
         