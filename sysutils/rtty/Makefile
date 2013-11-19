# Created by: jkh
# $FreeBSD: sysutils/rtty/Makefile 333979 2013-11-16 04:15:28Z vanilla $

PORTNAME=	rtty
PORTVERSION=	4.0
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.isc.org/isc/rtty/ \
		ftp://gatekeeper.research.compaq.com/pub/misc/vixie/
EXTRACT_SUFX=	.shar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multiuser "tip"/"cu" replacement with logging

EXTRACT_CMD=	${GZCAT}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	|sh
NO_WRKSUBDIR=	yes

.include <bsd.port.mk>
