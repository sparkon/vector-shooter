/**
==========================================================================
						Controller XBox
==========================================================================
**/

#ifndef CONTROLLER_XBOX_H_INCLUDED
#define CONTROLLER_XBOX_H_INCLUDED

#include <Windows.h>
#include <XInput.h>

class ControllerXBox
{
public :
	ControllerXBox();
	ControllerXBox(int);

	XINPUT_STATE GetState();
	bool		 IsConnected();
	void		 Vibrate(unsigned int leftPower = 65535,unsigned int rightPower = 65535);
	void		 VibrateRight(unsigned int rightPower = 65535);
	void		 VibrateLeft(unsigned int leftPower = 65535);
	void		 StopAllVibrations();

private :
	XINPUT_STATE ControllerState_;
	int			 ControllerNum_;
};

#endif // xbox 360 controller