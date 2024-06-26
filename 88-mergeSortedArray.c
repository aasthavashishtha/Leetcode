void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int ans[m+n];
    int index=0;
    int i=0;
    int j=0;
    while ( i <m && j < n){
        if( nums1 [i] < nums2[j] )
            ans[index++] = nums1[i++] ;
        else 
            ans[index++] = nums2[j++] ;
    }

    while( i<m )
        ans[index++] = nums1[i++] ;
    
    while ( j<n ){
        ans[index++] = nums2[j++] ;
    }

    for( i=0 ; i < (m+n) ; i++ ){
        nums1[i] = ans[i];
    }
}