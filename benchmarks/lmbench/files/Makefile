# A Makefile for the installed lmbench
# $FreeBSD: ports/benchmarks/lmbench/files/Makefile,v 1.5 2012/11/17 05:54:50 svnexp Exp $
#
OS != scripts/os
BINDIR = bin/${OS}

.PHONY:	results rerun see

results:
	@(cd scripts; ./config-run ../${BINDIR}/CONFIG)
	@(cd scripts; ./results)

rerun:
	@(if [ ! -f ${BINDIR}/CONFIG ]; then \
	  (cd scripts; ./config-run ../${BINDIR}/CONFIG); \
	fi)
	@(cd scripts; ./results)

see:
	cd results && make summary percent | more
