# ZeroMQ_QT
@author MimCim


These mini projects conneting server and client with zeroMq message type in qt framework.

This examle created as outline.

When I was working on this issue, I also tested and confirmed that int values also sendable unproblematically.

Also int values can send inside of struct data type and can reachable inside that.

But I had a problem with sending data Struct or kind of packet if the packet include char or string etc. types, beside I tried to send packet; converting to char* then receiver back convert char* to packet, unfortunately I couldn't succeed it. If you have any suggestion to improve it I would be plessed(as an open source absolutely:)
