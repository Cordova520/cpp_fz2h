// class rotatedArray
// {
// private:
//     /* data */
// public:
//     int search(std::vector<int>& array, int key){
//         int start = 0;
//         int end = array.size() - 1;
//         while (start <= end)
//         {
//             int mid = (start+end)/2;
//             if (array[mid] == key)
//             {
//                 return mid;
//             }
//             if (array[start] <= array[mid])
//             {
//                 if (key >= array[start] && key <= array[mid])
//                 {
//                     end = mid - 1;
//                 }else{
//                     start = mid+1;
//                 }
//             }else
//             {
//                 if (key >= array[mid] && key <= array[end])
//                 {
//                     start = mid + 1;
//                 }else {
//                     end = mid -1;
//                 }
//             }  
//         }
//         return -1;
//     }
//     ~rotatedArray();
// };

// rotatedArray::rotatedArray(/* args */)
// {
// }

// rotatedArray::~rotatedArray()
// {
// }
