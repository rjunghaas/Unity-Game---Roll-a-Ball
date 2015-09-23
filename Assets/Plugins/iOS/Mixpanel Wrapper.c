void mixpanel_init(char *token) {
	[mixpanel sharedInstanceWithToken:token];
}

void mixpanel_track(char *event) {
	[mixpanel track:event];
}
