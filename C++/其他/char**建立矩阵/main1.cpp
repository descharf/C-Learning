#include <iostream>
using namespace std;

#define row 3
#define col 3

char** CreateCharMatrix(){
    char ** matrix;
    matrix=new char*[row];
    for (int i=0;i<row;i++){
        matrix[i]=new char[col];
    }
    return (matrix);
}

void freeMemory(char** matrix){
    for (int i=0;i<row;i++){
        delete [] matrix[i];
    }
    delete [] matrix;
}

int main(){
    char ** matrix;
    matrix=CreateCharMatrix();
    for (int i=0;i<row;i++)
        for (int j=0;j<col;j++)
            matrix[i][j]=char('a'+j);
    for (int i=0;i<row;i++)
        for (int j=0;j<col;j++){
            cout<<matrix[i][j];
            if (j+1==3) cout<<'\n';
        }
    freeMemory(matrix);
    return (0);
}
