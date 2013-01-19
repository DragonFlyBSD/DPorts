# New ports collection makefile for:	imerge(1)
# Date created:		18 January 2007
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/misc/imerge/Makefile,v 1.5 2012/12/25 19:44:22 svnexp Exp $
#

PORTNAME=	imerge
PORTVERSION=	0.2.4
CATEGORIES=	misc
MASTER_SITES=	ftp://ftp.iDaemons.org/pub/distfiles/ \
		${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	knu

MAINTAINER=	knu@FreeBSD.org
COMMENT=	A tool to help merge one file to another interactively

USE_BZIP2=	yes

MAKE_ARGS=	PREFIX="${PREFIX}" MANPREFIX="${MANPREFIX}"
MAKEFILE=	BSDmakefile

MAN1=		imerge.1
MANCOMPRESSED=	maybe
PLIST_FILES=	bin/imerge

.include <bsd.port.mk>
