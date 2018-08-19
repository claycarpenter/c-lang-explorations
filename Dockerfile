FROM ubuntu:18.04

# Do not exclude man pages & other documentation
RUN rm /etc/dpkg/dpkg.cfg.d/excludes

RUN apt-get update && apt-get install -y \
    manpages-dev manpages-posix-dev man-db \
    build-essential \
    glibc-doc \
    gcc \
    gdb \
    make \
    nasm \
    vim \
    tree

# Meh: manpages-dev manpages-posix-dev glibc-doc

# Set the working directory to /sandbox
WORKDIR /sandbox/src

ENV PATH="/sandbox/bin:${PATH}"
