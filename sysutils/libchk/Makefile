# New ports collection makefile for:	libchk
# Date created:		2 September 2002
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/sysutils/libchk/Makefile,v 1.16 2012/11/17 06:01:36 svnexp Exp $
#

PORTNAME=	libchk
PORTVERSION=	1.10.3
CATEGORIES=	sysutils
MASTER_SITES=	ftp://ftp.iDaemons.org/pub/distfiles/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	knu

MAINTAINER=	knu@FreeBSD.org
COMMENT=	A tool to check shared library links

LICENSE=	BSD

USE_BZIP2=	yes
USE_RUBY=	yes
USE_RUBY_FEATURES=	optparse

MAKE_ARGS=	PREFIX="${PREFIX}"

MAN1=		libchk.1
MANCOMPRESSED=	maybe
PLIST_FILES=	sbin/libchk

.include <bsd.port.mk>
