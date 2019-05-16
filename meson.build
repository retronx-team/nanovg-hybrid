
project('nanovg_hybrid', ['c', 'cpp'],
	version: '1.0.0',
	default_options: [ 'buildtype=release', 'strip=true', 'b_ndebug=if-release', 'cpp_std=c++14' ],
)

dep_glfw3 = dependency('glfw3', version : '>=3.3')
dep_glm   = dependency('glm', version : '>=0.9.8')

hybrid_nanovg_files = files(
	'source/glad.c',
	'source/nanovg/nanovg.c',
	'source/Application.cpp',
	'source/main.cpp'
)

hybrid_nanovg = executable(
	'hybrid_nanovg',
	hybrid_nanovg_files,
	dependencies : [ dep_glfw3, dep_glm ],
	install: true,
	include_directories: include_directories('include', 'include/nanovg'),
	cpp_args: [ '-DWINDOW_NAME="Hybrid nanovg example"' ]
)
