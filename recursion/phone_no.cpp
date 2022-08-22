#include<bits/stdc++.h>
    using namespace std;
        template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

    void  solve(string digits,int index ,string output ,string mapping[],vector<string>& ans){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string value = mapping[number];
        
        for(int i=0;i<value.size();i++){
            output.push_back(value[i]);
            solve(digits,index+1,output,mapping,ans);
            output.pop_back();
        }

    }
    vector<string> phoneno(string digits){
            vector<string> ans;
            string output =" ";
            int index=0;
            string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            solve(digits,index,output,mapping,ans);
            return ans;
    }
    int main(){
    string digits[]={"2","3"};
    cout<<phoneno(digits[2]);
return 0;
}