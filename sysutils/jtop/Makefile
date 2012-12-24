# New ports collection makefile for:	jtop
# Date created:				27 March 2004
# Whom:					Pavel Novikov
#
# $FreeBSD: ports/sysutils/jtop/Makefile,v 1.5 2012/11/17 06:01:35 svnexp Exp $
#

PORTNAME=	jtop
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://ext.by/jtop/

MAINTAINER=	pavel@ext.by
COMMENT=	Wrapper to top(1) that maps pids to jails

BUILD_DEPENDS=	p5-Term-ReadKey>=0:${PORTSDIR}/devel/p5-Term-ReadKey
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN1=		jtop.1
MANCOMPRESSED=	yes
USE_PERL5=	yes
PLIST_FILES=	bin/jtop

.include <bsd.port.mk>
