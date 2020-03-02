# Exploring Inverse Dependency principle and boost build package.install

## Inverse Dependency

A fun concept that I understand recetly, and maybe not at a 100%.
The idea is that module doesn't get recompiles every time the implemetation 
of interface changes, due to recompilations ot new implementations.

modules depends on interface.
implementation depends on interface and implements the abstract class.

In main.cpp we instanciete both elements and make them interact.

## package.install

I have been plaing with boost build, since my last job. And some of their functionality is 
not that well documented. I saw the use of this function in the Jamfile of bjam.

In here there is a litle example. The best part is that you reduce the amount of install targets.

## HOW TO

 - Install boost build.
 - b2 test --prefix=\<destination\> release

 ## side note

 In order to use $ORIGIN in the rpath or runpath, you have to change the feature declaration 
 of dll-path. Because it requieres a path type object.
 To do so go to share/boost-build/tools/features/dll-feature.jam and delete the path option.

 I couldn't find the mail that referes to this topic.
