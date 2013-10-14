# Created by: Danny Howard <dannyman@tellme.com>
# $FreeBSD: net/p5-Net-XWhois/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-XWhois
PORTVERSION=	0.90
PORTREVISION=	4
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Whois Client Interface for Perl5

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::XWhois.3

NO_STAGE=	yes
post-patch:
	@${FIND} ${WRKSRC} -type f -name "*.orig" -delete

.include <bsd.port.mk>
