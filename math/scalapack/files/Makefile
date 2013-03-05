# Makefile of Sample program
# Written by NAKATA, Maho <maho@FreeBSD.org>
# $FreeBSD: ports/math/scalapack/files/Makefile,v 1.3 2012/11/17 05:59:30 svnexp Exp $

all: densg densg2

densg: example1.f   # f77 version
	mpif77 -o densg example1.f -L/usr/local/lib -lscalapack -lblacs -lblacsf77 -lblacs -lf77blas
	
densg2: example1.cc # C++ version
	mpiCC -o densg2 example1.cc -I/usr/local/mpich/include -I/usr/local/include -L/usr/local/lib -lscalapack -lblacs -lblacsf77 -lblacs -lf77blas -lg2c -lm
