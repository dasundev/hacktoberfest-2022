# Written by NoobScience @newtoallofthis123
# For @hacktoberfest

# Port Scanner Written in python
# It uses threading for faster results

from socket import *
print("Open PORT SCANNER")
target_host_name = input('Host: ')
target_ip = gethostbyname(target_host_name)
print(f'Starting SCAN on {target_ip}')
print("----------------------------------")
def scan(port):
   sock = socket(AF_INET, SOCK_STREAM)
   connection_response = sock.connect_ex((target_ip, port))
   if(connection_response == 0) :
      print(f'The Port: {port} is open!')
   sock.close()

import threading
try:
   threads = list()
   for port in range(0, 500):
     thread = threading.Thread(target=scan, args=(port,))
     threads.append(thread)
     thread.start()

   for port, thread_1 in enumerate(threads):
     thread_1.join()
except:
   print('Something went wrong')