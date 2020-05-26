for t in range(int(input())):
    size,arr = int(input()),list(map(int,input().split()))
    left_sum = 0
    total = sum(arr)
    for index in range(size):
        total = total - arr[index]#total is now right_sum
        right_sum = total
        if left_sum == right_sum:
            print(index +1)
            break
        left_sum += arr[index] 
    else:
        print(-1)