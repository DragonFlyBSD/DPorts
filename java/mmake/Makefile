# Created by: ijliao
# $FreeBSD: java/mmake/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	mmake
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	java devel
MASTER_SITES=	http://www.tildeslash.com/mmake/dist/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create a Makefile for Your Java files, ready to compile

BUILD_DEPENDS=	jikes:${PORTSDIR}/java/jikes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
NO_BUILD=	yes

MAN1=		mmake.1
PLIST_FILES=	bin/mmake

.include <bsd.port.mk>
