for t in range(int(input())):
    size,arr = int(input()),list(map(int,input().split()))
    if size == 1:
        print(1)
    else:
        for index in range(1,size):
            if sum(arr[0:index]) == sum(arr[index+1::]):
                print(index+1)
                break
        else:
            print(-1)