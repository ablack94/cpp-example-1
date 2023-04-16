FROM danger89/cmake:latest

WORKDIR /workarea
COPY ./CMakeLists.txt /workarea/
COPY ./modules /workarea/modules

RUN apt-get update -y \
 && apt-get install -y \
        libgtest-dev \
        libgmock-dev

RUN mkdir build \
 && cd build \
 && cmake .. \
 && make \
 && ctest 
