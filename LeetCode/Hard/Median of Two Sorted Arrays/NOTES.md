
          Median of Two Sorted Arrays

          - Summary: The code uses vectors (dynamic arrays) to store and manipulate the input arrays and a merged array.  It first merges the two input sorted arrays into a single vector, then sorts the merged vector. Finally, it determines the median based on whether the total number of elements is odd or even, returning the middle element or the average of the two middle elements, respectively.

          - Time Complexity: O(m+n+log(m+n)). The merging of the two arrays takes O(m+n) time. Sorting the merged array using `std::sort` takes O( (m+n)log(m+n) ) time in the average and worst cases.  The remaining operations take constant time.
          - Space Complexity: O(m+n). The space complexity is dominated by the `merged` vector which stores all elements from both input arrays. The size of this vector is linear with respect to the sum of sizes of the input arrays (m+n).
          