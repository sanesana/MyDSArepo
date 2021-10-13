static int cmp_value(const void *p1, const void *p2)
{
    int a = *((int*) p1);
    int b = *((int*) p2);
    return a > b;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int totalSize = nums1Size + nums2Size;
    int totalArray[totalSize]; // merge both int arrays into one
    
	memcpy(&totalArray[0], nums1, nums1Size * sizeof(int)); // copy the first array at the start
    memcpy(&totalArray[nums1Size], nums2, nums2Size * sizeof(int)); // copy the second array directly behind
    qsort(totalArray, totalSize, sizeof(int), cmp_value); // sort the newly created array by size
    
    if(totalSize % 2 == 0)
		// Return an average of the 2 middle values
        return (totalArray[totalSize / 2] + totalArray[(totalSize / 2) - 1]) / 2.0; 
    else
		// Return the middle value
        return (totalArray[totalSize / 2]); 
}
