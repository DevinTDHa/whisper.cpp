set(TARGET quantize-mix)
add_executable(${TARGET} quantize-mix.cpp mix-quant.cpp)

include(DefaultTargetOptions)

target_link_libraries(${TARGET} PRIVATE common whisper ${CMAKE_THREAD_LIBS_INIT} )
