#include<iostream>
#include<vector>
using namespace std;
void setRow(vector<vector<int> > &A, int &i){
    int m=A.size(), n=A[0].size();
    for(int j=0; j<n; j++){
        A[i][j]=0;
    }

}
void setCol(vector<vector<int> > &A, int &j){
    int m=A.size(), n=A[0].size();
    for(int i=0; i<m; i++){
        A[i][j]=0;
    }
}
void setZeroes(vector<vector<int> > &A) {
    int m=A.size(), n=A[0].size();
    vector<vector<int> >v;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            vector<int>vec;
            vec.push_back(0);
            v.push_back(vec);
        }
    }


    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            v[i][j]=A[i][j];
        }
    }

    cout<<"v initially:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]==0){
                setRow(A,i); setCol(A,j);
            }
        }
    }
    cout<<"v:\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    vector<vector<int> > A;

    static const int arr[] = {1,0,1};
    vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    A.push_back(vec);
    static const int arr2[] = {1,1,1};
    vector<int> vec2 (arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]) );
    A.push_back(vec2);
    A.push_back(vec2);
    cout<<"A initially:\n";
    int m=A.size(), n=A[0].size();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }

    setZeroes(A);


    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
}
