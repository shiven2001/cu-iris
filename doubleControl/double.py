import threading
import socket
import json

import socket
import json

class DRDoubleSDK():
    def __init__(self, address='/tmp/doubleapi', ip='192.168.1.104', port=22022):
        """Initialize the socket connection."""
        # Uncomment the following lines if you want to use UNIX socket instead
        # self.sock = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
        # self.sock.connect(address)
        
        # Use TCP socket
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.connect((ip, port))

    def close(self):
        """Close the socket connection."""
        self.sock.close()

    def sendCommand(self, command, data=None):
        """Send a command to the robot."""
        packet = {'c': command}
        if data is not None:
            packet['d'] = data
        json_string = json.dumps(packet)
        self.sock.sendall(json_string.encode('utf-8'))  # Use sendall for reliability

    def recv(self):
        """Receive a response from the robot."""
        packet = self.sock.recv(4096).decode('utf-8')
        if not packet:
            exit('Error: received None from D3SDK')
        
        try:
            return json.loads(packet)  # Attempt to parse JSON
        except ValueError:
            print("JSON Parse error:", packet)
            return None  # Return None if parsing fails