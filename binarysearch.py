def binary(arr, low, high, x):

	if high >= low:

		mid = (high + low) // 2

		
		if arr[mid] == x:
			return mid

		elif arr[mid] > x:
			return binary(arr, low, mid - 1, x)

		else:
			return binary(arr, mid + 1, high, x)

	else:
		return -1
		
arr = [ 2, 3, 4, 8, 45 ]
x = 45

result = binary(arr, 0, len(arr)-1, x)

if result != -1:
	print("Element is present at index", str(result))
else:
	print("Element is not present in array")
