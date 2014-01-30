# A Makefile for the installed lmbench
# $FreeBSD: benchmarks/lmbench/files/Makefile 340722 2014-01-22 17:00:46Z mat $
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
