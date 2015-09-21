void mixpanel_init(char *token) {
	[mixpanel sharedInstanceWithToken:token];
}

void mixpanel_track(char *event, char *property) {
	[mixpanel track:event properties:property];
}
