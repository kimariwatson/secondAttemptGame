if(NOT EXISTS "C:/Users/Kimari/Documents/Advanced Game Programming/cpsc-4377-quest-2-spring-2020-serena_myers_watson/SerenaQuest1/Third Party/tinyxml2-master/out/build/x64-Debug/install_manifest.txt")
  message(FATAL_ERROR "Cannot find install manifest: C:/Users/Kimari/Documents/Advanced Game Programming/cpsc-4377-quest-2-spring-2020-serena_myers_watson/SerenaQuest1/Third Party/tinyxml2-master/out/build/x64-Debug/install_manifest.txt")
endif(NOT EXISTS "C:/Users/Kimari/Documents/Advanced Game Programming/cpsc-4377-quest-2-spring-2020-serena_myers_watson/SerenaQuest1/Third Party/tinyxml2-master/out/build/x64-Debug/install_manifest.txt")

file(READ "C:/Users/Kimari/Documents/Advanced Game Programming/cpsc-4377-quest-2-spring-2020-serena_myers_watson/SerenaQuest1/Third Party/tinyxml2-master/out/build/x64-Debug/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")
foreach(file ${files})
  message(STATUS "Uninstalling $ENV{DESTDIR}${file}")
  if(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    exec_program(
      "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
      )
    if(NOT "${rm_retval}" STREQUAL 0)
      message(FATAL_ERROR "Problem when removing $ENV{DESTDIR}${file}")
    endif(NOT "${rm_retval}" STREQUAL 0)
  else(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
    message(STATUS "File $ENV{DESTDIR}${file} does not exist.")
  endif(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
endforeach(file)
