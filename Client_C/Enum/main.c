#include <stdio.h>
#pragma warning (disable : 4996)

// FSM
// ���� ���� �ӽ�
enum JumpState {
	Idel,
	PrepareToJump,
	InFlight,
	Falling,
	OnGround,
};

// enum : ������, ��������� �ڷ����� �����ϱ����� Ű����
enum Testnum {
	Idle,
	Walk,
	Run,
	Attack,
	DoubleAttack,
	Jump,
	Hurt,
};

// �÷��̾� ����
// 0 �ƹ��͵� ���� �ʴ� ����
// 1 �ȱ�
// 2 �޸���
// 3 ��������
// 4 ��������
// 5 �ǰݴ��ϱ�


int main() {
	// ���ڰ� �ƴ� �̸����� ��� ����
	enum PlayState playerState;
	playerState = Idle;

	while (1) {
		scanf("%d", &playerState);

		switch (playerState)
		{
		case Idle:printf("�ϰ͵� ����\n");
			break;
		case Walk:printf("�ȱ�\n");
			break;
		case Run:printf("�޸���\n");
			break;
		case Attack:printf("����\n");
			break;
		case Jump:printf("����\n");
			break;
		case Hurt:printf("�ǰ�\n");
			break;
		default:printf("����\n");
			break;
		}
	}
}