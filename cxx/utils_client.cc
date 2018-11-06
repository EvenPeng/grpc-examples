#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <random>

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
    UtilsServerClient(std::shared_ptr<Channel> channel)
        : stub_(UtilsServer::NewStub(channel)) {}

    double Sum(std::vector<double> &array) {
        ClientContext context;

        DoubleArray request;
        Double response;

        for (int i = 0; i < array.size(); i++) {
            request.add_array(array[i]);
        }

        Status status = stub_->Sum(&context, request, &response);

        if (!status.ok()) {
            std::cout << status.error_code() << ": " << status.error_message()
                      << std::endl;
        }

        return response.value();
    }

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

bool test_Sum(int len) {
    std::vector<double> array(len);
    double ans = 0;

    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0.0, 1.0);

    for (int i = 0; i < len; i++) {
        array[i] = distribution(generator);
        ans += array[i];
    }

    UtilsServerClient server(grpc::CreateChannel(
        "localhost:6666", grpc::InsecureChannelCredentials()));

    double grpc_ans = server.Sum(array);

    if (ans != grpc_ans) {
        std::cout << "[FAILED] test_sum" << std::endl;
        std::cout << "[FAILED] ans = " << ans << ", grpc_ans = " << grpc_ans
                  << std::endl;
        return false;
    } else {
        std::cout << "[PASSED] test_sum, ans = " << ans << std::endl;
        return true;
    }
}

void test_all() { test_Sum(10); }

int main(int argc, char **argv) {
    // UtilsServerClient server(grpc::CreateChannel(
    //     "localhost:6666", grpc::InsecureChannelCredentials()));

    test_all();

    return 0;
}
