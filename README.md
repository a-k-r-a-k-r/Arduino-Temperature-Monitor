# Arduino-Temperature-Monitor
Arduino setup for monitoring the room temperature usin LM35, Arduino UNO and LCD display (16 * 4)

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;i'm not giving the comment in the code file,because if you are opening this code in arduinodroid using mobile,it(some mobiles) will show some compilation errors.If you guys have any doubts,feel free to contact me or just refer to the readme\
LCD used: 16 * 4\
if you are using different lcd screen ,then you will have to change the cursorset values accordingly\
ARDUINO used:uno\
TEMPERATURE SENSOR used:LM35\
The circuit connections can simply be given by\
&nbsp;&nbsp;&nbsp;&nbsp;ARDUINO&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LCD&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;LM35\
&nbsp;&nbsp;1)&nbsp;gnd-------->&nbsp;&nbsp;&nbsp;&nbsp;vss---->&nbsp;&nbsp;gnd\
&nbsp;&nbsp;2)&nbsp;gnd-------->&nbsp;&nbsp;&nbsp;&nbsp;bl-\
&nbsp;&nbsp;3)&nbsp;gnd-------->&nbsp;&nbsp;&nbsp;&nbsp;vo&nbsp;&nbsp;\
&nbsp;&nbsp;4)&nbsp;gnd-------->&nbsp;&nbsp;&nbsp;&nbsp;rw&nbsp;&nbsp;\
&nbsp;&nbsp;5)&nbsp;5v &nbsp;-------->&nbsp;&nbsp;&nbsp;&nbsp;vdd---->&nbsp;&nbsp;vcc\
&nbsp;&nbsp;6)&nbsp;5v &nbsp;-------->&nbsp;&nbsp;&nbsp;&nbsp;bl+&nbsp;&nbsp;\
&nbsp;&nbsp;7)&nbsp;A0----------------------->&nbsp;&nbsp;vout\
&nbsp;&nbsp;8)&nbsp;GPIO 8---->&nbsp;&nbsp;&nbsp;&nbsp;rs &nbsp;&nbsp;\
&nbsp;&nbsp;9)&nbsp;GPIO 9---->&nbsp;&nbsp;&nbsp;&nbsp;e  &nbsp;&nbsp;\
10)&nbsp;GPIO 10-->&nbsp;&nbsp;&nbsp;&nbsp;db4&nbsp;&nbsp;   \
11)&nbsp;GPIO 11-->&nbsp;&nbsp;&nbsp;&nbsp;db5&nbsp;&nbsp;   \
12)&nbsp;GPIO 12-->&nbsp;&nbsp;&nbsp;&nbsp;db6&nbsp;&nbsp;   \
13)&nbsp;GPIO 13-->&nbsp;&nbsp;&nbsp;&nbsp;db7&nbsp;&nbsp;   