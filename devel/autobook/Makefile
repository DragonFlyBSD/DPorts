# New ports collection makefile for:   autobook
# Date created:        13 December 2001
# Whom:                Edwin Groothuis (edwin@mavetju.org)
#
# $FreeBSD: devel/autobook/Makefile 301510 2012-07-25 06:32:06Z cs $
#

PORTNAME=	autobook
PORTVERSION=	1.5
CATEGORIES=	devel
MASTER_SITES=	http://sources.redhat.com/autobook/

MAINTAINER=	edwin@mavetju.org
COMMENT=	GNU autoconf, automake, and libtool - The Book

NO_BUILD=	yes	# it's only text!

do-install:
	${MKDIR} ${PREFIX}/share/doc/autobook
	${CP} ${WRKSRC}/* ${PREFIX}/share/doc/autobook

.include <bsd.port.mk>
