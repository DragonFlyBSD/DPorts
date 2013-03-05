# Created by: KIRIYAMA Kazuhiko <kiri@kiri.toba-cmt.ac.jp>
# $FreeBSD: ports/misc/xd/Makefile,v 1.12 2013/02/07 20:12:40 svnexp Exp $

PORTNAME=	xd
PORTVERSION=	2.3
CATEGORIES=	misc
MASTER_SITES=	http://www.bsddiary.net/xd/
DISTNAME=	xd-8087

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Yet another dump utility

LICENSE=	BSD

MAKE_ARGS=	CC="${CC}" BINDIR="${PREFIX}/bin" \
		MANDIR="${MAN1PREFIX}/man/man"

MAN1=		xd.1
MANCOMPRESSED=	maybe
PLIST_FILES=	bin/xd

.include <bsd.port.mk>
