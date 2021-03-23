# I am no longer updating this. 
The most recent versions of wxWidgets has modern [CMake](https://cmake.org/download/) support, making this template useless, because CMake can generate IDE projects and makefiles for a variety of platforms automatically. I am keeping it online for historical reasons. 

You can view the wxWidgets CMake documentation here: [CMake Overview](https://docs.wxwidgets.org/trunk/overview_cmake.html) and see my example CMakeLists.txt that handles macOS app bundles and icon files in the following repositories: [FatFileFinderCPP](https://github.com/Ravbug/FatFileFinderCPP/blob/master/CMakeLists.txt), [UnityHubNative](https://github.com/Ravbug/UnityHubNative/blob/master/CMakeLists.txt), [MinecraftSoundsExtractor](https://github.com/Ravbug/MCSoundsExtractorCPP/blob/master/CMakeLists.txt)

# wxWidgetsTemplate

<img align="left" height="100" src="https://upload.wikimedia.org/wikipedia/commons/thumb/b/bb/WxWidgets.svg/2000px-WxWidgets.svg.png">

wxWidgets is an efficient cross-platform GUI library for C++. However, wxWidgets can be quite difficult to set up on all of the supported systems, especially for new users.

This template project addresses the high barrier of entry. 

## Notable features you get with this template
- Easily compile versions of your app for Windows, macOS, and Linux, using a single codebase with the preconfigured Xcode, Visual Studio, and Make files.
  - Supports [AppImage](https://appimage.org) on Linux! See the [release builds guide](https://github.com/Ravbug/wxWidgetsTemplate/wiki/Creating-Release-Builds#linux) on the wiki for more information. 
- [wxFormBuilder](https://github.com/wxFormBuilder/wxFormBuilder) integration – build your interface quickly in their fantastic visual editor!
- Windows High DPI Awareness and helper functions to easily scale your UI to high resolution displays
- Application icons – simply replace the relevant icon file
- Dynamic or static link wxWidgets with ease on all supported platforms
- Portable codebase  – the library is contained inside, so no need to install the library to every computer. If you do not want this, you can easily remove the library from the project. [More Info](https://github.com/Ravbug/wxWidgetsTemplate/wiki/Referencing-wxWidgets-Externally-(Non-portable))

## Get Started with this template
To get started using this template with your own code, see [the Getting Started guide](https://github.com/Ravbug/wxWidgetsTemplate/wiki/Getting-Started) on the wiki.

## Updating the wxWidgets version
Updating the wxWidgets version this project uses is as simple as overwriting the `wxWidgets` folder with the one for the new version and tweaking some files. 
See the [Updating wxWidgets](https://github.com/Ravbug/wxWidgetsTemplate/wiki/Updating-or-Resetting-wxWidgets) guide on the Wiki for more information.

## Issues
Please report all problems (or suggestions!) in the [Issues](https://github.com/Ravbug/wxWidgetsTemplate/issues) section of this repository. 
Make sure to include as many details as possible, or I won't be able to fix it.
