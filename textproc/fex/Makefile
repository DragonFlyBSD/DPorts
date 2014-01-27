# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: textproc/fex/Makefile 341278 2014-01-26 20:27:24Z mat $

PORTNAME=	fex
PORTVERSION=	2.0.0
CATEGORIES=	textproc
MASTER_SITES=	http://semicomplete.googlecode.com/files/ \
		http://mirrors.rit.edu/zi/

MAINTAINER=	zi@FreeBSD.org
COMMENT=	A powerful field extraction tool

LICENSE=	APACHE20

MAKE_ENV+=	INSTALLMAN=${PREFIX}/man

PLIST_FILES=	bin/fex man/man1/fex.1.gz

post-patch:
	@${REINPLACE_CMD} -e 's|CC=gcc|CC=${CC}|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
