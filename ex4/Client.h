#pragma once

#include "SocketSendRecvTools.h"

SOCKADDR_IN clientService;

 int runClientMode(int argc,char** argv);

 void runClientInHumanMode();

 void receiveAndVerifyGameStarted();

 void runClientInFileMode();

 int recvBoardAndPrint();

 bool recvTurnSwithAndCheckisMyTurn();