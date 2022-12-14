#build stage
FROM alpine:latest as builder
# app dir
ARG APP_RELATIVE_PATH
# install: git(makefile use git to describe the version)
RUN apk --no-cache add bash findutils git build-base cmake \
    re2-dev c-ares-dev grpc grpc-dev protobuf-dev libprotobuf protoc libprotoc \
    openssl-dev openssl-libs-static
# build app
COPY . /src
WORKDIR /src
RUN make grpc-cpp && cd /src/app/obfusion/service && make conf
WORKDIR /src/app/${APP_RELATIVE_PATH}
RUN git submodule update --init --recommend-shallow --recursive
RUN make build

#final stage
FROM alpine:latest
# image info
ARG AUTHOR_NAME
ARG AUTHOR_EMAIL
ARG VERSION
# label
LABEL author=$AUTHOR_NAME email=${AUTHOR_EMAIL} version=$VERSION
# app dir
ARG APP_RELATIVE_PATH
# install: tzdata c-ares libprotobuf
RUN apk --no-cache add tzdata ca-certificates c-ares libprotobuf grpc
# cpoy the app from builder
COPY --from=builder /src/app/${APP_RELATIVE_PATH}/bin /app
WORKDIR /app
EXPOSE 9000
VOLUME /data/conf
CMD ["./server"]
