#import "Mixpanel.h"

static void *mixpanel;

extern "C" {

    void mixpanel_init(char *token) {
        [Mixpanel sharedInstanceWithToken:[NSString stringWithUTF8String:token]];
	    mixpanel = [Mixpanel sharedInstance];
	    //return mixpanel;
    }

    void mixpanel_track(char *event) {
	    [mixpanel track:[NSString stringWithUTF8String:event]];
    }

}