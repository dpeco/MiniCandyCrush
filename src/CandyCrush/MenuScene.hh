/******************************************************************
* Copyright (C) 2016 Jordi Serrano Berbel <jsberbel95@gmail.com> *
* This can not be copied, modified and/or distributed without    *
* express permission of the copyright owner.                     *
******************************************************************/

#pragma once
#include "Grid.hh"
#include "Scene.hh"

// GameScene class with the main gameplay mode
class MenuScene : public Scene {
public:
	explicit MenuScene();
	~MenuScene() override;
	void OnEntry(void) override;
	void OnExit(void) override;
	void Update(void) override;
	void Draw(void) override;
private:
	Sprite m_background;
	int m_score{ 0 };
};