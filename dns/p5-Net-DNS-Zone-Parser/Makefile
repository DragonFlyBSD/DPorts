# Created by: Jimmy Bergman jimmy@sigint.se
# $FreeBSD: dns/p5-Net-DNS-Zone-Parser/Makefile 341813 2014-01-30 08:45:50Z az $

PORTNAME=	Net-DNS-Zone-Parser
PORTVERSION=	0.02
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jimmy@sigint.se
COMMENT=	Perl5 preprocessor for normalising a zone file

BUILD_DEPENDS=	p5-Net-DNS>=0.64:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Net-DNS-SEC>=0.15:${PORTSDIR}/dns/p5-Net-DNS-SEC
RUN_DEPENDS=	p5-Net-DNS>=0.64:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Net-DNS-SEC>=0.15:${PORTSDIR}/dns/p5-Net-DNS-SEC

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
