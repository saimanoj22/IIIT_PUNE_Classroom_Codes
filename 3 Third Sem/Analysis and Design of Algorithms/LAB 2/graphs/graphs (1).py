from matplotlib import pyplot as plt



mergeSortIterativeX = [10, 100, 1000, 10000, 100000]
mergeSortIterativeY = [1.001189947128296, 1.001173496246338, 1.0008280277252197, 1.0316321849822998, 1.3442564010620117]
plt.plot(mergeSortIterativeX, mergeSortIterativeY)
plt.title("Merge Sort(Iterative) Graph")
plt.xlabel('Number of Inputs')
plt.ylabel('Time taken')
plt.show()





mergeSortRecursiveX = [10, 100, 1000, 10000, 100000]
mergeSortRecursiveY = [1.0031836032867432, 1.0021986961364746, 1.00168776512146, 1.0482115745544434, 1.394745111465454]
plt.plot(mergeSortRecursiveX, mergeSortRecursiveY)
plt.title("Merge Sort(Recursive) Graph")
plt.xlabel('Number of Inputs')
plt.ylabel('Time taken')
plt.show()





quickSortIterativeX = [10, 100, 1000, 10000, 100000]
quickSortIterativeY = [1.0124166011810303, 1.0135064125061035, 1.000978946685791, 1.0342025756835938, 1.1853516101837158]
plt.plot(quickSortIterativeX, quickSortIterativeY)
plt.title("Quick Sort(Iterative) Graph")
plt.xlabel('Number of Inputs')
plt.ylabel('Time taken')
plt.show()




quickSortRecursiveX = [10, 100, 1000, 10000, 100000]
quickSortRecursiveY = [1.0100398063659668, 1.0009138584136963, 1.0134236812591553, 1.0172724723815918, 1.202369213104248]
plt.plot(quickSortRecursiveX, quickSortRecursiveY)
plt.title("Quick Sort(Recursive) Graph")
plt.xlabel('Number of Inputs')
plt.ylabel('Time taken')
plt.show()






