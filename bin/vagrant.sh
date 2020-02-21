#!/usr/bin/env bash

apt-get update
apt-get install -y g++ unzip zip curl
apt-get install -y linux-headers-`uname -r`
curl https://bazel.build/bazel-release.pub.gpg | sudo apt-key add -
echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | sudo tee /etc/apt/sources.list.d/bazel.list

apt-get install -y bazel
apt full-upgrade

export PATH="$PATH:$HOME/bin"
