workspace "TF2-Hud-Studio"
	startproject "TF2HudStudio"
	
	configurations {
		"Debug32", "Debug64", "Release32", "Release64"
	}
	
	flags { "MultiProcessorCompile" }
	
project "TF2HudStudio"
	kind "WindowedApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"
	
	targetdir ("bin/%{cfg.buildcfg}/%{cfg.system}/%{cfg.architecture}")
	objdir ("bin/int/%{cfg.buildcfg}/%{cfg.system}/%{cfg.architecture}")
	
	files {
		"src/tf2hudstudio/**.h",
		"src/tf2hudstudio/**.cpp"
	}
	
	includedirs {
		"src/",
		"dependencies/glfw/include/"
	}
	
	links {
		"opengl32.lib"
	}
	
	filter "system:windows"
		systemversion "latest"
		defines { "_WINDOWS" }
	
	filter "system:linux"
		defines { "_LINUX" }
		
	filter "system:macosx"
		defines { "_MACOS" }
		
	filter "configurations:Debug*"
		runtime "Debug"
		symbols "on"
		defines { "_DEBUG" }
		
	filter "configurations:Release*"
		runtime "Release"
		optimize "on"
		defines { "_RELEASE" }
		
	filter "configurations:*32"
		architecture "x86"
		links { "dependencies/glfw/lib/glfw3-32.lib" }
		
	filter "configurations:*64"
		architecture "x86_64"
		links { "dependencies/glfw/lib/glfw3-64.lib" }