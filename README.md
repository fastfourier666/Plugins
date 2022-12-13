# Plugins
 
this is a binary only of my attempt at porting the Windows NDI plugin for Unreal 5.1

OS: Monterey 12.5

XCode: 14.1

Unreal Engine: 5.1.0-23058290+++UE5+Release-5.1

NDI SDK for Mac


Probably incomplete summary of what I did to get the Windows source to build:

* remove LATIN CAPITAL AE character (use ctrl-cmd-space to find it) from all newtek source - this was the trademark character on Windows I think, but it messes up the compile in xcode
* add a mac section to Source/ThirdParty/NDI/NDI.Build.cs - use the linux section as a template - library is at "/usr/local/lib/libndi.dylib"
* add "Mac" to the PlatformAllowList in the .uplugin file (remove windows and linux)
* add "|| PLATFORM_MAC" to #if on line 312 of NDIIOPluginModule.cpp 
* replace NDIIO/Shaders/Private/NDIIOShaders.usf with [this](https://forums.newtek.com/threads/unreal-engine-5-1-ndi-plugin-ndiio-crash-report.167047/post-1637021)
* drag /usr/local/lib/libndi.dylib into the xcode project under Games/yourproject and copy, add it to all build targets
* possibly have to add the headers from the SDK download to the project's build settings under "Header Search Paths"
