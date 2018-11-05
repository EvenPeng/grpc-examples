# grpc-examples

- Generate files for C++
```
protoc --cpp_out=cxx --grpc_out=cxx --plugin=protoc-gen-grpc=/usr/local/bin/grpc_cpp_plugin utils.proto
```
