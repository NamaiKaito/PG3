#include "ClearScene.h"
#include <Novice.h>

const int kSceneTitle = 0;

void ClearScene::Initialize() {}

void ClearScene::Update(char* keys, char* preKeys) {

	// スペースで次のシーンへ
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		sceneNo = kSceneTitle;
	}
}

void ClearScene::Draw() {
	Novice::ScreenPrintf(0, 0, "Curernt Scene : Clear");
	Novice::ScreenPrintf(0, 30, "Push Space : Next Scene");
}