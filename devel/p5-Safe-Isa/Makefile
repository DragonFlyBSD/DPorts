# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/p5-Safe-Isa/Makefile 328865 2013-09-30 20:25:25Z sunpoet $

PORTNAME=	Safe-Isa
PORTVERSION=	1.000.002
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Call isa, can, does and DOES safely on things that may not be objects

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USE_PERL5=	configure
USES=		perl5

post-patch:
	@${REINPLACE_CMD} -e '/NAME/ s|Safe-Isa|Safe::Isa|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
