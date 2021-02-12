# Arduino-Temperature-Monitor
Arduino setup for monitoring the room temperature usin LM35, Arduino UNO and LCD display (16 * 4). I'm not giving the comment in the code file,because if you are opening this code in arduinodroid using mobile,it(some mobiles) will show some compilation errors.If you guys have any doubts,feel free to contact me or just refer to the README file.
LCD used: 16 * 4
if you are using different lcd screen ,then you will have to change the cursorset values accordingly
ARDUINO used:uno
TEMPERATURE SENSOR used:LM35

### The circuit connections can simply be given by
ARDUINO&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LCD&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LM35\
1)&nbsp;gnd-------->vss---->gnd\
2)&nbsp;gnd-------->bl-\
3)&nbsp;gnd-------->vo\
4)&nbsp;gnd-------->rw\
5)&nbsp;5v &nbsp;-------->vdd---->vcc\
6)&nbsp;5v &nbsp;-------->bl+\
7)&nbsp;A0------------------->vout\
8)&nbsp;GPIO 8---->rs\
9)&nbsp;GPIO 9---->e\
10)&nbsp;GPIO 10->db4\
11)&nbsp;GPIO 11->db5\
12)&nbsp;GPIO 12->db6\
13)&nbsp;GPIO 13->db7
