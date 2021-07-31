# Get the base Ubuntu image from Docker Hub
FROM ubuntu:latest
ENV DEBIAN_FRONTEND=noninteractive 
ENV TERM linux

# Update apps on the base image
RUN apt-get -y update && apt-get install -y

# Install dependencies
RUN apt-get -y install clang clang-format libncurses5-dev libncursesw5-dev git make cmake

# Clone the repo
RUN git clone https://github.com/blairharper/system-monitor.git /usr/src/system-monitor

# Specify the working directory
WORKDIR /usr/src/system-monitor

# Use make to compile our build
RUN make build
