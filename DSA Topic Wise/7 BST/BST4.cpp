// ............. Construct a Binary Search Tree from sorted Array .............

#include<bits/stdc++.h>
using namespace std;

#include "BSTClass.h"

// construct BST..................
BST<int>* constructBST(int arr[], int l,int r){
    if(l > r)
        return NULL;
    
    int mid = l+(r-l)/2;
    BST<int>* root  = new BST<int>(arr[mid]);

    BST<int>* left  = constructBST(arr,l,mid-1);
    BST<int>* right  = constructBST(arr,mid+1,r);

    root->left = left;
    root->right = right;
    return root;

}

//............ check if BST................

bool isBST(BST<int>* root, int min = INT_MIN, int max = INT_MAX){
    if(root == NULL)
      return true;
    
    if(root->data < min || root->data > max)
         return false;

    bool leftcheck = isBST(root->left, min, root->data-1);
    bool rightcheck = isBST(root->right , root->data, max);

    return (leftcheck && rightcheck);        
}


//print BST
void print(BST<int>* root){
    if(root == NULL)
      return;

    queue<BST<int>*> Q;
    Q.push(root);  

    while(!Q.empty()){
        BST<int>* front = Q.front();
        Q.pop();

        cout << front->data << " : ";

        if(front->left != NULL){
            cout << "L" << front->left->data << " ";
            Q.push(front->left);
        }
      
        if(front->right != NULL){
            cout << "R" << front->right->data ;
            Q.push(front->right);
        }  
        cout << endl;  

    }
}


/*
i/p:
4
7
1 2 3 4 5 6 7
82
9 29 34 37 53 56 71 75 111 188 196 197 215 217 218 224 230 239 257 272 314 317 324 325 357 360 362 365 372 377 378 383 394 398 413 414 435 438 445 456 457 461 475 479 484 488 494 517 521 522 528 531 544 557 571 601 620 653 656 662 672 673 679 718 758 772 818 867 880 889 900 904 917 918 920 942 944 955 988 989 993 996 
41
3 7 12 20 68 84 110 167 186 219 237 263 267 268 276 283 332 337 379 405 433 472 495 537 589 594 612 628 652 667 684 700 754 784 788 794 815 827 856 903 993 
56
11 21 32 36 55 63 76 79 91 116 124 189 216 246 256 266 286 308 312 319 329 331 333 352 354 372 385 450 451 504 519 537 547 550 565 578 582 616 618 626 638 647 684 687 726 744 766 809 820 823 856 875 906 924 925 994 

o/p:
4 : L2 R6
2 : L1 R3
6 : L5 R7
1 : 
3 : 
5 : 
7 : 

TRUE
457 : L272 R673
272 : L188 R377
673 : L528 R904
188 : L53 R218
377 : L357 R413
528 : L488 R601
904 : L818 R944
53 : L29 R71
218 : L197 R230
357 : L317 R362
413 : L383 R438
488 : L475 R517
601 : L544 R656
818 : L718 R880
944 : L918 R989
29 : L9 R34
71 : L56 R75
197 : L196 R215
230 : L224 R239
317 : L314 R324
362 : L360 R365
383 : L378 R394
438 : L414 R445
475 : L461 R479
517 : L494 R521
544 : L531 R557
656 : L620 R662
718 : L679 R758
880 : L867 R889
918 : L917 R920
989 : L955 R993
9 : 
34 : R37
56 : 
75 : R111
196 : 
215 : R217
224 : 
239 : R257
314 : 
324 : R325
360 : 
365 : R372
378 : 
394 : R398
414 : R435
445 : R456
461 : 
479 : R484
494 : 
521 : R522
531 : 
557 : R571
620 : R653
662 : R672
679 : 
758 : R772
867 : 
889 : R900
917 : 
920 : R942
955 : R988
993 : R996
37 : 
111 : 
217 : 
257 : 
325 : 
372 : 
398 : 
435 : 
456 : 
484 : 
522 : 
571 : 
653 : 
672 : 
772 : 
900 : 
942 : 
988 : 
996 : 

TRUE
433 : L219 R684
219 : L68 R276
684 : L594 R794
68 : L7 R110
276 : L263 R337
594 : L495 R628
794 : L754 R856
7 : L3 R12
110 : L84 R167
263 : L237 R267
337 : L283 R379
495 : L472 R537
628 : L612 R652
754 : L700 R784
856 : L815 R903
3 : 
12 : R20
84 : 
167 : R186
237 : 
267 : R268
283 : R332
379 : R405
472 : 
537 : R589
612 : 
652 : R667
700 : 
784 : R788
815 : R827
903 : R993
20 : 
186 : 
268 : 
332 : 
405 : 
589 : 
667 : 
788 : 
827 : 
993 : 

TRUE
450 : L246 R647
246 : L76 R329
647 : L565 R820
76 : L32 R116
329 : L286 R352
565 : L519 R616
820 : L726 R906
32 : L11 R55
116 : L79 R189
286 : L256 R312
352 : L331 R372
519 : L451 R547
616 : L578 R626
726 : L684 R766
906 : L856 R925
11 : R21
55 : L36 R63
79 : R91
189 : L124 R216
256 : R266
312 : L308 R319
331 : R333
372 : L354 R385
451 : R504
547 : L537 R550
578 : R582
626 : L618 R638
684 : R687
766 : L744 R809
856 : L823 R875
925 : L924 R994
21 : 
36 : 
63 : 
91 : 
124 : 
216 : 
266 : 
308 : 
319 : 
333 : 
354 : 
385 : 
504 : 
537 : 
550 : 
582 : 
618 : 
638 : 
687 : 
744 : 
809 : 
823 : 
875 : 
924 : 
994 : 

TRUE


*/


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

   int test; cin >> test;
   while(test--){
      int n; 
      cin >> n ;
      int arr[n];
      for(int i=0; i<n; i++)
         cin >> arr[i];

      BST<int>* root = constructBST(arr,0,n-1);  
      print(root);
      cout << endl;

      if(isBST(root))
           cout << "TRUE" << endl ;
       else     
           cout << "FALSE" << endl ;

   }
  return 0; 

}