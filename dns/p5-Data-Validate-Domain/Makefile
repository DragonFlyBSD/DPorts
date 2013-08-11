# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: dns/p5-Data-Validate-Domain/Makefile 324276 2013-08-05 15:05:29Z az $

PORTNAME=	Data-Validate-Domain
PORTVERSION=	0.10
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NEELY
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Data::Validate::Domain - domain validation methods

BUILD_DEPENDS=	p5-Net-Domain-TLD>=0:${PORTSDIR}/dns/p5-Net-Domain-TLD
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Data::Validate::Domain.3

.include <bsd.port.mk>
