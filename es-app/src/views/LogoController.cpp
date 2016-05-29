/*
 * LogoController.cpp
 *
 *  Created on: May 28, 2016
 *      Author: anhdht
 */

#include "views/LogoController.h"
#include "Log.h"

LogoController* LogoController::sInstance = NULL;

LogoController* LogoController::get() {
	assert(sInstance);
	return sInstance;
}

void LogoController::init(Window* window) {
	assert(!sInstance);
	sInstance = new LogoController(window);
}

LogoController::LogoController(Window* window)
	: GuiComponent(window), mCamera(Eigen::Affine3f::Identity()), mFadeOpacity(0), mLockInput(false)
{
}

LogoController::~LogoController() {
	assert(sInstance == this);
	sInstance = NULL;
}

