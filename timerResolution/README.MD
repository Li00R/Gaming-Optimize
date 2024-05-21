# POWERSHELL WITH ADMINISTRATOR
#### this setting allows the timer resolution to be set to 0.5 ms

## bcdedit

```shell
bcdedit /set useplatformtick yes
bcdedit /set disabledynamictick yes
bcdedit /set useplatformclock no
```