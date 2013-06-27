# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: textproc/y2l/Makefile 321245 2013-06-19 13:00:10Z wg $

PORTNAME=	y2l
PORTVERSION=	1.2
CATEGORIES=	textproc
MASTER_SITES=	SF

MAINTAINER=	danilogondolfo@gmail.com
COMMENT=	Yacc-to-Latex pretty printer/converter

NO_BUILD=	yes

MAN1=		y2l.1
PLIST_FILES=	bin/y2l

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/y2l ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/y2l.man ${MANPREFIX}/man/man1/y2l.1

.include <bsd.port.mk>
