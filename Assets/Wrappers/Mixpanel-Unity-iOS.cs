using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public class MySDK
{
	#if UNITY_ANDROID
	public static void MixpanelInit(string token) {
		AndroidJavaClass unity = new AndroidJavaClass("com.unity3D.player.UnityPlayer");
		AndroidJavaObject mCurrentActivity = unity.GetStatic<AndroidJavaObject> ("currentActivity");
		AndroidJavaClass mixpanel = new AndroidJavaClass ("com.mixpanel.android.mpmetrics.MixpanelAPI");
		mixpanel.Call ("getInstance", mCurrentActivity, "wordpressapp");
		mixpanel.Call ("track", "initialized");
	}
	
	public static void MixpanelTrack(string eventName) {
		AndroidJavaClass mixpanelClass = new AndroidJavaClass("com.mixpanel.android.mpmetrics.MixpanelAPI");
		AndroidJavaObject mCurrentActivity = mixpanelClass.GetStatic <AndroidJavaObject> ("currentActivity");
		AndroidJavaObject mixpanel = mixpanelClass.Call <AndroidJavaObject> ("getInstance", mCurrentActivity, "wordpressapp");
		mixpanel.CallStatic ("track", eventName);
	}
	
	#elif UNITY_IOS
	// import a single C-function from our plugin
	[DllImport ("__Internal")]
	private static extern void mixpanel_init(string token);
	
	[DllImport ("__Internal")]
	private static extern void mixpanel_track(string eventName);
	/*
	 * TODO
	 * private static extern void MixpanelTrack(string eventName, Dictionary *properties);
	 */
	
	// wrap imported C-function to C# method
	public static void MixpanelInit(string token) {
		// it won't work in Editor, so don't run it there
		if(Application.platform != RuntimePlatform.OSXEditor) {
			// Convert C# string to char[]
			mixpanel_init(token);
		}
	}
	
	public static void MixpanelTrack(string eventName) {
		// it won't work in Editor, so don't run it there
		if(Application.platform != RuntimePlatform.OSXEditor) {
			// Convert C# string to char[]
			mixpanel_track(eventName);
		}
	}
	
	/*
 * TODO: Get this working with properties
	public static void MixpanelTrack(string eventName, Dictionary *properties) {
		// it won't work in Editor, so don't run it there
		if(Application.platform != RuntimePlatform.OSXEditor) {
			// Convert C# string to char*
			char *event_name = eventName.ToCharArray ();
			// Max length in bytes of a GET request
			char **c_properties = char*[8192];
			int i = 0;
			// TODO: Convert C# dictionary to char**
			foreach (KeyValuePair<string, string> entry in properties) {
				// TODO: dates, ints, floats, bools, arrays (lists)
				// For now, let's just work with strings
				char *property_name = entry.Key.ToCharArray();
				char *property_value = entry.Value.ToCharArray();
				c_properties[i++] = property_name;
				c_properties[i++] = property_value;
			}
			mixpanel_track(event_str, c_properties);
		}
	}
*/	
	#else
	Debug.Log("Unsupported Platform");

	#endif
}
