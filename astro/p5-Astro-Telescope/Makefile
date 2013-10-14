# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: astro/p5-Astro-Telescope/Makefile 327701 2013-09-20 13:14:04Z bapt $

PORTNAME=	Astro-Telescope
PORTVERSION=	0.71
CATEGORIES=	astro perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Class for obtaining telescope information

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Astro-PAL>=0.99:${PORTSDIR}/astro/p5-Astro-PAL
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	modbuild
USES=		perl5
NO_STAGE=	yes

MAN3=		Astro::Telescope.3

.include <bsd.port.mk>
