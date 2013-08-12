# Created by: KIMURA Yasuhiro <yasu@utahime.org>
# $FreeBSD: x11/xrsh/Makefile 322008 2013-06-28 22:51:40Z bapt $

PORTNAME=	xrsh
PORTVERSION=	5.92
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	http://jjd.com/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.shar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Launcher which starts an X program on a remote machine

USES=		imake
NO_WRKSUBDIR=	yes
EXTRACT_CMD=	${SH}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=
MAN1=		xrsh.1 xrlogin.1

PLIST_FILES=	bin/xrsh bin/xrlogin

.include <bsd.port.mk>
