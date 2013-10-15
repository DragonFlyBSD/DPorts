# Created by: ijliao
# $FreeBSD: devel/cvsadmin/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=	cvsadmin
PORTVERSION=	1.0.3
PORTREVISION=	2
CATEGORIES=	devel
MASTER_SITES=	LOCAL/gabor

MAINTAINER=	aehlig@linta.de
COMMENT=	A simple program to administrate users of a CVS repository

GNU_CONFIGURE=	yes

MAN1=		cvsadmin.1
PLIST_FILES=	bin/cvsadmin

NO_STAGE=	yes
post-configure:
	${ECHO_CMD} "#define HAVE_MKDTEMP 1" >> ${WRKSRC}/config.h

post-install:
	${INSTALL_MAN} ${WRKSRC}/man/cvsadmin.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
