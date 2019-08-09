#include "stdafx.h"
#include "stdio.h"

//enum

enum EGameState { // 값을 생략해도 자동으로 번호가 지정된다. 알아서 자료형을 int로 간주한다.
	GAMESTATE_MAINMENU,
	GAMESTATE_PLAYING,
	GAMESTATE_PAUSED,
	GAMESTATE_GAMEOVER
};


int main() {
	EGameState currState = GAMESTATE_MAINMENU;
	
	while (true) {
		switch (currState) {
		case GAMESTATE_MAINMENU:
			break;
		case GAMESTATE_PLAYING:
			break;
		case GAMESTATE_PAUSED:
			break;
		case GAMESTATE_GAMEOVER:
			break;
		}
	}
}