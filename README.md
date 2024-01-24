# Arduino Keyboard
> It's a stupid project for an attempt at making a custom keyboard using multiple Arduino UNOs, all the code and wiring are hosted here.

## Requirments and Building for Use

### Windows

1. Use the diagram below and wire up your keyboard
2. Use the Arduino IDE to upload the [Keyboard Listener Code](src/KeyboardListener/KeyboardListener.ino) to your Arduino UNO: [Quick Tutorial](https://www.youtube.com/watch?v=xQfC72VeV7Y)
3. In the out directory, update the [Config File](out/release/runinfo.cfg) with your selected values; if you are unsure of how to find your specific values, the Arduino IDE should give them to you.
4. Run the [Start](out/start.exe) file

## Wiring

### Keyboard Wiring Materials

> Buttons, it's always buttons...

### Wiring Diagram

I have no clue at the moment...

## Requirments and Building for Development

### Windows

This codebase requires Python 3 and the libraries `pyserial` and `pynput`. You can run both (requires pip to be installed):
```
pip install pyserial
pip install pynput
```
