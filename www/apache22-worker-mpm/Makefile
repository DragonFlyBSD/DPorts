# $FreeBSD: www/apache22-worker-mpm/Makefile 333336 2013-11-09 20:53:16Z ohauer $

MASTERDIR=		${.CURDIR}/../apache22

MAINTAINER=		apache@FreeBSD.org

WITH_MPM=		worker

LATEST_LINK=		apache22-${WITH_MPM}-mpm
DESCR=			${.CURDIR}/pkg-descr

PORT_OPTIONS+=		CGID
OPTIONS_EXCLUDE=	CGI
OPTIONS_UNSET+=		CGI

.include "${MASTERDIR}/Makefile"
