# Created by: Dominic Marks <dom@cus.org.uk>
# $FreeBSD: irc/dancer/Makefile 330474 2013-10-16 03:09:48Z eadler $

PORTNAME=	dancer
PORTVERSION=	4.16
PORTREVISION=	1
CATEGORIES=	irc
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	IRC bot written in C for UNIX, Windows, and AmigaOS

PATCH_WRKSRC=		${WRKDIR}/${DISTNAME}
WRKSRC=		${WRKDIR}/${DISTNAME}/src
GNU_CONFIGURE=	yes
MAKE_ARGS+=	CSPECIAL="${CFLAGS}" LDFLAGS="${LDFLAGS}"
LDFLAGS+=	-lm
CPP=		#
USE_CSTD=	gnu89

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_PROGRAM} ${WRKSRC}/../${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	cd ${WRKSRC}/../example && ${INSTALL_DATA} \
		dancer.config dancer.users \
		dancer.funcs dancer.explain ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
