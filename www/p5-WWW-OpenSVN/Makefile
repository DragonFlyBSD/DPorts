# New ports collection makefile for:	p5-WWW-OpenSVN
# Date created:		2006-07-24
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: www/p5-WWW-OpenSVN/Makefile 326148 2013-09-03 13:06:13Z az $
#

PORTNAME=	WWW-OpenSVN
PORTVERSION=	0.1.3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	An automated interface for OpenSVN.csie.org

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		WWW::OpenSVN.3

.include <bsd.port.mk>
