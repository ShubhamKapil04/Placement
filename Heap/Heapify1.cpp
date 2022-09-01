#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){

    int largest = i;
    cout << i << endl;


    // Left child
    int l = 2*i+1;
    cout <<"left --> " << l << endl;
    // Right child
    int r = 2*i+2;
    cout <<"Right -> " << r << endl;

    //  If left child is largest than root
    if(l < n && arr[largest] < arr[l]){
        largest = l;
    }

    // if right child is largest than largest
    // so far
    if(r < n && arr[largest] < arr[r]){
        largest = r;
    }

    // if largest is not root
    if(largest != i){
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n){

    // build heap from array
    // cout << n << endl;
    // int m = n/2 - 1;
    // cout << m << endl;
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    for(int i = n-1 ; i > 0; i--){
        cout << "I ka Vlue --> " << i << endl;
        // Move current root to end
        swap(arr[0], arr[i]);

        // cal max heapify
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){

    int arr[] = {10, 20, 25, 12, 40, 15, 18};
    

    //176 902 427 678 508 74 85 8 340 937 79 470 404 737 121 556 1 869 
    //841 642 747 301 210 89 750 936 365 863 196 342 94 725 244 874 403 
    //104 948 840 464 288 129 543 758 534 281 880 90 634 101 284 276 200 
    //585 487 290 687 775 7 550 324 349 645 49 945 871 804 401 819 644 866 
    //459 774 409 569 660 42 801 102 676 903 386 305 455 971 144 97 658 919 
    //105 561 243 806 206 644 752 77 448 153 248 445 371 707 219 781 628 231 
    //175 430 333 204 685 720 509 140 43 653 238 54 924 695 615 168 501 173 164 
    //253 602 613 759 850 58 130 909 629 263 889 860 439 319 193 995 4 265 504 
    //497 661 509 735 715 433 782 682 953 283 855 118 889 809 83 648 11 141 130 
    //920 122 746 161 982 185 481 527 532 837 145 36 334 806 897 421 873 330 555 
    //555 636 839 762 106 728 571 189 728 582 682 858 854 804 604 15 138 141 848 665
    // 673 686 162 61 372 968 958 146 193 641 701 748 277 892 862 383 620 433 924 
    //348 15 606 559 221 410 163 237 548 657
    
    int n = sizeof(arr)/sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted Array is " << endl;

    printArray(arr, n);

}