# Arduino LED Blinking – Testing Results

## Test Case 1: LED Pin Configuration
- **Status:** PASS
- **Expected Result:** LED should respond to digital pin 13.
- **Actual Result:** LED successfully responds to pin 13.

## Test Case 2: LED Pin Initialization
- **Status:** PASS
- **Expected Result:** LED pin should be configured as OUTPUT.
- **Actual Result:** Pin initialization using `pinMode(ledPin, OUTPUT)` works correctly.

## Test Case 3: LED Blinking Delay Optimization
- **Status:** PASS
- **Expected Result:** LED should remain ON for 1 second and OFF for 1 second.
- **Actual Result:** LED blinks with the configured 1000 ms ON and OFF delays.

## Test Case 4: Serial Monitoring for Debugging
- **Status:** PASS
- **Expected Result:** Serial Monitor should display LED ON and LED OFF messages.
- **Actual Result:** Serial Monitor successfully displays both messages at 9600 baud.

## Testing Environment
- Platform: Tinkercad Circuits
- Microcontroller: Arduino Uno R3
- LED Pin: Digital Pin 13
- Resistor: 220 Ohm
- Baud Rate: 9600

**Overall Result: All four test cases passed successfully.**
