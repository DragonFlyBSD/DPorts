# Created by: corky1951@comcast.net
# $FreeBSD: sysutils/gaffitter/Makefile 319164 2013-05-27 07:40:09Z bsam $

PORTNAME=	gaffitter
PORTVERSION=	0.6.0
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Bin packing utility that uses a genetic algorithm

LICENSE=	GPLv3 # or later

USE_BZIP2=	yes

.if !defined(NO_INSTALL_MANPAGES)
MAN1=		${PORTNAME}.1
.endif

PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${PREFIX}/bin
.if !defined(NO_INSTALL_MANPAGES)
	${INSTALL_MAN} ${FILESDIR}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1
.endif

.include <bsd.port.mk>
