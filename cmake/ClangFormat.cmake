# Define a function to create a custom target for running clang-format
function(add_clang_format_target TARGET_NAME SOURCE_DIR) # 参数 目标名、源文件路径
    find_program(CLANG-FORMAT_PATH clang-format REQUIRED)  # 寻找clang-format可执行文件，并以"CLANG-FORMAT"变量进行引用
    message("clang-format的路径: ${CLANG-FORMAT_PATH} ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}")
    # Find all C++ source files in the specified directory # 递归寻找所有代码文件，以"FORMAT_SOURCES"变量进行引用
    file(GLOB_RECURSE FORMAT_SOURCES
        LIST_DIRECTORIES false
        "${SOURCE_DIR}/*.cpp"
        "${SOURCE_DIR}/*.h"
        POST_EXCLUDE_REGEX "^${CMAKE_CURRENT_BINARY_DIR}/"
    )
    message("目标代码文件有${FORMAT_SOURCES}")
    # Create a custom target to run clang-format
    add_custom_target(${TARGET_NAME}
        COMMAND ${CLANG-FORMAT_PATH} -i ${FORMAT_SOURCES} # 运行clang-format， 处理所有代码文件，并原地修改
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}  # Change this if needed
        COMMENT "Running clang-format on ${SOURCE_DIR} sources" #  打印
    )
endfunction()