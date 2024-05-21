@echo off

wmic process where name="dwm.exe" call setpriority 32

wmic process where name="winlogon.exe" call setpriority 32

taskkill /im TextInputHost.exe -f