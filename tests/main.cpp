#include "./main.h"

void test_compression(){

    FILE * pFile = nullptr;
    HUFFMAN_COMPRESSION::compressFile(pFile);    
    return;
}


void test_decompression(){

    FILE * pFile = nullptr;
    HUFFMAN_COMPRESSION::decompressFile(pFile);
    return;

}



int main(){

    test_compression();
    test_decompression();

    return 0;
}
