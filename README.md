# Raspberry Pi Pico W Template
this file includes the pico sdk, and FREERTOS.
to use this file
to run this program one will need to use the files listed inside the pico documentation
depending on the opreating system.
follow [pico docs][1]

[1]: https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf

## To download files
 ```
 git clone https://github.com/TylerEvans-Dev/picotemplate.git
 ```
## Once downloaded

```
git submodules update --init --recuresive

```

## generate Cmake files

```
cmake -B build -S .

```

## finally plug in pico holding bootsel load the program onto the pico by typing the following

``` picotool load /build/ (project_name)/ (something_named).elf && picotool reboot -f
```
# any questions about this template email me at
evstye@gmail.com
or text 385-375-1437
best,
Tyler.
