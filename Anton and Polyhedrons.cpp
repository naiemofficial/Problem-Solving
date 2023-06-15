#include <iostream>
using namespace std;

int polyhedronFaces(string polyhedron){
    if(polyhedron == "Tetrahedron") return 4;
    else if(polyhedron == "Cube") return 6;
    else if(polyhedron == "Octahedron") return 8;
    else if(polyhedron == "Dodecahedron") return 12;
    else if(polyhedron == "Icosahedron") return 20;
    else return 0;
}

int main(){
    int n, faces = 0;
    cin >> n;

    string polyhedron;
    for(int i = 0; i < n; i++){
        cin >> polyhedron;
        faces += polyhedronFaces(polyhedron);
    }
    cout << faces << endl;
}