# Created by: domi@saargate.de
# $FreeBSD: textproc/gdict/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	gdict
PORTVERSION=	0.7
PORTREVISION=	4
CATEGORIES=	textproc
MASTER_SITES=	http://www.brettnacher.org/users/dominik/FreeBSD/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small program that finds definitions of arbitrary (English) words

USE_GNOME=	gtk12

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdict ${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/dict ${PREFIX}/bin/cdict

.include <bsd.port.mk>
