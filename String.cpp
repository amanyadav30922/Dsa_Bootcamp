//Question 1: Palindrome of String
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string="<<endl;
//     getline(cin,str);
//     string reversedStr="";
//     for(int i=str.length()-1;i>=0;i--){
//         reversedStr+=str[i];
//     }
//     if(reversedStr==str){
//         cout<<"String is palindrome"<<endl;
//     }
//     else{
//         cout<<"String is not palindrome"<<endl;
//     }
//     return 0;

// }
//better approach: Two pointer approach
//  #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string="<<endl;
//     getline(cin,str);
//     int left=0,right=str.length()-1;
//     bool isPalindrome=true;
//     while(left<right){
//         if(str[left]!=str[right]){
//             isPalindrome=false;
//             break;
//         }
//         left++;
//         right--;
//     }
//     if(isPalindrome){
//         cout<<"String is palindrome"<<endl;
//     }
//     else{
//         cout<<"String is not palindrome"<<endl;
//     }
//     return 0;
// }


//Question 2:Remove vowels from string {Ex=Example= xmpl}
//  #include<iostream>
//  #include<string>
//  using namespace std;
//  int main(){
//     string str;
//     cout<<"Enter a string="<<endl;
//     getline(cin,str);
//     string vowels="aeiouAEIOU";
//     string result="";
//     for(int i=0;i<str.length();i++){
//         if(vowels.find(str[i])==string::npos){
//             result+=str[i];
//         }
//     }
//     cout<<"String without vowels: "<<result<<endl;
//     return 0;
//  }


//Question 3:Remove duplicates from string {Ex= "Hello World"= "Helo Wrd"}
// #include<iostream>
// #include<string>
// using namespace std;
//  int removeduplicates(string &str){
//     string result="";
//     for(int i=0;i<str.length();i++){
//         if(result.find(str[i])==string::npos){
//             result+=str[i];
//         }
//     }
//     str=result;
//     return str.length();

//  }
//     int main(){
//         string str;
//         cout<<"Enter a string="<<endl;
//         getline(cin,str);
       
//         cout<<"String after removing duplicates: "<<str<<endl;
       
//         return 0;
//     }

//Question 4:Find first non-repeating character in string.
// #include<iostream>
// using namespace std;

// int main() {

//     string s;
//     cin >> s;

//     for(int i=0; i<s.length(); i++) {

//         int count = 0;

//         for(int j=0; j<s.length(); j++) {

//             if(s[i] == s[j])
//                 count++;
//         }

//         if(count == 1) {
//             cout << s[i];
//             return 0;
//         }
//     }

//     cout << "No Non-Repeating Character";
    
// }


//Question 5: check if two strings are anagrams of each other. {Ex= "listen" and "silent" are anagrams}.
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str1,str2;
//     cout<<"Enter first string="<<endl;
//     getline(cin,str1);
//     cout<<"Enter second string="<<endl;
//     getline(cin,str2);
//     if(str1.length()!=str2.length()){
//         cout<<"Strings are not anagrams"<<endl;
//         return 0;
//     }
//     sort(str1.begin(),str1.end());
//     sort(str2.begin(),str2.end());
//     if(str1==str2){
//         cout<<"Strings are anagrams"<<endl;
//     }
//     else{
//         cout<<"Strings are not anagrams"<<endl;

//     }
// }

//Question 6:Longest Common Prefix.
// #include <iostream>
// #include <vector>
// using namespace std;

// string longestCommonPrefix(vector<string>& strs) {
//     if (strs.empty()) return "";

//     string prefix = strs[0];

//     for (int i = 1; i < strs.size(); i++) {
//         while (strs[i].find(prefix) != 0) {
//             prefix.pop_back();

//             if (prefix.empty())
//                 return "";
//         }
//     }

//     return prefix;
// }

// int main() {
//     vector<string> strs = {"flower", "flow", "flight"};

//     cout << longestCommonPrefix(strs);

//     return 0;
// }

//Question 7:Longest Common Subsequence.
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// string longestCommonSubsequence(string s1, string s2) {

//     int n = s1.length();
//     int m = s2.length();

//     vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= m; j++) {

//             if(s1[i - 1] == s2[j - 1])
//                 dp[i][j] = 1 + dp[i - 1][j - 1];

//             else
//                 dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//         }
//     }

//     string ans = "";

//     int i = n;
//     int j = m;

//     while(i > 0 && j > 0) {

//         if(s1[i - 1] == s2[j - 1]) {
//             ans += s1[i - 1];
//             i--;
//             j--;
//         }
//         else if(dp[i - 1][j] > dp[i][j - 1]) {
//             i--;
//         }
//         else {
//             j--;
//         }
//     }

//     reverse(ans.begin(), ans.end());

//     return ans;
// }

// int main() {

//     string s1 = "AGGTAB";
//     string s2 = "GXTXAYB";

//     cout << longestCommonSubsequence(s1, s2);
// }

//Question 8:String Compression.
// #include<iostream>
// using namespace std;

// int main() {
//     string str;
//     cin >> str;

//     string result = "";
//     int count = 1;

//     for(int i = 0; i < str.length(); i++) {
//         if(i < str.length() - 1 && str[i] == str[i + 1]) {
//             count++;
//         }
//         else {
//             result += str[i];
//             if(count > 1) {
//                 result += to_string(count);
//             }
//             count = 1;
//         }
//     }

//     cout << result;
// }


//Question 9: Longest Substring without repeating characters.
// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main() {

//     string s = "abcabcbb";

//     unordered_map<char,int> mp;

//     int left = 0;
//     int maxLen = 0;
//     int start = 0;

//     for(int right = 0; right < s.length(); right++) {

//         if(mp.find(s[right]) != mp.end()) {
//             left = max(left, mp[s[right]] + 1);
//         }

//         mp[s[right]] = right;

//         if(right - left + 1 > maxLen) {
//             maxLen = right - left + 1;
//             start = left;
//         }
//     }

//     cout << "Length = " << maxLen << endl;
//     cout << "Substring = " << s.substr(start, maxLen);
// }

//Question 10: Minimum Window Substring.
// #include<iostream>
// #include<unordered_map>
// #include<climits>
// using namespace std;

// int main() {

//     string s = "ADOBECODEBANC";
//     string t = "ABC";

//     unordered_map<char,int> need;
//     unordered_map<char,int> window;

//     for(char ch : t)
//         need[ch]++;

//     int have = 0;
//     int required = need.size();

//     int left = 0;

//     int minLen = INT_MAX;
//     int start = 0;

//     for(int right=0; right<s.length(); right++) {

//         char ch = s[right];

//         window[ch]++;

//         if(need.count(ch) &&
//            window[ch] == need[ch]) {

//             have++;
//         }

//         while(have == required) {

//             if(right-left+1 < minLen) {

//                 minLen = right-left+1;
//                 start = left;
//             }

//             window[s[left]]--;

//             if(need.count(s[left]) &&
//                window[s[left]] < need[s[left]]) {

//                 have--;
//             }

//             left++;
//         }
//     }

//     if(minLen == INT_MAX)
//         cout << "";

//     else
//         cout << s.substr(start,minLen);
// }


//Question 11:Valid Parentheses.
// #include<iostream>
// #include<stack>
// using namespace std;

// bool isValid(string s) {

//     stack<char> st;

//     for(char ch : s) {

//         if(ch=='(' || ch=='{' || ch=='[') {
//             st.push(ch);
//         }

//         else {

//             if(st.empty())
//                 return false;

//             if(ch==')' && st.top()!='(')
//                 return false;

//             if(ch=='}' && st.top()!='{')
//                 return false;

//             if(ch==']' && st.top()!='[')
//                 return false;

//             st.pop();
//         }
//     }

//     return st.empty();
// }

// int main() {

//     string s;
//     cin >> s;

//     if(isValid(s))
//         cout << "Valid";

//     else
//         cout << "Not Valid";
// }

//Question 12: Longest Palindromic Substring.

// #include<iostream>
// using namespace std;

// bool isPalindrome(string str) {

//     int left = 0;
//     int right = str.length()-1;

//     while(left < right) {

//         if(str[left] != str[right])
//             return false;

//         left++;
//         right--;
//     }

//     return true;
// }

// int main() {

//     string s = "babad";

//     string ans = "";

//     for(int i=0;i<s.length();i++) {

//         for(int j=i;j<s.length();j++) {

//             string sub = s.substr(i,j-i+1);

//             if(isPalindrome(sub) &&
//                sub.length() > ans.length()) {

//                 ans = sub;
//             }
//         }
//     }

//     cout << ans;
// }

//Question 13: Group Anagrams.

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isAnagram(string s1, string s2) {

//     if(s1.length() != s2.length())
//         return false;

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     return s1 == s2;
// }

// int main() {

//     vector<string> strs =
//     {"eat","tea","tan","ate","nat","bat"};

//     vector<bool> visited(strs.size(), false);

//     for(int i=0; i<strs.size(); i++) {

//         if(visited[i])
//             continue;

//         cout << "[ ";

//         cout << strs[i] << " ";
//         visited[i] = true;

//         for(int j=i+1; j<strs.size(); j++) {

//             if(!visited[j] &&
//                isAnagram(strs[i], strs[j])) {

//                 cout << strs[j] << " ";
//                 visited[j] = true;
//             }
//         }

//         cout << "]" << endl;
//     }
// }


//Question 14:First Non repeating Characters in a String.

//Better approach using frequency array.

// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string="<<endl;
//     getline(cin,str);
//     unordered_map<char,int> freq;
//     for(char ch : str){
//         freq[ch]++;
//     }
//     for(int i=0;i<str.length();i++){
//         if(freq[str[i]]==1){
//             cout<<"First non repeating character is: "<<str[i]<<endl;
//             break;
//         }
//     }
// }

//Question 15: Rotate left or right by k times. 
//Better approach is using reversal algorithm.

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cctype>
// using namespace std;

// void leftrotate(string &str, int k, int len) {
//     int n = str.length();
//     k = k % n;

//     reverse(str.begin(), str.begin() + k);
//     reverse(str.begin() + k, str.end());
//     reverse(str.begin(), str.end());

//     // Convert first len characters to uppercase
//     for (int i = 0; i < n && i < len; i++) {
//         str[i] = toupper(str[i]);
//     }
// }

// void rightrotate(string &str, int k, int len) {
//     int n = str.length();
//     k = k % n;

//     reverse(str.begin(), str.end());
//     reverse(str.begin(), str.begin() + k);
//     reverse(str.begin() + k, str.end());

//     // Convert first len characters to lowercase
//     for (int i = 0; i < n && i < len; i++) {
//         str[i] = tolower(str[i]);
//     }
// }

// int main() {
//     string str;
//     int k, len;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     cout << "Enter the number of rotations: ";
//     cin >> k;

//     cout << "Enter number of characters to change case: ";
//     cin >> len;

//     string str1 = str;

//     leftrotate(str, k, len);
//     cout << "String after left rotation and uppercase: " << str << endl;

//     rightrotate(str1, k, len);
//     cout << "String after right rotation and lowercase: " << str1 << endl;

//     return 0;
// }




//Question 16: String lexical order print.
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string="<<endl;
//     getline(cin,str);
//     sort(str.begin(),str.end());
//     do{
//         cout<<str<<endl;}
//     while(next_permutation(str.begin(),str.end()));
//     cout<<endl;
//     return 0;
// }


//Decode String problem example: "3[a]2[bc]"= "aaabcbc"

// #include<iostream>
// #include<string>
// #include<stack>
// using namespace std;

// string decodeString(string s){
//     stack<int> numStack;
//     stack<string> strStack;
//     string currStr="";
//     int currNum=0;
//     for(char ch : s){
//         if(isdigit(ch)){
//             currNum=currNum*10+(ch-'0');
//         }
//         else if(ch=='['){
//             numStack.push(currNum);
//             strStack.push(currStr);
//             currNum=0;
//             currStr="";
//         }
//         else if(ch==']'){
//             int repeat=numStack.top();
//             numStack.pop();
//             string prevStr=strStack.top();
//             strStack.pop();
//             string temp="";
//             for(int i=0;i<repeat;i++){
//                 temp+=currStr;
//             }
//             currStr=prevStr+temp;
//         }
//         else{
//             currStr+=ch;
//         }
// }
// return currStr;
// }
// int main(){

//     string s;
//     cin >> s;
//     cout << decodeString(s);
//     return 0;

// }


//All Questions completed.