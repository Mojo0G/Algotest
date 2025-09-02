
          Median of Two Sorted Arrays

          - Summary: The code uses vectors (dynamic arrays) to store and manipulate input and merged arrays. It first merges two sorted input vectors into a single vector, then sorts the merged vector. Finally, it determines the median based on whether the total number of elements is odd or even, returning the middle element or the average of the two middle elements, respectively.

          - Time Complexity: O(m+n+k log k), where m and n are the sizes of the input arrays and k = m + n.  Merging the arrays takes O(m+n), sorting the merged array takes O(k log k), and finding the median is O(1).  The dominant factor is sorting, hence the overall complexity.
          - Space Complexity: O(m+n) because a new vector of size m+n is created to store the merged array. The space used is proportional to the sum of the input array sizes.
          