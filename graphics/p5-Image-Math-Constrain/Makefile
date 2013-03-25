# Created by: coryking
# $FreeBSD: graphics/p5-Image-Math-Constrain/Makefile 314065 2013-03-13 11:10:10Z bapt $

PORTNAME=	Image-Math-Constrain
PORTVERSION=	1.02
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	coryking@mozimedia.com
COMMENT=	Scaling math used in image size constraining (such as thumbnails)

BUILD_DEPENDS=	p5-PathTools>=3.25:${PORTSDIR}/devel/p5-PathTools
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Image::Math::Constrain.3

.include <bsd.port.mk>
