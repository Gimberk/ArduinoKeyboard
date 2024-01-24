import serial
from pynput.keyboard import Key, Controller

keyboard = Controller()

port = "COM6"
baudRate = 9600

serial = serial.Serial(port, baudRate)
while True:
    line = serial.readline().decode('utf-8').rstrip('\n')
    keyboard.press(str(line[:1]))