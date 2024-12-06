import double
import sys
import time

d3 = double.DRDoubleSDK()

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

def move(throttle, turn):
    d3.sendCommand('navigate.drive', {
        "throttle": throttle,
        "turn": turn,
        "powerDrive": False,
        "disableTurn": False
    })

def stop():
    d3.sendCommand('navigate.drive', {
        "throttle": 0,
        "turn": 0,
        "powerDrive": False,
        "disableTurn": False
    })

def cleanup():
    # Stop the robot on exit
    d3.sendCommand('navigate.drive', { "throttle": 0, "turn": 0 })  
    d3.sendCommand('screensaver.nudge')
    d3.close()
    print('Cleaned up')
    sys.exit(0)