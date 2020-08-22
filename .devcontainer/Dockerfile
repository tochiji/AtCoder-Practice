FROM ubuntu:18.04

ARG GITHUB_TOKEN
ENV GIT_REPOSITORY AtCoder-command
ENV GIT_USER tochiji

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y git build-essential cmake clang libssl-dev && \
    apt-get install -y cpputest libsqlite3-dev clang-format gdb

RUN apt-get install -y curl vim nano libxml2-utils python3.8 python3-dev
RUN curl https://bootstrap.pypa.io/get-pip.py | python3.8
RUN pip3.8 install pylint

ENV URL https://${GIT_USER}:${GITHUB_TOKEN}@github.com/${GIT_USER}/${GIT_REPOSITORY}.git

RUN git clone ${URL} /home && \
    echo PATH="$PATH:/home/" >>~/.bashrc
    