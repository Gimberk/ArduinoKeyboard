import serial
from pynput.keyboard import Key, Controller

release = True

keyboard = Controller()

port = "COM4"
baudRate = 9600

if release:
    cfgInfo = open("runinfo.cfg", "r").read().split('\n')
    for i in cfgInfo:
        val = i.split('=')[1]
        id = i.split('=')[0]
        if id == "ArduinoPort": port = "COM"+val
        elif id == "BaudRate": baudRate = int(val)

serial = serial.Serial(port, baudRate)
while True:
    line = serial.readline().decode('utf-8').rstrip('\n')
    keyboard.press(str(line[:1]))