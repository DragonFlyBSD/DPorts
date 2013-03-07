# Created by: clsung@dragon2.net
# $FreeBSD: ports/dns/p5-Net-Nslookup/Makefile,v 1.15 2013/02/14 21:45:39 svnexp Exp $

PORTNAME=	Net-Nslookup
PORTVERSION=	2.02
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides the capabilities of the standard tool nslookup(1)

BUILD_DEPENDS=	p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		Net::Nslookup.3

.include <bsd.port.mk>
