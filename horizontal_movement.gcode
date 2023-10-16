;ANYCUBIC i3 Mega S size: 210x210x205
G90 ; absolute coordinate
G1 X65 Y0 Z200 ; Initial position set.
G4 P5000 ; Wait 5 seconds to prepare for start.
G1 X145 F18000 ; #1 Move to the right.
G4 P1500 ; Standby for 1 sec.
G1 X65  ; Back to left.
G4 P1500 ; Standby for 1 sec. 1 round trip completed.
G1 X145  ; #2
G4 P1500
G1 X65
G4 P1500
G1 X115 F24000 ; #3
G4 P1000
G1 X65
G4 P1000
G1 X95  ; #4
G1 X65
G4 P3000 ;end
G1 X95  ;
G4 P3000; 
G1 X65
G4 P5000 ; Standby for 5 sec.
G1 X65;