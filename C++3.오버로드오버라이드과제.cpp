//
// Created by 배건우 on 2024. 7. 14..
//
#include "Header.h"

class Matrix{
public:
    float v11,v12,v13;
    float v21,v22,v23;
    float v31,v32,v33;

    Matrix(float v11,float v12,float v13,float v21,float v22,float v23,float v31,float v32,float v33){
        this->v11 = v11;
        this->v12 = v12;
        this->v13 = v13;

        this->v21 = v21;
        this->v22 = v22;
        this->v23 = v23;

        this->v31 = v31;
        this->v32 = v32;
        this->v33 = v33;
    }
    void getmetrix(){
        printf("%.2f %.2f %.2f\n", v11,v12,v13);
        printf("%.2f %.2f %.2f\n", v21,v22,v23);
        printf("%.2f %.2f %.2f\n\n", v31,v32,v33);
    }
};

Matrix operator+(Matrix& m1,Matrix& m2){
    return Matrix(
            m1.v11+m2.v11,m1.v12+m2.v12,m1.v13+m2.v13,
            m1.v21+m2.v21,m1.v22+m2.v22,m1.v23+m2.v23,
            m1.v31+m2.v31,m1.v32+m2.v32,m1.v33+m2.v33
    );
}

int main(){
    Matrix m1 = Matrix(1,2,3,4,5,6,7,8,9);
    Matrix m2 = Matrix(10,11,12,13,14,15,16,17,18);

    Matrix m3 = m1 + m2;
    m3.getmetrix();
}