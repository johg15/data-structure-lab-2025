#pragma once
#include <cstdio>
#include <cstring>

class Car {
private:


protected:
	int speed;				// 속도 (private)
	char name[40];			// 이름 (private)
public:
	int gear;		// 기어 (public)
	Car() { }		// 기본 생성자
	~Car() { }		// 소멸자
	Car(int s, const char* n, int g)	// 매개변수가 있는 생성자
		: speed(s), gear(g) {			// 멤버 초기화 리스트 (멤버변수 초기화)
		strcpy_s(name, n);				// 생성자 함수 몸체 (name 멤버 초기화)
	}
	void changeGear(int g = 4) {		// 기어 단수를 변경하는 멤버 함수
		gear = g;
	}
	void speedUp() {					// 속도를 5씩 증가 멤버 함수
		speed += 5;
	}
	void display() {					// 자동차의 정보를 화면에 출력함.
		printf("[%s] : 기어=%d단 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() { 
		printf("객체 주소 = %x\n", this); 
	}
};

