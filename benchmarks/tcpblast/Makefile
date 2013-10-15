# Created by: mr
# $FreeBSD: benchmarks/tcpblast/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	tcpblast
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	benchmarks net ipv6
DISTFILES=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Measures the throughput of a TCP connection

PLIST_FILES=	bin/tcpblast

WRKSRC=		${WRKDIR}/src

do-extract:
	@${RM} -rf ${WRKDIR}
	@${MKDIR} ${WRKDIR}
	${CP} -RP ${.CURDIR}/src ${WRKDIR}

.include <bsd.port.mk>
