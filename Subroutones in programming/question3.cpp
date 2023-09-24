/*
Design a subroutine program to calculate the area and perimeter of different geometric
shapes (circle, rectangle, triangle, etc.).
*/
#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;

void RA2211003010002_Area_and_Perimeter_circle(float RA2211003010002_radius) {
    float RA2211003010002_area, RA2211003010002_perimeter;
    RA2211003010002_area = pi * pow(RA2211003010002_radius, 2);
    RA2211003010002_perimeter = 2 * pi * RA2211003010002_radius;
    cout << "Area of the Circle: " << RA2211003010002_area << endl;
    cout << "Perimeter of the Circle: " << RA2211003010002_perimeter << endl;
}

void RA2211003010002_Area_and_Perimeter(float RA2211003010002_length, float RA2211003010002_width) {
    float RA2211003010002_area, RA2211003010002_perimeter;
    RA2211003010002_area = RA2211003010002_length * RA2211003010002_width;
    RA2211003010002_perimeter = 2 * (RA2211003010002_length + RA2211003010002_width);
    cout << "Area of the rectangle: " << RA2211003010002_area << endl;
    cout << "Perimeter of the rectangle: " << RA2211003010002_perimeter << endl;
}

void RA2211003010002_Area_and_Perimeter(float RA2211003010002_square_side) {
    float RA2211003010002_area, RA2211003010002_perimeter;
    RA2211003010002_area = pow(RA2211003010002_square_side, 2);
    RA2211003010002_perimeter = 4 * RA2211003010002_square_side;
    cout << "Area of the square: " << RA2211003010002_area << endl;
    cout << "Perimeter of the square: " << RA2211003010002_perimeter << endl;
}

void RA2211003010002_Area_and_Perimeter(float RA2211003010002_triangle_side_1, float RA2211003010002_triangle_side_2, float RA2211003010002_triangle_side_3) {
    if (RA2211003010002_triangle_side_1 + RA2211003010002_triangle_side_2 <= RA2211003010002_triangle_side_3 || RA2211003010002_triangle_side_2 + RA2211003010002_triangle_side_3 <= RA2211003010002_triangle_side_1 || RA2211003010002_triangle_side_1 + RA2211003010002_triangle_side_3 <= RA2211003010002_triangle_side_2) {
        cout << "Invalid sides. Triangle cannot be formed." << endl;
    } else {
        float RA2211003010002_area, RA2211003010002_perimeter, RA2211003010002_s;
        RA2211003010002_s = (RA2211003010002_triangle_side_1 + RA2211003010002_triangle_side_2 + RA2211003010002_triangle_side_3) / 2.0;
        RA2211003010002_area = sqrt(RA2211003010002_s * (RA2211003010002_s - RA2211003010002_triangle_side_1) * (RA2211003010002_s - RA2211003010002_triangle_side_2) * (RA2211003010002_s - RA2211003010002_triangle_side_3));
        RA2211003010002_perimeter = RA2211003010002_triangle_side_1 + RA2211003010002_triangle_side_2 + RA2211003010002_triangle_side_3;
        cout << "Area of the triangle: " << RA2211003010002_area << endl;
        cout << "Perimeter of the triangle: " << RA2211003010002_perimeter << endl;
    }
}


int main() {
    int RA2211003010002_choice;
    cout << "=======Menu to calculate the area and perimeter of different geometric shapes=======" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "4. Triangle\n" << endl;
    cout << "Enter choice to calculate the area and perimeter of different geometric shapes: ";
    cin >> RA2211003010002_choice;

    switch (RA2211003010002_choice) {
        case 1: {
            float RA2211003010002_radius;
            cout << "Enter radius of the circle to calculate the area and perimeter: ";
            cin >> RA2211003010002_radius;
            RA2211003010002_Area_and_Perimeter_circle(RA2211003010002_radius);
            break;
        }
        case 2: {
            float RA2211003010002_length, RA2211003010002_width;
            cout << "Enter Length to calculate the area and perimeter: ";
            cin >> RA2211003010002_length;
            cout << "Enter width to calculate the area and perimeter: ";
            cin >> RA2211003010002_width;
            RA2211003010002_Area_and_Perimeter(RA2211003010002_length, RA2211003010002_width);
            break;
        }
        case 3: {
            float RA2211003010002_square_side;
            cout << "Enter side to calculate the area and perimeter: ";
            cin >> RA2211003010002_square_side;
            RA2211003010002_Area_and_Perimeter(RA2211003010002_square_side);
            break;
        }
        case 4: {
            float RA2211003010002_triangle_side_1, RA2211003010002_triangle_side_2, RA2211003010002_triangle_side_3;
            cout << "Enter Triangle Side 1: ";
            cin >> RA2211003010002_triangle_side_1;
            cout << "Enter Triangle Side 2: ";
            cin >> RA2211003010002_triangle_side_2;
            cout << "Enter Triangle Side 3: ";
            cin >> RA2211003010002_triangle_side_3;
            RA2211003010002_Area_and_Perimeter(RA2211003010002_triangle_side_1, RA2211003010002_triangle_side_2, RA2211003010002_triangle_side_3);
            break;
        }
        default:
            cout << "Invalid Choice...Choose another one" << endl;
    }
    return 0;
}