# New ports collection makefile for:	FrikQCC
# Date created:				16 Mar 2005
# Whom:					Alexey Dokuchaev <danfe@FreeBSD.org>
#
# $FreeBSD: ports/games/frikqcc/Makefile,v 1.4 2012/11/17 05:57:39 svnexp Exp $
#

PORTNAME=	frikqcc
PORTVERSION=	2.6
CATEGORIES=	games devel
MASTER_SITES=	http://wiki.quakesrc.org/files/ \
		http://freebsd.nsu.ru/distfiles/
DISTNAME=	${PORTNAME:S/qcc//}${PORTVERSION:S/.//g}src

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Advanced QuakeC compiler/decompiler

USE_ZIP=	yes

MAKEFILE=	${FILESDIR}/Makefile
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/frikqcc bin/frikqcdec

do-install:
.for p in ${PLIST_FILES:S/bin\///g}
	${INSTALL_PROGRAM} ${WRKSRC}/${p} ${PREFIX}/bin
.endfor

.include "${.CURDIR}/../quake-source/Makefile.include"

.include <bsd.port.mk>
