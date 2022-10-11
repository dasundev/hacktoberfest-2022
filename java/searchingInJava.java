class searchingInJava {
    public static void linearSearch(int arr[], int key)
    {
        int N = arr.length;
        int result=-1;
        for (int i = 0; i < N; i++) {
            if (arr[i] == key)
                result=i;
        }
        if(result==-1){
            System.out.println("Element is not found!"); 
        }
        else{
            System.out.println("Element is found at index: " + result);  
        }
    }


    public static void binarySearch(int arr[],int key){  
        int first=0;
        int last=arr.length;
        int mid = (first + last)/2;  
        while( first <= last ){  
           if ( arr[mid] < key ){  
             first = mid + 1;     
           }else if ( arr[mid] == key ){  
             System.out.println("Element is found at index: " + mid);  
             break;  
           }else{  
              last = mid - 1;  
           }  
           mid = (first + last)/2;  
        }  
        if ( first > last ){  
           System.out.println("Element is not found!");  
        }  
      }  
    
 
    public static void main(String args[])
    {
        int arr[] = { 2, 3, 4, 10, 40 };
        int key = 20;
        linearSearch(arr,key);
        key=10;
        binarySearch(arr,key);
 
    }
}