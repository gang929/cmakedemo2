add_executable(cmakedemo main.cpp demo.cpp demo.h)
target_include_directories(cmakedemo PUBLIC
	"${GLIB2_INCLUDE_DIRS}"
	)
target_link_libraries(cmakedemo PUBLIC
	"${GLIB2_LDFLAGS}"
	)
