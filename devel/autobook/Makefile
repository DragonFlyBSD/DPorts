# Created by: Edwin Groothuis (edwin@mavetju.org)
# $FreeBSD: devel/autobook/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=	autobook
PORTVERSION=	1.5
CATEGORIES=	devel
MASTER_SITES=	http://sources.redhat.com/autobook/

MAINTAINER=	edwin@mavetju.org
COMMENT=	GNU autoconf, automake, and libtool - The Book

NO_BUILD=	yes	# it's only text!

NO_STAGE=	yes
do-install:
	${MKDIR} ${PREFIX}/share/doc/autobook
	${CP} ${WRKSRC}/* ${PREFIX}/share/doc/autobook

.include <bsd.port.mk>
