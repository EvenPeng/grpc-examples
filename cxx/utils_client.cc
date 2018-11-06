#include <iostream>
#include <memory>
#include <string>
#include <thread>

#include <grpc/grpc.h>
#include <grpc++/grpc++.h>
#include <grpc++/channel.h>
#include <grpc++/client_context.h>
#include <grpc++/create_channel.h>
#include <grpc++/security/credentials.h>
#include "utils.grpc.pb.h"

using grpc::Channel;
using grpc::ClientReaderWriter;
using grpc::ClientContext;
using grpc::Status;

using utils::Double;
using utils::DoubleArray;
using utils::UtilsServer;

class UtilsServerClient {
 public:
  UtilsServerClient(std::shared_ptr<Channel> channel): stub_(UtilsServer::NewStub(channel)) {}

  void Sort() {
    ClientContext context;

    // if (!status.ok()) {
    //   std::cout << status.error_code() << ": " << status.error_message()
    //             << std::endl;
    // }
  }

 private:
  std::unique_ptr<UtilsServer::Stub> stub_;
};

int main(int argc, char** argv) {
  UtilsServerClient server(grpc::CreateChannel("localhost:6666", grpc::InsecureChannelCredentials()));

  server.Sort();

  return 0;
}
