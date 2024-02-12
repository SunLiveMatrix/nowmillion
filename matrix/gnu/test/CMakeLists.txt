cmake_minimum_required(VERSION 3.28)
project(nowmillion)

set(CMAKE_CXX_STANDARD 17)

add_executable(nowmillion main.cpp
        expect/call/arguments.cpp
        expect/call/arguments.h
        expect/call/investigation/carnival.cpp
        expect/call/investigation/carnival.h
        expect/call/investigation/arguments/carps.cpp
        expect/call/investigation/arguments/carps.h
        expect/call/investigation/flags/operation/tempus.cpp
        expect/call/investigation/flags/operation/tempus.h
        expect/call/investigation/flags/revelry/brazil.cpp
        expect/call/investigation/flags/revelry/brazil.h
        expect/call/investigation/flags/key/token/link.cpp
        expect/call/investigation/flags/key/token/link.h
        expect/call/investigation/exports/happer/swift.cpp
        expect/call/investigation/exports/happer/swift.h
        expect/call/investigation/exports/changes/climatics/cold.cpp
        expect/call/investigation/exports/changes/climatics/cold.h
        expect/call/investigation/exports/vaccination/campaign/analysis.cpp
        expect/call/investigation/exports/vaccination/campaign/analysis.h
        expect/call/investigation/exports/business/rain/start.cpp
        expect/call/investigation/exports/business/rain/start.h
        expect/call/investigation/exports/business/pointers/region/run.cpp
        expect/call/investigation/exports/business/pointers/region/run.h
        expect/call/investigation/exports/business/evolution/color/list.cpp
        expect/call/investigation/exports/business/evolution/color/list.h)
