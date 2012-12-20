# New ports collection makefile for:	POE-Component-Spread
# Date created:	   21 August 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/net/p5-POE-Component-Spread/Makefile,v 1.6 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	POE-Component-Spread
PORTVERSION=	0.02
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Handle Spread communications in POE

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		spread>=0:${PORTSDIR}/net/spread
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	YES

MAN3=		POE::Component::Spread.3

.include <bsd.port.mk>
