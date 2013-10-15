# Created by: KIRIYAMA Kazuhiko <kiri@kiri.toba-cmt.ac.jp>
# $FreeBSD: misc/xd/Makefile 327745 2013-09-20 20:50:57Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
