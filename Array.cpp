// Question1:Find all vowels in an String.

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     int count=0;
//     cout<<"Enter String: ";
//     getline(cin,str);
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];
//         if(ch=='A'||ch=='E'||ch=='I'|| ch=='O'||ch=='U'||
//         ch=='a'||ch=='e'||ch=='i'|| ch=='o'||ch=='u'
        
//         )
//         {
//             count++;
//         }
//     }
//     cout<<"Total vowels in String: "<<count<<endl;

// }

//Question 2:Difference between first and last elemnt in Array.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array:"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements to enter in array:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int diff=arr[0]-arr[n-1];
//     cout<<"Diffrence"<<diff<<endl;
    
// }

//Question 3: Insert row and column in given position in Matrix.
// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter number of rows and columns in matrix: "<<endl;
//     cin>>rows>>cols;
//     vector<vector<int>> matrix(rows,vector<int>(cols));
//     cout<<"Enter elements in matrix: "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>matrix[i][j];
//         }
//     }
//    int insertionType,insertionIndex;
//    cin>>insertionType>>insertionIndex;
//   vector<vector<int>> newMatrix;
//     if(insertionType==0){
//         newMatrix.resize(rows+1,vector<int>(cols));
//         for(int i=0;i<insertionIndex;i++){
//             newMatrix[i]=matrix[i];
//         }
//         for(int i=insertionIndex;i<rows;i++){
//             newMatrix[i+1]=matrix[i];
//         }
//     }
//     else if(insertionType==1){
//         newMatrix.resize(rows,vector<int>(cols+1));
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<insertionIndex;j++){
//                 newMatrix[i][j]=matrix[i][j];
//             }
//             for(int j=insertionIndex;j<cols;j++){
//                 newMatrix[i][j+1]=matrix[i][j];
//             }
//         }
//     }
//     for(int i=0;i<newMatrix.size();i++){
//         for(int j=0;j<newMatrix[i].size();j++){
//             cout<<newMatrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//Question 4:Insert /Delete row or column on given position.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter number of rows and columns in matrix: "<<endl;
//     cin>>rows>>cols;
//     vector<vector<int>> matrix(rows,vector<int>(cols));
//     cout<<"Enter elements in matrix: "<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>matrix[i][j];
//         }
//     }
//    int operationType,insertionIndex;
//    cout<<"Enter operation type (0 for insert, 1 for delete) and index: "<<endl;
//    cin>>operationType>>insertionIndex;
//   vector<vector<int>> newMatrix;
//     if(operationType==0){
//         newMatrix.resize(rows+1,vector<int>(cols));
//         for(int i=0;i<insertionIndex;i++){
//             newMatrix[i]=matrix[i];
//         }
//         for(int i=insertionIndex;i<rows;i++){
//             newMatrix[i+1]=matrix[i];
//         }
//     }
//     else if(operationType==1){
//         newMatrix.resize(rows-1,vector<int>(cols));
//         for(int i=0;i<insertionIndex;i++){
//             newMatrix[i]=matrix[i];
//         }
//         for(int i=insertionIndex+1;i<rows;i++){
//             newMatrix[i-1]=matrix[i];
//         }
//     }
//     for(int i=0;i<newMatrix.size();i++){
//         for(int j=0;j<newMatrix[i].size();j++){
//             cout<<newMatrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//Question 5:

//Question 6:count consonants in string.

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     int count=0;
//     cout<<"Enter a string: ";
//     getline(cin, str);
//     for(int i=0; i<str.length(); i++){
//         char ch = str[i];
//         if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
//             if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
//                ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){
//                 count++;
//             }
//         }
//     }
//     cout<<"Number of consonants in the string: "<<count<<endl;
//     return 0;
// }

//Question 7:Find the largest smallest element in array.

//  #include<iostream>
//  #include<climits>
//  using namespace std;
//  int main(){
//     int n;
//     cout<<"Enter Size of array"<<endl;
//     if(!(cin>>n) || n<=0){
//         cout<<"Invalid size"<<endl;
//         return 1;
//     }
//     int *arr = new int[n];
//     cout<<"Enter elements in array:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i] < smallest) smallest = arr[i];
//         if(arr[i] > largest) largest = arr[i];
//     }
//     cout<<"Smallest: "<<smallest<<endl;
//     cout<<"Largest: "<<largest<<endl;
//     delete[] arr;
//     return 0;
//  }



//Question 8:Reverse each row of matrix

// #include<iostream>
// #include<vector>


// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter rows & cols="<<endl;
//     cin>>rows>>cols;
//     vector<vector<int>>matrix(rows,vector<int>(cols));
//     cout<<"Enter elements of matrix="<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//           cin>>matrix[i][j];
//         }
//     }
//     for(int i=0;i<rows;i++){
//         int start=0,end=cols-1;
//         while(start<end){
//             swap(matrix[i][start],matrix[i][end]);
//             start++;
//             end--;
//         }
//     }
//     cout<<"Matrix after reversing each row:"<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



//Question 9:Sum of boundary elements of matrix.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int rows,cols;
//     cout<<"Enter rows & cols="<<endl;
//     cin>>rows>>cols;
//     vector<vector<int>>matrix(rows,vector<int>(cols));
//     cout<<"Enter elements of matrix="<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//           cin>>matrix[i][j];
//         }
//     }
//     int sum=0;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(i==0 || i==rows-1 || j==0 || j==cols-1){
//                 sum+=matrix[i][j];
//             }
//         }
//     }
//     cout<<"Sum of boundary elements: "<<sum<<endl;
// }

//Question 10:Delete the element from array.

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int element;
//     cout<<"Enter element to delete"<<endl;
//     cin>>element;
//     for(int i=0;i<n;i++){
//         if(arr[i]==element){
//             for(int j=i;j<n;j++){
//                 arr[j]=arr[j+1];
//             }
//             n--;
//             i--;
//         }
//     }
//     cout<<"Array after deleting element"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Question 11:Votes for candidates in an election.>n/4.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;int count=0;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr + n);
//     for(int i=1;i<n;){
//         int currentCount=1;
//         while(i<n && arr[i]==arr[i-1]){
//             currentCount++;
//             i++;
//         }
//         if(currentCount>(n/4)){
//             count++;
//         }
//         i++;
//     }
//     cout<<"Number of candidates with more than n/4 votes: "<<count<<endl;


// }


//Question 12: Transpose of matrix
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter rows & cols="<<endl;
//     cin>>rows>>cols;
//     vector<vector<int>>matrix(rows,vector<int>(cols));
//     cout<<"Enter elements of matrix="<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//           cin>>matrix[i][j];
//         }
//     }
//      if(rows == cols) {

//         for(int i = 0; i < rows; i++) {
//             for(int j = i + 1; j < cols; j++) {

//                 int temp = matrix[i][j];
//                 matrix[i][j] = matrix[j][i];
//                 matrix[j][i] = temp;
//             }
//         }
//     }
//     cout<<"Transpose of matrix:"<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
  
// }

//Question 13:Reverse the matrix and negate the even rows in matrix.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int rows,cols;
//     cout<<"Enter rows & cols="<<endl;
//     cin>>rows>>cols;
//     vector<vector<int>>matrix(rows,vector<int>(cols));
//     cout<<"Enter elements of matrix="<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//           cin>>matrix[i][j];
//         }
//     }
//     for(int i=0;i<rows/2;i++){
//         swap(matrix[i],matrix[rows-1-i]);
//     }
//     for(int i=0;i<rows;i++){
//         if(i%2==0){
//             for(int j=0;j<cols;j++){
//                 matrix[i][j]=-matrix[i][j];
//             }
//         }
//     }
//     cout<<"Matrix after reversing and negating even rows:"<<endl;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

//Question 14:Sum of give n Range in Array (using Prefix).
// #include<iostream>


// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter size of array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements in array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//    int  prefix[n];
//     prefix[0]=arr[0];
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]+arr[i];
//     }   
//     int l,r;
//     cin>>l>>r;
//     if(l==0){
//         cout<<"Sum of range: "<<prefix[r]<<endl;
//     }
//     else{
//         cout<<"Sum of range: "<<prefix[r]-prefix[l-1]<<endl;
//     }
   
// }



//Question-15:Leaders in an Array

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void leaders(int arr[],int n){
//     vector<int> res;
//     int max=arr[n-1];
//     res.push_back(max);
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]>=max){
//             max=arr[i];
//             res.push_back(max);
//         }
//     }
//     reverse(res.begin(),res.end());
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter size of array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements in array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     leaders(arr,n);
// }

        

//Question 16:Spiral Traversal of Matrix
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int rows,cols;
//     cin>>rows>>cols;
//     vector<vector<int>> matrix(rows,vector<int>(cols));
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>matrix[i][j];
//         }
//     }
    
//     int top=0, bottom=rows-1;
//     int left=0, right=cols-1;
//     while(top<=bottom && left<=right){
//         for(int i=left;i<=right;i++){
//             cout<<matrix[top][i]<<" ";
//         }
//         top++;
//         for(int i=top;i<=bottom;i++){
//             cout<<matrix[i][right]<<" ";
//         }
//         right--;
//         for(int i=right;i>=left;i--){
//             cout<<matrix[bottom][i]<<" ";
//         }
//         bottom--;
//         for(int i=bottom;i>=top;i--){
//             cout<<matrix[i][left]<<" ";
//         }
//         left++;
//     }

// }

//Question 17:Longest consecutive increasing subarray.
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int longestSubarray(int arr[], int n){

//     int maxLength = 1;
//     int currentLength = 1;

//     for(int i = 1; i < n; i++){

//         if(arr[i] > arr[i - 1]){
//             currentLength++;
//         }
//         else{
//             maxLength = max(maxLength, currentLength);
//             currentLength = 1;
//         }
//     }

//     maxLength = max(maxLength, currentLength);

//     return maxLength;
// }

// int main(){

//     int n;
//     cin >> n;

//     int arr[n];

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     cout << "Longest consecutive increasing subarray: "
//          << longestSubarray(arr, n) << endl;

//     return 0;
// }
//Question 18:Frequency SSort

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     vector<pair<int,int>> freq;

//     for(int i = 0; i < n; ){

//         int count = 1;

//         while(i + count < n && arr[i] == arr[i + count]){
//             count++;
//         }

       
//         freq.push_back({count, arr[i]});

//         i = i + count;
//     }

//     sort(freq.begin(), freq.end());

//     for(int i = 0; i < freq.size(); i++){

//         int count = freq[i].first;
//         int element = freq[i].second;

//         while(count > 0){
//             cout << element << " ";
//             count--;
//         }
//     }

//     return 0;
// }


//Question 19:Matrix Diagonal Difference
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> matrix(n,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>matrix[i][j];
//         }
//     }
//     int sum1=0,sum2=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum1+=matrix[i][j];
//             }
//             if(i+j==n-1){
//                 sum2+=matrix[i][j];
//             }
//         }
//     }
//    if(sum1 > sum2){
//     cout<<"Difference:"<< sum1 - sum2;
// }
// else{
//     cout <<"Difference:"<< sum2 - sum1;
// }
// }

//Question 20:Rotate Matrix by 180.
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     vector<vector<int>> matrix(n, vector<int>(n));

    
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cin >> matrix[i][j];
//         }
//     }

//     for(int i = n - 1; i >= 0; i--){

//         for(int j = n - 1; j >= 0; j--){

//             cout << matrix[i][j] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//Question 21:Sort 0s, 1s and 2s in an Array.
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     vector<int> arr(n);

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     int low = 0;
//     int mid = 0;
//     int high = n - 1;

//     while(mid <= high){

//         if(arr[mid] == 0){

//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }

//         else if(arr[mid] == 1){

//             mid++;
//         }

//         else{

//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }


//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }