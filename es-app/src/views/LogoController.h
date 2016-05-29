/*
 * LogoController.h
 *
 *  Created on: May 28, 2016
 *      Author: anhdht
 */

#ifndef ES_APP_SRC_VIEWS_LOGOCONTROLLER_H_
#define ES_APP_SRC_VIEWS_LOGOCONTROLLER_H_

#include <GuiComponent.h>

class LogoController: public GuiComponent {
public:
	static void init(Window* window);
	static LogoController* get();

	virtual ~LogoController();
private:
	LogoController(Window* window);
	static LogoController* sInstance;

	Eigen::Affine3f mCamera;
	float mFadeOpacity;
	bool mLockInput;
};

#endif /* ES_APP_SRC_VIEWS_LOGOCONTROLLER_H_ */
