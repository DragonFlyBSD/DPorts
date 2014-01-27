# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: sysutils/libchk/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include <bsd.port.mk>
