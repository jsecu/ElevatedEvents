# ElevatedEvents

EventViewer UAC bypass via .NET Deserialization discovered by @OrangeTsai made into a Reflective DLL to use with Cobalt Strike.


https://user-images.githubusercontent.com/55005881/172065755-458f2e01-2867-4d3a-8efd-1304531ab4fb.mp4

- Supports direct execution of executables, and doesn't rely on spawning mmc.exe through cmd.exe as shown in the original POC. However due to this command agruements are not supported.


- As this UAC bypass is currently detected by Defender, a simple bypass is utilized that renames the file back to the original after its created to avoid detection. 

OPSEC Warning

- Event Viewer will briefly flash on the victim's screen before being terminated.(Currently working on a way to avoid this behavior)
- When running this UAC Bypass on a user account that hasn't run Event Viewer before, you may need to run the tool twice. The first time will run Event Viewer for you and the second time will allow Event Viewer to deserialize the RecentViews file.

Compilation
- For learning how to compile reflective dlls in Visual Studio: https://ijustwannared.team/2018/02/13/reflective-dlls-and-you/

Credits:

- @OrangeTsai-https://twitter.com/orange_8361/status/1518970259868626944

- ysoserial-https://github.com/pwntester/ysoserial.net






