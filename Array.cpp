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


//Question-11:Leaders in an Array

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

        

//Question 12:Spiral Traversal of Matrix
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

