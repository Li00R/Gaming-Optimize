# COMMANDS FOR POWERSHELL WITH ADMINISTRATOR

## Bloatware on windows

### See some software on windows:
```shell
Get-AppxPackage | Select Name, PackageFullName;
```

### Remove a software:
```shell
Get-appxpackage -allusers *Software Name* | Remove-AppxPackage;
```

### Some commands to remove some bloatware and gain some time:
```shell
Get-appxpackage -allusers Microsoft.549981C3F5F10 | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.LanguageExperiencePackes-MX  | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.WindowsMaps | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.YourPhone | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.WindowsAlarms | Remove-AppxPackage;
Get-AppxPackage -allusers Microsoft.People | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.GetHelp  | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.WindowsSoundRecorder | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.WebpImageExtension | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.Wallet | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.HEIFImageExtension | Remove-AppxPackage;
Get-appxpackage -allusers Microsoft.MicrosoftEdge.Stable | Remove-AppxPackage;
Get-appxpackage -allusers *xbox* | Remove-AppxPackage;
```

## Services on windows

### See services:
```shell
Get-service;
```

### Disable a service:
```shell
Set-service -Name *Service Name* -StartupType Disable;
```

### Here some commands to disable some unnecessary services and gain some time:
```shell
Set-service -Name DiagTrack -StartupType Disable;
Set-service -Name WSearch -StartupType Disable;
Set-service -Name MapsBroker -StartupType Disable;
Set-service -Name lmhosts -StartupType Disable;
Set-service -Name NaturalAuthentication -StartupType Disable;
Set-service -Name PeerDistSvc -StartupType Disable;
Set-service -Name SNMPTRAP -StartupType Disable;
Set-service -Name LanmanWorkstation -StartupType Disable;
Set-service -Name Fax -StartupType Disable;
Set-service -Name autotimesvc -StartupType Disable;
Set-service -Name dmwappushservice -StartupType Disable;
Set-service -Name XboxGipSvc -StartupType Disable;
Set-service -Name WalletService -StartupType Disable;
Set-service -Name TapiSrv -StartupType Disable;
Set-service -Name SysMain -StartupType Disable;
Set-service -Name PhoneSvc -StartupType Disable;
Set-service -Name FrameServer -StartupType Disable;
Set-service -Name SmsRouter -StartupType Disable;
Set-service -Name wisvc -StartupType Disable;
Set-service -Name WMPNetworkSvc -StartupType Disable;
Set-service -Name TroubleshootingSvc -StartupType Disable;
Set-service -Name icssvc -StartupType Disable;
Set-service -Name XboxNetApiSvc -StartupType Disable;
Set-service -Name RetailDemo -StartupType Disable;
Set-service -Name lfsvc -StartupType Disable;
Set-service -Name LxpSvc -StartupType Disable;
Set-service -Name DPS -StartupType Disable;
Set-service -Name WpcMonSvc -StartupType Disable;
Set-service -Name WbioSrvc -StartupType Disable;
Set-service -Name wcncsvc -StartupType Disable;
Set-service -Name SEMgrSvc -StartupType Disable;
Set-service -Name CscService -StartupType Disable;
Set-service -Name Netlogon -StartupType Disable;
Set-service -Name XblGameSave -StartupType Disable;
Set-service -Name WdiServiceHost -StartupType Disable;
Set-service -Name WdiSystemHost -StartupType Disable;
Set-service -Name XblAuthManager -StartupType Disable;
Set-service -Name MixedRealityOpenXRSvc -StartupType Disable;
Set-service -Name RemoteRegistry -StartupType Disable;
Set-service -Name RemoteAccess -StartupType Disable;
```

### more code (more code, more risk):
```shell
Set-service -Name PrintWorkflowUserSvc_34875 -StartupType Disable;
Set-service -Name PimIndexMaintenanceSvc_34875 -StartupType Disable;
Set-service -Name OneSyncSvc_34875 -StartupType Disable;
Set-service -Name DevicesFlowUserSvc_34875 -StartupType Disable;
Set-service -Name BluetoothUserService_34875 -StartupType Disable;
Set-service -Name BcastDVRUserService_34875 -StartupType Disable;
Set-service -Name XboxNetApiSvc -StartupType Disable;
Set-service -Name XboxGipSvc -StartupType Disable;
Set-service -Name XblGameSave -StartupType Disable;
Set-service -Name XblAuthManager -StartupType Disable;
Set-service -Name WSearch -StartupType Disable;
Set-service -Name WpcMonSvc -StartupType Disable;
Set-service -Name wlidsvc -StartupType Disable;
Set-service -Name WlanSvc -StartupType Disable;
Set-service -Name wisvc -StartupType Disable;
Set-service -Name WFDSConMgrSvc -StartupType Disable;
Set-service -Name wercplsupport -StartupType Disable;
Set-service -Name WdiSystemHost -StartupType Disable;
Set-service -Name WdiServiceHost -StartupType Disable;
Set-service -Name wcncsvc -StartupType Disable;
Set-service -Name WbioSrvc -StartupType Disable;
Set-service -Name WalletService -StartupType Disable;
Set-service -Name vmicvss -StartupType Disable;
Set-service -Name vmicvmsession -StartupType Disable;
Set-service -Name vmictimesync -StartupType Disable;
Set-service -Name vmicshutdown -StartupType Disable;
Set-service -Name vmicrdv -StartupType Disable;
Set-service -Name vmickvpexchange -StartupType Disable;
Set-service -Name vmicheartbeat -StartupType Disable;
Set-service -Name vmicguestinterface -StartupType Disable;
Set-service -Name uhssvc -StartupType Disable;
Set-service -Name UevAgentService -StartupType Disable;
Set-service -Name tzautoupdate -StartupType Disable;
Set-service -Name TroubleshootingSvc -StartupType Disable;
Set-service -Name TokenBroker -StartupType Disable;
Set-service -Name TermService -StartupType Disable;
Set-service -Name TapiSrv -StartupType Disable;
Set-service -Name TabletInputService -StartupType Disable;
Set-service -Name SysMain -StartupType Disable;
Set-service -Name ssh -StartupType Disable;-agent
Set-service -Name Spooler -StartupType Disable;
Set-service -Name SNMPTRAP -StartupType Disable;
Set-service -Name SmsRouter -StartupType Disable;
Set-service -Name shpamsvc -StartupType Disable;
Set-service -Name SEMgrSvc -StartupType Disable;
Set-service -Name SCPolicySvc -StartupType Disable;
Set-service -Name ScDeviceEnum -StartupType Disable;
Set-service -Name SCardSvr -StartupType Disable;
Set-service -Name RmSvc -StartupType Disable;
Set-service -Name RetailDemo -StartupType Disable;
Set-service -Name RemoteRegistry -StartupType Disable;
Set-service -Name RemoteAccess -StartupType Disable;
Set-service -Name PrintNotify -StartupType Disable;
Set-service -Name pla -StartupType Disable;
Set-service -Name PhoneSvc -StartupType Disable;
Set-service -Name PeerDistSvc -StartupType Disable;
Set-service -Name PcaSvc -StartupType Disable;
Set-service -Name NetTcpPortSharing -StartupType Disable;
Set-service -Name Netlogon -StartupType Disable;
Set-service -Name NcbService -StartupType Disable;
Set-service -Name NcaSvc -StartupType Disable;
Set-service -Name NaturalAuthentication -StartupType Disable;
Set-service -Name MsKeyboardFilter -StartupType Disable;
Set-service -Name MSI_Companion_Service -StartupType Disable;
Set-service -Name MSI_Central_Service -StartupType Disable;
Set-service -Name MixedRealityOpenXRSvc -StartupType Disable;
Set-service -Name MapsBroker -StartupType Disable;
Set-service -Name LxpSvc -StartupType Disable;
Set-service -Name lmhosts -StartupType Disable;
Set-service -Name lfsvc -StartupType Disable;
Set-service -Name LanmanWorkstation -StartupType Disable;
Set-service -Name LanmanServer -StartupType Disable;
Set-service -Name iphlpsvc -StartupType Disable;
Set-service -Name IKEEXT -StartupType Disable;
Set-service -Name icssvc -StartupType Disable;
Set-service -Name HvHost -StartupType Disable;
Set-service -Name FrameServer -StartupType Disable;
Set-service -Name DPS -StartupType Disable;
Set-service -Name dmwappushservice -StartupType Disable;
Set-service -Name DisplayEnhancementService -StartupType Disable;
Set-service -Name DispBrokerDesktopSvc -StartupType Disable;
Set-service -Name DialogBlockingService -StartupType Disable;
Set-service -Name DiagTrack -StartupType Disable;
Set-service -Name diagsvc -StartupType Disable;
Set-service -Name DeviceAssociationService -StartupType Disable;
Set-service -Name CscService -StartupType Disable;
Set-service -Name cFosSpeedS -StartupType Disable;
Set-service -Name CDPSvc -StartupType Disable;
Set-service -Name bthserv -StartupType Disable;
Set-service -Name BthAvctpSvc -StartupType Disable;
Set-service -Name BTAGService -StartupType Disable;
Set-service -Name BDESVC -StartupType Disable;
Set-service -Name autotimesvc -StartupType Disable;
Set-service -Name AppVClient -StartupType Disable;
Set-service -Name AJRouter -StartupType Disable;
```

#### (some services are necesary for some programs, like Work Station (LanmanWorkstation) for Ryzen Master, if you have any issues, try to start the service you need in the services aplication, you can try to set it to manual if you use it sometimes).

#### Possible errors found:

* Ryzen masters requires Work Station (LanmanWorkstation)
* Desktop search for files and folders needs Windows Search (WSearch), but explorer search no need it
* Apex Legends requieres KeyIso

## bcdedit

### Platform configurations:
```shell
bcdedit /set useplatformtick yes
bcdedit /set disabledynamictick yes
bcdedit /set useplatformclock no
```

### some extra if you don't use hypervisor:
```shell
bcdedit /set hypervisorlaunchtype Off
```

## Task Scheduler

#### It depends on many factors, you can have different types of scheduled tasks, such as automatic program updates, custom rgb, etc. These tasks would have to be seen in each particular case for various reasons.

### In this case disables telemetry and some microsoft things:
```shell
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Application Experience" -TaskName "Microsoft Compatibility Appraiser";
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Application Experience" -TaskName "ProgramDataUpdater";
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Application Experience" -TaskName "StartupAppTask";
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Customer Experience Improvement Program" -TaskName "Consolidator"
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Customer Experience Improvement Program" -TaskName "UsbCeip"
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Offline Files" -TaskName "Background Synchronization"
Disable-ScheduledTask -TaskPath "\Microsoft\Windows\Offline Files" -TaskName "Logon Synchronization"
```

## Power plan ultimate perfomance

### After you run this command, set this power plan on in power options:
```shell
powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61
powercfg -setactive e9a42b02-d5df-448d-aa00-03f14749eb61
```


