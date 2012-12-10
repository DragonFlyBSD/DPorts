# New ports collection makefile for:    retail
# Date created:                         19 May 2010
# Whom:                                 Oleg Ginzburg
#
# $FreeBSD: ports/sysutils/retail/Makefile,v 1.3 2012/11/17 06:01:43 svnexp Exp $
#

PORTNAME=	retail
PORTVERSION=	1.0.1
CATEGORIES=	sysutils
MASTER_SITES=	http://xjack.org/retail/download/ \
		http://olevole.ru/freebsd/distfiles/

MAINTAINER=	olevole@olevole.ru
COMMENT=	A program for incremental logfile reader

GNU_CONFIGURE=	yes
MAN1=		retail.1
PLIST_FILES=	bin/retail

post-configure:
	${REINPLACE_CMD} -e 's/%.o: %.c \*.h ..\/config.h//g' ${WRKSRC}/src/Makefile

post-install:
	${INSTALL_DATA} ${WRKSRC}/doc/retail.1 ${PREFIX}/man/man1/

.include <bsd.port.mk>
