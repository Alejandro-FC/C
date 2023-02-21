/* Ej 8: realice un programa que calcule el producto de dos matrices cuadradas 3x3 */


#include<iostream>

using namespace std;

int main(){

    int matriz1[3][3] = {{1,2,1},
                        {2,1,1},
                        {2,1,2}};
    int matriz2[3][3] = {{3,2,1},{2,3,1},{1,1,3}};
    int matriz3[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matriz3[i][j]=0;
            for(int k=0;k<3;k++){
                matriz3[i][j] = matriz3[i][j] + matriz1[i][k]*matriz2[k][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<matriz3[i][j]<<" ";
        }

    cout<<"\n";
    }
    


    return 0;
}