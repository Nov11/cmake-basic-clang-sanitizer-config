//
// Created by c6s2 on 2019/12/3.
//

int main(int argc, char **argv) {
    int *array = new int[3];
    delete[] array;

    return array[0];
    //not detecting out of bound write
//    array[0] = 1;
//    return array[0];
}