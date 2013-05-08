# Created by: Matthew Hunt <mph@pobox.com>
# $FreeBSD: print/c2ps/Makefile 317232 2013-05-03 19:05:17Z hrs $

PORTNAME=	c2ps
PORTVERSION=	4.0
PORTREVISION=	3
CATEGORIES=	print
MASTER_SITES=	http://www.cs.technion.ac.il/users/c2ps/

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	A PostScript pretty-printer for C source

LIB_DEPENDS=	paper:${PORTSDIR}/print/libpaper

CPPFLAGS+=	-I${LOCALBASE}/include
PLIST_FILES=	bin/c2ps

MAN1=		c2ps.1

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/c2ps ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/c2ps.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
