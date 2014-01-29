# Created by: domi@saargate.de
# $FreeBSD: textproc/gdict/Makefile 341449 2014-01-27 20:48:13Z mat $

PORTNAME=	gdict
PORTVERSION=	0.7
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	http://www.brettnacher.org/users/dominik/FreeBSD/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small program that finds definitions of arbitrary (English) words

USE_GNOME=	gtk12

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdict ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/dict ${STAGEDIR}${PREFIX}/bin/cdict

.include <bsd.port.mk>
