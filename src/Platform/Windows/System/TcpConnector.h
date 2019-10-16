// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstdint>
#include <string>

namespace System
{
    class Dispatcher;

    class IpAddress;

    class TcpConnection;

    class TcpConnector
    {
      public:
        TcpConnector();

        explicit TcpConnector(Dispatcher &dispatcher);

        TcpConnector(const TcpConnector &) = delete;

        TcpConnector(TcpConnector &&other);

        ~TcpConnector();

        TcpConnector &operator=(const TcpConnector &) = delete;

        TcpConnector &operator=(TcpConnector &&other);

        TcpConnection connect(const IpAddress &address, uint16_t port);

      private:
        Dispatcher *dispatcher;

        void *context;
    };

} // namespace System
