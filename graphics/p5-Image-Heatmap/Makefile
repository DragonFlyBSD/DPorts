# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: graphics/p5-Image-Heatmap/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image-Heatmap
PORTVERSION=	0.565
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	skreuzer@FreeBSD.org
COMMENT=	Convert geographic coordinates into a graphical heatmap

LICENSE_COMB=	dual
LICENSE=	ART20 GPLv1

RUN_DEPENDS=	convert:${PORTSDIR}/graphics/ImageMagick

WRKSRC=	${WRKDIR}/${PORTNAME}
USES=		perl5
USE_PERL5=	configure

MAN3=	Image::Heatmap.3

NO_STAGE=	yes
.include <bsd.port.mk>
