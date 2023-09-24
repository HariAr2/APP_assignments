/*
Design a program that dynamically allocates memory for an image processing application,
allowing users to resize and manipulate images.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <C:\opencv\build\include\opencv2\opencv.hpp>

using namespace std;

struct RA2211003010002_Image {
    int RA2211003010002_width;
    int RA2211003010002_height;
    vector<vector<int>> RA2211003010002_pixels;
};

RA2211003010002_Image* RA2211003010002_createImage(int RA2211003010002_width, int RA2211003010002_height) {
    RA2211003010002_Image* RA2211003010002_newImage = new RA2211003010002_Image;
    RA2211003010002_newImage->RA2211003010002_width = RA2211003010002_width;
    RA2211003010002_newImage->RA2211003010002_height = RA2211003010002_height;
    RA2211003010002_newImage->RA2211003010002_pixels.resize(RA2211003010002_height, vector<int>(RA2211003010002_width, 0));
    return RA2211003010002_newImage;
}

RA2211003010002_Image* RA2211003010002_resizeImage(const RA2211003010002_Image* RA2211003010002_originalImage, int RA2211003010002_newWidth, int RA2211003010002_newHeight) {
    RA2211003010002_Image* RA2211003010002_resizedImage = RA2211003010002_createImage(RA2211003010002_newWidth, RA2211003010002_newHeight);

    for (int RA2211003010002_y = 0; RA2211003010002_y < RA2211003010002_newHeight; RA2211003010002_y++) {
        for (int RA2211003010002_x = 0; RA2211003010002_x < RA2211003010002_newWidth; RA2211003010002_x++) {
            int RA2211003010002_origX = RA2211003010002_x * RA2211003010002_originalImage->RA2211003010002_width / RA2211003010002_newWidth;
            int RA2211003010002_origY = RA2211003010002_y * RA2211003010002_originalImage->RA2211003010002_height / RA2211003010002_newHeight;
            RA2211003010002_resizedImage->RA2211003010002_pixels[RA2211003010002_y][RA2211003010002_x] = RA2211003010002_originalImage->RA2211003010002_pixels[RA2211003010002_origY][RA2211003010002_origX];
        }
    }

    return RA2211003010002_resizedImage;
}

void RA2211003010002_manipulateImage(RA2211003010002_Image* RA2211003010002_image) {
    for (int RA2211003010002_y = 0; RA2211003010002_y < RA2211003010002_image->RA2211003010002_height; RA2211003010002_y++) {
        for (int RA2211003010002_x = 0; RA2211003010002_x < RA2211003010002_image->RA2211003010002_width; RA2211003010002_x++) {
            RA2211003010002_image->RA2211003010002_pixels[RA2211003010002_y][RA2211003010002_x] = 255 - RA2211003010002_image->RA2211003010002_pixels[RA2211003010002_y][RA2211003010002_x];
        }
    }
}

void RA2211003010002_deleteImage(RA2211003010002_Image* RA2211003010002_image) {
    delete RA2211003010002_image;
}

cv::Mat RA2211003010002_loadImage(const string& RA2211003010002_filename) {
    cv::Mat RA2211003010002_image = cv::imread(RA2211003010002_filename, cv::IMREAD_GRAYSCALE);

    if (RA2211003010002_image.empty()) {
        cerr << "Error: Unable to load the image from file: " << RA2211003010002_filename << endl;
        exit(EXIT_FAILURE);
    }

    return RA2211003010002_image;
}

RA2211003010002_Image* RA2211003010002_convertToCustomImage(const cv::Mat& RA2211003010002_cvImage) {
    int RA2211003010002_width = RA2211003010002_cvImage.cols;
    int RA2211003010002_height = RA2211003010002_cvImage.rows;

    RA2211003010002_Image* RA2211003010002_customImage = RA2211003010002_createImage(RA2211003010002_width, RA2211003010002_height);

    for (int RA2211003010002_y = 0; RA2211003010002_y < RA2211003010002_height; RA2211003010002_y++) {
        for (int RA2211003010002_x = 0; RA2211003010002_x < RA2211003010002_width; RA2211003010002_x++) {
            RA2211003010002_customImage->RA2211003010002_pixels[RA2211003010002_y][RA2211003010002_x] = static_cast<int>(RA2211003010002_cvImage.at<uchar>(RA2211003010002_y, RA2211003010002_x));
        }
    }

    return RA2211003010002_customImage;
}

int main() {
    string RA2211003010002_filename = "RA2211003010002_image_file.jpg";

    cv::Mat RA2211003010002_cvImage = RA2211003010002_loadImage(RA2211003010002_filename);
    RA2211003010002_Image* RA2211003010002_customImage = RA2211003010002_convertToCustomImage(RA2211003010002_cvImage);

    RA2211003010002_Image* RA2211003010002_resizedImage = RA2211003010002_resizeImage(RA2211003010002_customImage, 100, 100);
    RA2211003010002_manipulateImage(RA2211003010002_resizedImage);

    cv::Mat RA2211003010002_processedImage(RA2211003010002_resizedImage->RA2211003010002_height, RA2211003010002_resizedImage->RA2211003010002_width, CV_8UC1);
    for (int RA2211003010002_y = 0; RA2211003010002_y < RA2211003010002_processedImage.rows; RA2211003010002_y++) {
        for (int RA2211003010002_x = 0; RA2211003010002_x < RA2211003010002_processedImage.cols; RA2211003010002_x++) {
            RA2211003010002_processedImage.at<uchar>(RA2211003010002_y, RA2211003010002_x) = static_cast<uchar>(RA2211003010002_resizedImage->RA2211003010002_pixels[RA2211003010002_y][RA2211003010002_x]);
        }
    }

    cv::imshow("Processed Image", RA2211003010002_processedImage);
    cv::waitKey(0);


    RA2211003010002_deleteImage(RA2211003010002_customImage);
    RA2211003010002_deleteImage(RA2211003010002_resizedImage);

    return 0;
}
