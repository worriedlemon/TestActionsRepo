FROM debian:13
COPY third_party.txt /tmp/third_party.txt
RUN apt update && \
    apt install -y $(cat /tmp/third_party.txt) 
WORKDIR /build
CMD ["sleep", "infinity"]
