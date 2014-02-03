# Created by: ijliao
# $FreeBSD: devel/cvsadmin/Makefile 341485 2014-01-27 23:57:31Z bapt $

PORTNAME=	cvsadmin
PORTVERSION=	1.0.3
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	LOCAL/gabor

MAINTAINER=	aehlig@linta.de
COMMENT=	Simple program to administrate users of a CVS repository

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/cvsadmin \
		man/man1/cvsadmin.1.gz

post-configure:
	${ECHO_CMD} "#define HAVE_MKDTEMP 1" >> ${WRKSRC}/config.h

post-install:
	${INSTALL_MAN} ${WRKSRC}/man/cvsadmin.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
