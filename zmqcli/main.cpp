#include <QCoreApplication>
#include <zmq.h>
#include <zmq.hpp>
#include <iostream>
#include <QDebug>
#include <QThread>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    zmq::context_t context(1);
    zmq::socket_t socket(context,ZMQ_REQ);
    std::cout << "Connecting to kinect server..." << std::endl;
    std::string connection_address("tcp://127.0.0.1:5555");
    socket.connect(connection_address.c_str());

    while (true) {
    	 QThread::sleep(2);
        zmq::message_t request (22);
        char* sendingPac="My World,";
        memcpy ((void *) request.data (), sendingPac, 22);
        socket.send (request);

        zmq::message_t res;
        socket.recv (&res);
        std::cout << "res request: [" << (char*) res.data() << "]" << std::endl;
    }
    return a.exec();
}
