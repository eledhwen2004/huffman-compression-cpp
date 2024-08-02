#ifndef HUFFMAN_COMPRESSIN_H 
#define HUFFMAN_COMPRESSIN_H 

#include <cstdlib>
#include <cstdio>

namespace HUFFMAN_COMPRESSION {

    void compressFile(FILE * pFile);
    void decompressFile(FILE * pFile);

}

#endif // HUFFMAN_COMPRESSIN_H
