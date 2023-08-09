FROM ubuntu:16.04
	LABEL maintainer="JINX"
	RUN apt-get update && apt-get install -y g++ mc net-tools build-essential
	WORKDIR /root/hello/
	COPY hello.cpp .
	RUN g++ -o hello hello.cpp
	CMD ["./hello"]	