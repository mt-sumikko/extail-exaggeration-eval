G1 X60 Y100 Z180 ; Initial position set.
G4 P5000 ; Wait 5 seconds to prepare for start.
G1 X160 F9000 ; #1 Move to the right.
G4 P1000 ; Standby for 3 sec.
G1 X60  ; Back to left.
G4 P1000 ; Standby for 3 sec. 1 round trip completed.
G1 X160  ; #2
G4 P1000
G1 X60
G4 P1000
G1 X160  ; #3
G4 P1000
G1 X60
G4 P1000
G1 X160  ; #4
G4 P1000
G1 X60
G4 P1000
G1 X160  ; #5
G4 P1000
G1 X60
G4 P3000 ; Standby for 3 sec.
G1 X0; End.