# New ports collection makefile for:	Net-Stomp
# Date created:	   08 February 2007
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/net-im/p5-Net-Stomp/Makefile,v 1.13 2012/11/17 06:00:28 svnexp Exp $
#

PORTNAME=	Net-Stomp
PORTVERSION=	0.45
CATEGORIES=	net-im perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Streaming Text Orientated Messaging Protocol Client

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor

PERL_CONFIGURE=	yes

MAN3=		Net::Stomp.3 Net::Stomp::Frame.3

.include <bsd.port.mk>
