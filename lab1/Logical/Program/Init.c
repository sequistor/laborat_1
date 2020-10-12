
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	enable=1;
	count=0;
	fb_motor.dt = 0.01;
	fb_motor.ke=2;
	fb_motor.Tm=0.4;
	fb_motor2.dt=0.01;
	fb_motor2.ke=2;
	fb_motor2.Tm=0.4;
	fb_controller.dt=0.01;
	fb_controller.k_p=8;
	fb_controller.k_i=20;
	fb_controller.max_abs_value=24;
}
