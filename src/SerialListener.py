import serial

port = "COM4"
baudRate = 9600

serial = serial.Serial(port, baudRate)
while True:
    line = serial.readline().decode('utf-8')
    print(line, end='')