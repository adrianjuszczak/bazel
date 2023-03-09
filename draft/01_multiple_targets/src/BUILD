cc_library(
	name = "dog",
	srcs = ["dog.cpp"],
	hdrs = ["dog.h"],
) 

cc_binary(
	name = "bark",
	srcs = ["main.cpp"],
	deps = [ 
		":dog",
	       ],
)
