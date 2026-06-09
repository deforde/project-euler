FROM ubuntu:26.04

RUN apt-get update \
    && apt-get install -y --no-install-recommends \
        clang \
        clangd \
        cmake \
        libc6-dev \
        make \
    && rm -rf /var/lib/apt/lists/*
