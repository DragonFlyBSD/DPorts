# Created by: Brian Candler <B.Candler@pobox.com>
# $FreeBSD: print/pmw/Makefile 332493 2013-11-02 14:48:58Z pawel $

PORTNAME=	pmw
PORTVERSION=	4.26
CATEGORIES=	print audio
MASTER_SITES=	http://www.quercite.com/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	High quality music typesetting program

LICENSE=	GPLv2

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes
MAKE_ARGS=	FULLECHO=""
ALL_TARGET=	build

SUB_FILES=	pkg-message

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for i in ChangeLog spec.pdf
	(cd ${WRKSRC}/doc && ${INSTALL_DATA} ${i} ${STAGEDIR}${DOCSDIR})
.endfor

.include <bsd.port.mk>
