#include <iostream>
#include <memory>
#include <string>
#include <algorithm>

#include <grpc++/grpc++.h>
#include "utils.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using utils::Double;
using utils::DoubleArray;
using utils::UtilsServer;

// Logic and data behind the server's behavior.
class UtilsServerImpl final : public UtilsServer::Service {
    Status Sum(ServerContext *context, const DoubleArray *request,
               Double *response) override {
        std::cout << "[Sum] Get request" << std::endl;
        double sum = 0.0;

        for (int i = 0; i < request->array_size(); i++) {
            sum += request->array(i);
        }

        response->set_value(sum);
        std::cout << "[Sum] Done, sum = " << sum << std::endl;

        return Status::OK;
    }

    Status Sort(ServerContext *context, const DoubleArray *request,
                DoubleArray *response) override {
        std::cout << "[Sort] Get request" << std::endl;
		int len = request->array_size();
		std::vector<double> array(len);

		for (int i = 0; i < len; i++) {
			array[i] = request->array(i);
		}

		std::sort(array.begin(), array.end());
		
		for (int i = 0; i < len; i++) {
			response->add_array(array[i]);
		}

        std::cout << "[Sort] Done" << std::endl;
        return Status::OK;
    }
};

void RunServer() {
    std::string server_address("0.0.0.0:6666");
    UtilsServerImpl service;

    ServerBuilder builder;
    // Listen on the given address without any authentication mechanism.
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    // Register "service" as the instance through which we'll communicate with
    // clients. In this case it corresponds to an *synchronous* service.
    builder.RegisterService(&service);
    // Finally assemble the server.
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;

    // Wait for the server to shutdown. Note that some other thread must be
    // responsible for shutting down the server for this call to ever return.
    server->Wait();
}

int main(int argc, char **argv) {
    RunServer();

    return 0;
}
