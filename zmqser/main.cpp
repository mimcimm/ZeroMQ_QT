#include <QCoreApplication>
#include <zmq.hpp>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    DataPacked *data;
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REP);
    socket.bind ("tcp://127.0.0.1:5555");
    while (true) {
           zmq::message_t request;
           socket.recv (&request);
           std::cout << "Received request: [" << (char*) request.data() << "]" << std::endl;

           zmq::message_t reply (11);
           memcpy ((void *) reply.data (), "Your World", 11);
           socket.send (reply);
       }
    return a.exec();
}
