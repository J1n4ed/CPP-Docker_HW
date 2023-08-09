FROM ubuntu:latest
	LABEL maintainer="JINX"
	RUN apt-get update && apt-get install -y g++ mc net-tools build-essential cmake
	WORKDIR /root/cmake_app/
	COPY . .		
	WORKDIR /root/cmake_app/HW-03-CMake Leaver/
	RUN cmake .
	RUN cmake --build .
	CMD ["./LeaverClientExe"]