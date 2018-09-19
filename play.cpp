#include <iostream>
#include <draco/io/mesh_io.h>

using namespace std;

int main(int argc, char** argv) {
    static string test_cube = "/home/john/git/github/draco/testdata/cube_custom.obj";
    auto mesh = draco::ReadMeshFromFile(test_cube);

    cout << test_cube << endl;
}
