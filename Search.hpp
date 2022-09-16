#pragma once
#include <iostream>
namespace xxsurajbxx::algorithms {    template<typename T>
    T binarySearch(const T* arr, T SV, int lengthofArray) {
        static int Low=0;
        static int High=lengthofArray;
        int Mid = (Low+High)/2;
        if(Low+1==High) {
            return -1;
        }
        if(arr[Mid]==SV) {
            return Mid;
        }
        else {
            if(SV<arr[Mid]) {
                High=Mid;
                return binarySearch(arr, SV, lengthofArray/2);
            }
            if(SV>arr[Mid]) {
                Low=Mid;
                return binarySearch(arr, SV, lengthofArray/2);
            }
        }
    }
    template<typename T>
    T linearSearch(const T* arr[], T SV, int lengthofArray) {
        for(int i=0; i<lengthofArray; i++) {
            if(arr[i]==SV) {
                return i;
            }
        }
        return -1;
    }}