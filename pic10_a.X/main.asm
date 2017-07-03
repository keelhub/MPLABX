list    p=10F200        ; list directive to define processor
#include <p10F200.inc>  ; processor specific variable definitions


;***** Configuration
      ; no watchdog & no code protect  & ext reset
 __CONFIG _WDTE_OFF & _CP_OFF & _MCLRE_ON

;***** RC CALIBRATION
RCCAL   CODE    0x0FF       ; processor reset vector
        res 1               ; holds internal RC cal value, as a movlw k

;***** RESET VECTOR
RESET   CODE    0x000       ; effective reset vector
        res 1

;***** MAIN PROGRAM *****************************************************

;***** Initiatialisation
start
        movlw   b'111101'   ; configure GP1 (only) as output
        tris    GPIO
        movlw   b'000010'   ; set GP1 high
        movwf   GPIO

;***** Main loop
        goto    $           ; loop forever

        END