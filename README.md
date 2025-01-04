# Raspberry Pi Pico W Template
this file includes the pico sdk, and FREERTOS.
to use this file
to run this program one will need to use the files listed inside the pico documentation
depending on the opreating system.
follow [pico docs][1]

[1]: https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf

## How To Download Files
git is a tool for source control git clone gets the file from the cloud and
puts a local copy on the device you are using.
 ```
 git clone https://github.com/TylerEvans-Dev/picotemplate.git
 ```
## Once Downloaded
git submodules are dependencys that are present inside the libs used such
as the pico sdk or FREERTOS they are files the program depends on to opreate
```
git submodules update --init --recuresive

```

## Generate Cmake Files
This command generates the cmake build folder according to the CMakeLists.txt file
found inside the top level of this program
```
cmake -B build -S .

```

## To Run On Pico W
this command uses picotool and loads the program onto the board if in boot sel. picotool reboot -f forces
the pico to restart and run the program loaded into flash.
```
picotool load /build/ (project_name)/ (something_named).elf && picotool reboot -f
```
# Questions?
evstye@gmail.com
or text 385-375-1437
best,
Tyler.
