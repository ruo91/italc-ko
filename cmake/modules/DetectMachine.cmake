IF(WIN32)
	SET(ITALC_BUILD_WIN32 1)
ELSE(WIN32)
	IF(APPLE)
		SET(ITALC_BUILD_APPLE 1)
	ELSE(APPLE)
		SET(ITALC_BUILD_LINUX 1)
	ENDIF(APPLE)
ENDIF(WIN32)

SET(ITALC_HOST_X86 FALSE)
SET(ITALC_HOST_X86_64 FALSE)

EXEC_PROGRAM( ${CMAKE_C_COMPILER} ARGS "-dumpmachine" OUTPUT_VARIABLE Machine )
STRING(REGEX MATCH "i.86" IS_X86 "${Machine}")
STRING(REGEX MATCH "86_64" IS_X86_64 "${Machine}")

IF(WIN32)
	IF(WIN64)
		SET(IS_X86_64 TRUE)
		SET(ITALC_BUILD_WIN64 TRUE)
	ELSE(WIN64)
		SET(IS_X86 TRUE)
	ENDIF(WIN64)
ENDIF(WIN32)

IF(IS_X86)
	SET(ITALC_HOST_X86 TRUE)
ELSEIF(IS_X86_64)
	SET(ITALC_HOST_X86_64 TRUE)
ELSE(IS_X86)
	MESSAGE("Can't identify target host. Assuming 32 bit platform.")
ENDIF(IS_X86)

IF(CMAKE_INSTALL_LIBDIR)
    SET(LIB_DIR "${CMAKE_INSTALL_LIBDIR}")
ELSE(CMAKE_INSTALL_LIBDIR)
	SET(LIB_DIR lib)
ENDIF(CMAKE_INSTALL_LIBDIR)

