#include <stdio.h>
#pragma warning (disable : 4996)

// FSM
// 유한 상태 머신
enum JumpState {
	Idel,
	PrepareToJump,
	InFlight,
	Falling,
	OnGround,
};

// enum : 열거형, 사용자정의 자료형을 정의하기위한 키워드
enum Testnum {
	Idle,
	Walk,
	Run,
	Attack,
	DoubleAttack,
	Jump,
	Hurt,
};

// 플레이어 상태
// 0 아무것도 하지 않는 상태
// 1 걷기
// 2 달리기
// 3 공격하지
// 4 점프하지
// 5 피격당하기


int main() {
	// 숫자가 아닌 이름으로 사용 가능
	enum PlayState playerState;
	playerState = Idle;

	while (1) {
		scanf("%d", &playerState);

		switch (playerState)
		{
		case Idle:printf("암것도 안함\n");
			break;
		case Walk:printf("걷기\n");
			break;
		case Run:printf("달리기\n");
			break;
		case Attack:printf("공격\n");
			break;
		case Jump:printf("점프\n");
			break;
		case Hurt:printf("피격\n");
			break;
		default:printf("머임\n");
			break;
		}
	}
}