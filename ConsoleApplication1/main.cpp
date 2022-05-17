#include "Geometry.h"
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	CGeometry cg; //CGeometry ��ü ����

	Mat InputImage1 = imread("briefcase.jpg"); // ��ǲ �̹��� �ޱ�
	Mat OutputImage1 = cg.GS_affineRotate(InputImage1, -90, 1);  // �ޱ� 45�� ������
	imshow("OutputImage1", OutputImage1); //�ƿ�ǲ�̹��� ���

	waitKey(0); //���α׷��� ����Ǵ� ���� ������.
}