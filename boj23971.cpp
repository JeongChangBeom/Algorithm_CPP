//boj23971��_ZOAC 4_����

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double H, W, N, M;
	cin >> H >> W >> N >> M;

	int x = ceil(W / (M + 1));
	int y = ceil(H / (N + 1));

	cout << x * y;
}
//�ִ��� ���� ����� �������� ù��°ĭ(0,0)���� �Ÿ��α� ��Ģ�� ��Ű�鼭 �ɾƾ� �ȴ�.
//���ο� �� �� ���� �� �ִ��� ���ο� �� �� ���� �� �ִ��� ���ؼ� ���ϸ� ���� �� �ִ�.
//����, ���ο� �� �� ���� �� �ִ��� ���ϴ� ���� {���̺��� ���� / (�� ĭ���� �Ѹ��� ���� �� �ִ���)} << �� ���� �ø����ָ� �ȴ�.
//�ø��ϴ� ������ ù��°ĭ(0,0)���� ������ ����� �ɱ� �����̴�.