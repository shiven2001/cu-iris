import double
import sys
import time
import keyboard  # Import the keyboard library

d3 = double.DRDoubleSDK()

try:
    # Initialization
    d3.sendCommand('events.subscribe', { 'events': [
        'DRBase.status',
        'DRNavigateModule.status',
    ]})
    
    d3.sendCommand('screensaver.nudge')
    d3.sendCommand('base.requestStatus')

    # Allow some time for the camera to initialize
    time.sleep(1)

    # Navigation Initialization
    d3.sendCommand('navigate.enable')
    d3.sendCommand('navigate.exitDock')
    d3.sendCommand('navigate.obstacleAvoidance.setLevel', { "level": 2 })

    while True:
        # Check for keyboard input
        if keyboard.is_pressed('q'):  # Press 'q' to exit
            break
        elif keyboard.is_pressed('up'):  # Up arrow key
            d3.sendCommand('navigate.drive', {
                "throttle": 0.1,
                "turn": 0.0,
                "powerDrive": False,
                "disableTurn": False
            })
        elif keyboard.is_pressed('down'):  # Down arrow key
            d3.sendCommand('navigate.drive', {
                "throttle": -0.1,
                "turn": 0.0,
                "powerDrive": False,
                "disableTurn": False
            })
        elif keyboard.is_pressed('left'):  # Left arrow key
            d3.sendCommand('navigate.drive', {
                "throttle": 0.0,
                "turn": -0.1,
                "powerDrive": False,
                "disableTurn": False
            })
        elif keyboard.is_pressed('right'):  # Right arrow key
            d3.sendCommand('navigate.drive', {
                "throttle": 0.0,
                "turn": 0.1,
                "powerDrive": False,
                "disableTurn": False
            })
        else:
            # Stop commands when no arrow key is pressed
            d3.sendCommand('navigate.drive', {
                "throttle": 0,
                "turn": 0,
                "powerDrive": False,
                "disableTurn": False
            })

except KeyboardInterrupt:
    d3.sendCommand('navigate.drive', { "throttle": 0, "turn": 0 })  # Stop the robot
    d3.sendCommand('screensaver.nudge')
    d3.close()
    print('Cleaned up')
    sys.exit(0)

# Cleanup
d3.sendCommand('navigate.drive', { "throttle": 0, "turn": 0 })  # Stop the robot
d3.sendCommand('screensaver.nudge')
d3.close()
print('Cleaned up')