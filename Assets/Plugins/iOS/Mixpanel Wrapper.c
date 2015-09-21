void mixpanel_init(string *token) {
	[mixpanel sharedInstanceWithToken:token];
}

void mixpanel_track(string *event, string *property) {
	[mixpanel track:event properties:property];
}
