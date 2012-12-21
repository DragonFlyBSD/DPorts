# ex:ts=8
# Ports collection makefile for:	catdvi
# Date created:			Feb 10, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/print/catdvi/Makefile,v 1.24 2012/11/17 06:00:48 svnexp Exp $
#

PORTNAME=	catdvi
PORTVERSION=	0.14
PORTREVISION=	7
CATEGORIES=	print
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A DVI to text/plain translator

BUILD_DEPENDS=	${LOCALBASE}/lib/libkpathsea.a:${PORTSDIR}/print/teTeX

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKEFILE=	GNUmakefile
ALL_TARGET=	# empty
MAKE_JOBS_UNSAFE=	yes

MAN1=		catdvi.1
PLIST_FILES=	bin/catdvi

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/catdvi ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/catdvi.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
