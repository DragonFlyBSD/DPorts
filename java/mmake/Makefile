# ex:ts=8
# New ports collection makefile for:	mmake
# Date created:			Sep 1, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/java/mmake/Makefile,v 1.11 2012/11/17 05:58:45 svnexp Exp $
#

PORTNAME=	mmake
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	java devel
MASTER_SITES=	http://www.tildeslash.com/mmake/dist/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create a Makefile for Your Java files, ready to compile

BUILD_DEPENDS=	jikes:${PORTSDIR}/java/jikes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
NO_BUILD=	yes

MAN1=		mmake.1
PLIST_FILES=	bin/mmake

.include <bsd.port.mk>
