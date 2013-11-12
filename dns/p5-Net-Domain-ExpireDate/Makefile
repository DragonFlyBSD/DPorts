# Created by: clsung
# $FreeBSD: dns/p5-Net-Domain-ExpireDate/Makefile 332593 2013-11-03 07:46:27Z vanilla $

PORTNAME=	Net-Domain-ExpireDate
PORTVERSION=	1.11
CATEGORIES=	dns net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DESPAIR
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module obtain expiration date of domain names

BUILD_DEPENDS=	p5-Net-Whois-Raw>=0:${PORTSDIR}/net/p5-Net-Whois-Raw
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
