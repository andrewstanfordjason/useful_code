unsigned deref(const unsigned r, const unsigned len, const unsigned idx){
     return len*r + idx;
}

unsigned deref1d(const unsigned dim0, const unsigned idx0){
    return deref(0, dim0, idx0);
}

unsigned deref2d(const unsigned dim0, const unsigned dim1, 
            const unsigned idx0, const unsigned idx1){
    return deref(deref(0, dim0, idx0), dim1, idx1);
}

unsigned deref3d(const unsigned dim0, const unsigned dim1, 
            const unsigned dim2, const unsigned idx0, 
            const unsigned idx1, const unsigned idx2){
    return deref(deref(deref(0, dim0, idx0), dim1, idx1), dim2, idx2);
}

unsigned deref4d(const unsigned dim0, const unsigned dim1, 
            const unsigned dim2, const unsigned dim3, 
            const unsigned idx0, const unsigned idx1, 
            const unsigned idx2, const unsigned idx3){
    return deref(deref(deref(deref(0, dim0, idx0), dim1, idx1), dim2, idx2), dim3, idx3);
}

unsigned derefNd(const unsigned N, const unsigned * dim, const unsigned * idx){
    int r = 0;
    for(int i=0;i<N;i++) deref(r, dim[i], idx[i]);
    return r;
}
